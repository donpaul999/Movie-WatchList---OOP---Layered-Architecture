#include "Lab12.h"
#include <iostream>
#include "qmessagebox.h"
#include <qshortcut.h>

Lab12::Lab12(AdminService& adminServiceGiven, UserService& userServiceGiven, MyListWidget& myListWidget, QWidget *parent)
	: QMainWindow(parent), adminService{adminServiceGiven}, userService{userServiceGiven}, myListWidget{ myListWidget }
{
	ui.setupUi(this);
    this->populateMyList();
    this->connectSignalsAndSlots();
    this->modeAOrB = 1;
}

void Lab12::populateList()
{
    this->ui.movieListWidget->clear();
    try {
        if (this->adminService.adminGetMovieList().size() == 0)
            return;
        vector<Movie> allMovies = this->adminService.adminGetMovieList();
        for (Movie& movieUsed : allMovies)
            this->ui.movieListWidget->addItem(QString::fromStdString(movieUsed.getOutputForm()));
    }
    catch (std::exception & e) {
        return;
    }
}

void Lab12::connectSignalsAndSlots() {
    QShortcut* undoShortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z), this);
    QShortcut* redoShortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Y), this);

    QObject::connect(undoShortcut, &QShortcut::activated, this, &Lab12::undo);
    QObject::connect(redoShortcut, &QShortcut::activated, this, &Lab12::redo);
    QObject::connect(this->ui.movieListWidget, &QListWidget::itemSelectionChanged, [this](){
        int selectedIndex = this->getSelectedIndex();
        if(selectedIndex < 0 || this->adminService.adminGetMovieList().size() == 0)
            return;
        Movie movieUsed = this->adminService.adminGetMovieList()[selectedIndex];
        this->ui.titleLineEdit->setText(QString::fromStdString(movieUsed.getTitle()));
        this->ui.genreLineEdit->setText(QString::fromStdString(movieUsed.getGenre()));
        this->ui.yearOfReleaseLineEdit->setText(QString::fromStdString(std::to_string(movieUsed.getYearOfRelease())));
        this->ui.numberOfLikesLineEdit->setText(QString::fromStdString(std::to_string(movieUsed.getNumberOfLikes())));
        this->ui.trailerLineEdit->setText(QString::fromStdString(movieUsed.getTrailer()));
        this->ui.fileLocationLineEdit->setText(QString::fromStdString(this->adminService.getFileName()));
    });
    QObject::connect(this->ui.myListWidget, &QListWidget::itemSelectionChanged, [this]() {
        this->ui.fileLocationLineEdit_2->setText(QString::fromStdString(this->userService.getFileName()));
    });
    QObject::connect(this->ui.deleteButton, &QPushButton::clicked, this, &Lab12::deleteMovie);
    QObject::connect(this->ui.addButton, &QPushButton::clicked, this, &Lab12::addMovie);
    QObject::connect(this->ui.updateButton, &QPushButton::clicked, this, &Lab12::updateMovie);
    QObject::connect(this->ui.undoButton, &QPushButton::clicked, this, &Lab12::undo);
    QObject::connect(this->ui.redoButton, &QPushButton::clicked, this, &Lab12::redo);
    QObject::connect(this->ui.updateFileLocationButton, &QPushButton::clicked, this, &Lab12::updateFileName);
    QObject::connect(this->ui.updateMyListLocationButton, &QPushButton::clicked, this, &Lab12::updateMyListLocation);
    QObject::connect(this->ui.sortByGenreButton, &QPushButton::clicked, this, &Lab12::sortByGenre);
    QObject::connect(this->ui.saveToMyListButton, &QPushButton::clicked, this, &Lab12::addToWatchList);
    QObject::connect(this->ui.openWatchListButton, &QPushButton::clicked, this, &Lab12::openMyList);
    QObject::connect(this->ui.nextButton, &QPushButton::clicked, this, &Lab12::nextMovie);
    QObject::connect(this->ui.adminButton, &QPushButton::clicked, this, &Lab12::modeA);
    QObject::connect(this->ui.userButton, &QPushButton::clicked, this, &Lab12::modeB);
    QObject::connect(this->ui.openMyListButton, &QPushButton::clicked, this, &Lab12::openMyListInNewWindow);
}


int Lab12::getSelectedIndex() const {
    QModelIndexList selectedIndexes = this->ui.movieListWidget->selectionModel()->selectedIndexes();
    if(selectedIndexes.size() == 0){
        this->ui.titleLineEdit->clear();
        this->ui.genreLineEdit->clear();
        this->ui.yearOfReleaseLineEdit->clear();
        this->ui.numberOfLikesLineEdit->clear();
        this->ui.trailerLineEdit->clear();
        return -1;
    }

    int selectedIndex = selectedIndexes.at(0).row();
    return selectedIndex;
}

void Lab12::addMovie() {
    if(modeAOrB == 0) {
        QMessageBox::critical(this, "Error", "Mode Admin required");
        return;
    }
    std::string title = this->ui.titleLineEdit->text().toStdString();
    std::string genre = this->ui.genreLineEdit->text().toStdString();
    std::string stringYearOfRelease = this->ui.yearOfReleaseLineEdit->text().toStdString();
    std::string stringNumberOfLikes = this->ui.numberOfLikesLineEdit->text().toStdString();
    std::string trailer = this->ui.trailerLineEdit->text().toStdString();

    int yearOfRelease = stoi(stringYearOfRelease);
    int numberOfLikes = stoi(stringNumberOfLikes);
    Movie movieUsed{title, genre, yearOfRelease, numberOfLikes, trailer};
    std::vector<Movie>movieList = this->adminService.adminGetMovieList();
    if(std::find(movieList.begin(), movieList.end(), movieUsed) != movieList.end())
        try{
            this->adminService.adminUpdateMovie(title, genre, yearOfRelease, numberOfLikes, trailer);
        }
        catch(std::exception& e){
            QMessageBox::critical(this, "Error", e.what());
            return;
        }
    else
        try {
            this->adminService.adminAddMovie(title, genre, yearOfRelease, numberOfLikes, trailer);
        }
        catch(std::exception& e){
            QMessageBox::critical(this, "Error", e.what());
            return;
        }
    this->populateList();

    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);
}

void Lab12::updateMovie(){
    if(modeAOrB == 0) {
        QMessageBox::critical(this, "Error", "Mode Admin required");
        return;
    }
    int selectedIndex = this->getSelectedIndex();
    if(selectedIndex < 0){
        QMessageBox::critical(this, "Error", "No movie selected!");
        return;
    }
    std::string title = this->ui.titleLineEdit->text().toStdString();
    std::string genre = this->ui.genreLineEdit->text().toStdString();
    std::string stringYearOfRelease = this->ui.yearOfReleaseLineEdit->text().toStdString();
    std::string stringNumberOfLikes = this->ui.numberOfLikesLineEdit->text().toStdString();
    std::string trailer = this->ui.trailerLineEdit->text().toStdString();

    int yearOfRelease = stoi(stringYearOfRelease);
    int numberOfLikes = stoi(stringNumberOfLikes);
    Movie movieUsed{title, genre, yearOfRelease, numberOfLikes, trailer};
    std::vector<Movie>movieList = this->adminService.adminGetMovieList();
    if(std::find(movieList.begin(), movieList.end(), movieUsed) != movieList.end())
        try{
            this->adminService.adminUpdateMovie(title, genre, yearOfRelease, numberOfLikes, trailer);
        }
        catch(std::exception& e){
            QMessageBox::critical(this, "Errorxx", e.what());
            return;
        }
    else{
        QMessageBox::critical(this, "Error", "No such movie in the list!");
    }

    this->populateList();

    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);
}


void Lab12::deleteMovie() {
    if(modeAOrB == 0) {
        QMessageBox::critical(this, "Error", "Mode A required");
        return;
    }
    int selectedIndex = this->getSelectedIndex();
    if(selectedIndex < 0){
        QMessageBox::critical(this, "Error", "No movie selected!");
        return;
    }
    std::string title = this->adminService.adminGetMovieList()[selectedIndex].getTitle();
    try{
        this->adminService.adminDeleteMovie(title);
    }
    catch(std::exception& e){
        QMessageBox::critical(this, "Error", e.what());
        return;
    }

    this->populateList();

    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);

}

void Lab12::undo() {
    try{
        this->adminService.undo();
    }
    catch(std::exception& e){
        QMessageBox::critical(this, "Error", e.what());
        return;
    }
    this->populateList();
    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);
}

void Lab12::redo() {
    try{
        this->adminService.redo();
    }
    catch(std::exception& e){
        QMessageBox::critical(this, "Error", e.what());
        return;
    }
    this->populateList();
    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);

}

void Lab12::updateFileName() {
    std::string fileTitle = this->ui.fileLocationLineEdit->text().toStdString();
    try {
        this->adminService.changeRepositoryFileName(fileTitle);
    }
    catch(std::exception& e){
        QMessageBox::critical(this, "Error", e.what());
        return;
    }
    this->populateList();
    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);
}

void Lab12::sortByGenre() {
    if(modeAOrB == 1) {
        QMessageBox::critical(this, "Error", "Mode User required");
        return;
    }
    std::string genreGiven = this->ui.genreToSortByLineEdit->text().toStdString();
    try {
       this->adminService.filterMoviesByGenre(genreGiven);
    }
    catch(std::exception& e){
        QMessageBox::critical(this, "Error", e.what());
        return;
    }
    this->populateList();
    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);
}

void Lab12::updateMyListLocation(){
    std::string fileTitle = this->ui.fileLocationLineEdit_2->text().toStdString();
    try {
        std::vector<std::string> tokens = this->adminService.explode(fileTitle, '.');
        this->myListWidget.changeRepositoryFileName(tokens[0] + "." +tokens[1], tokens[1]);
    }
    catch(std::exception& e){
        QMessageBox::critical(this, "Error", e.what());
        return;
    }
    this->populateList();
    int lastElem = this->adminService.adminGetMovieList().size() - 1;
    this->ui.movieListWidget->setCurrentRow(lastElem);
    populateMyList();
}

void Lab12::addToWatchList() {
    if(modeAOrB == 1) {
        QMessageBox::critical(this, "Error", "Mode User required");
        return;
    }
    std::string title = this->ui.titleLineEdit->text().toStdString();
    try {
        this->myListWidget.addInWatchList(title);
    }
    catch(std::exception& e){
        QMessageBox::critical(this, "Error", e.what());
        return;
    }

    populateMyList();
}

void Lab12::populateMyList(){
    this->ui.myListWidget->clear();
    if(this->userService.userGetWatchList().size() == 0)
        return;
    vector<Movie> allMovies = this->userService.userGetWatchList();
    for (Movie& movieUsed : allMovies)
        this->ui.myListWidget->addItem(QString::fromStdString(movieUsed.getOutputForm()));
    populateList();
}

void Lab12::openMyList(){
    if(modeAOrB == 1) {
        QMessageBox::critical(this, "Error", "Mode User required");
        return;
    }
    std::string command;
    if(userService.isRepositoryCSV())
        command = "open -a 'Numbers.app' " + userService.getFileName();
    if(userService.isRepositoryHTML())
        command = "open -a 'Google Chrome.app' " + userService.getFileName();
    if(userService.isRepositoryCSV() || userService.isRepositoryHTML())
        system(command.c_str());
}

void Lab12::nextMovie(){
    if(modeAOrB == 1) {
        QMessageBox::critical(this, "Error", "Mode User required");
        return;
    }
    int lastElem = this->getSelectedIndex();
    if (this->adminService.adminGetMovieList().size() == 0){
        QMessageBox::critical(this, "Error", "No movies in the list");
        return;
    }
    if(lastElem + 1 == this->adminService.adminGetMovieList().size())
        lastElem = -1;
    this->ui.movieListWidget->setCurrentRow(lastElem + 1);
}

void Lab12::openMyListInNewWindow()
{
    myListWidget.show();
}
