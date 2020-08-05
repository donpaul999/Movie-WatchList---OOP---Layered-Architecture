/********************************************************************************
** Form generated from reading UI file 'Lab12.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB12_H
#define UI_LAB12_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab12Class
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *movieListWidget;
    QPushButton *saveToMyListButton;
    QListWidget *myListWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLineEdit *titleLineEdit;
    QLabel *genreLabel;
    QLineEdit *genreLineEdit;
    QLabel *yearOfReleaseLabel;
    QLineEdit *yearOfReleaseLineEdit;
    QLabel *numberOfLikesLabel;
    QLineEdit *numberOfLikesLineEdit;
    QLabel *trailerLabel;
    QLineEdit *trailerLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_2;
    QLabel *titleLabel_2;
    QLineEdit *fileLocationLineEdit;
    QPushButton *updateFileLocationButton;
    QPushButton *userButton;
    QPushButton *adminButton;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *genreToSortByLineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *nextButton;
    QPushButton *sortByGenreButton;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLineEdit *fileLocationLineEdit_2;
    QLabel *titleLabel_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *updateMyListLocationButton;
    QPushButton *openWatchListButton;
    QPushButton *openMyListButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lab12Class)
    {
        if (Lab12Class->objectName().isEmpty())
            Lab12Class->setObjectName(QString::fromUtf8("Lab12Class"));
        Lab12Class->resize(1038, 884);
        centralwidget = new QWidget(Lab12Class);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_9 = new QVBoxLayout(centralwidget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        movieListWidget = new QListWidget(centralwidget);
        movieListWidget->setObjectName(QString::fromUtf8("movieListWidget"));

        horizontalLayout_5->addWidget(movieListWidget);

        saveToMyListButton = new QPushButton(centralwidget);
        saveToMyListButton->setObjectName(QString::fromUtf8("saveToMyListButton"));

        horizontalLayout_5->addWidget(saveToMyListButton);

        myListWidget = new QListWidget(centralwidget);
        myListWidget->setObjectName(QString::fromUtf8("myListWidget"));

        horizontalLayout_5->addWidget(myListWidget);


        verticalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setPointSize(18);
        titleLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        titleLineEdit = new QLineEdit(centralwidget);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));
        titleLineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, titleLineEdit);

        genreLabel = new QLabel(centralwidget);
        genreLabel->setObjectName(QString::fromUtf8("genreLabel"));
        genreLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, genreLabel);

        genreLineEdit = new QLineEdit(centralwidget);
        genreLineEdit->setObjectName(QString::fromUtf8("genreLineEdit"));
        genreLineEdit->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, genreLineEdit);

        yearOfReleaseLabel = new QLabel(centralwidget);
        yearOfReleaseLabel->setObjectName(QString::fromUtf8("yearOfReleaseLabel"));
        yearOfReleaseLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, yearOfReleaseLabel);

        yearOfReleaseLineEdit = new QLineEdit(centralwidget);
        yearOfReleaseLineEdit->setObjectName(QString::fromUtf8("yearOfReleaseLineEdit"));
        yearOfReleaseLineEdit->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, yearOfReleaseLineEdit);

        numberOfLikesLabel = new QLabel(centralwidget);
        numberOfLikesLabel->setObjectName(QString::fromUtf8("numberOfLikesLabel"));
        numberOfLikesLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, numberOfLikesLabel);

        numberOfLikesLineEdit = new QLineEdit(centralwidget);
        numberOfLikesLineEdit->setObjectName(QString::fromUtf8("numberOfLikesLineEdit"));
        numberOfLikesLineEdit->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, numberOfLikesLineEdit);

        trailerLabel = new QLabel(centralwidget);
        trailerLabel->setObjectName(QString::fromUtf8("trailerLabel"));
        trailerLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, trailerLabel);

        trailerLineEdit = new QLineEdit(centralwidget);
        trailerLineEdit->setObjectName(QString::fromUtf8("trailerLineEdit"));
        trailerLineEdit->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, trailerLineEdit);


        verticalLayout_5->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        horizontalLayout->addWidget(updateButton);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        undoButton = new QPushButton(centralwidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));

        horizontalLayout_2->addWidget(undoButton);

        redoButton = new QPushButton(centralwidget);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));

        horizontalLayout_2->addWidget(redoButton);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        titleLabel_2 = new QLabel(centralwidget);
        titleLabel_2->setObjectName(QString::fromUtf8("titleLabel_2"));
        titleLabel_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, titleLabel_2);

        fileLocationLineEdit = new QLineEdit(centralwidget);
        fileLocationLineEdit->setObjectName(QString::fromUtf8("fileLocationLineEdit"));
        fileLocationLineEdit->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, fileLocationLineEdit);


        verticalLayout_6->addLayout(formLayout_2);

        updateFileLocationButton = new QPushButton(centralwidget);
        updateFileLocationButton->setObjectName(QString::fromUtf8("updateFileLocationButton"));

        verticalLayout_6->addWidget(updateFileLocationButton);


        verticalLayout_7->addLayout(verticalLayout_6);

        userButton = new QPushButton(centralwidget);
        userButton->setObjectName(QString::fromUtf8("userButton"));

        verticalLayout_7->addWidget(userButton);

        adminButton = new QPushButton(centralwidget);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));

        verticalLayout_7->addWidget(adminButton);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        genreToSortByLineEdit = new QLineEdit(centralwidget);
        genreToSortByLineEdit->setObjectName(QString::fromUtf8("genreToSortByLineEdit"));

        horizontalLayout_3->addWidget(genreToSortByLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        verticalLayout->addWidget(nextButton);

        sortByGenreButton = new QPushButton(centralwidget);
        sortByGenreButton->setObjectName(QString::fromUtf8("sortByGenreButton"));

        verticalLayout->addWidget(sortByGenreButton);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        fileLocationLineEdit_2 = new QLineEdit(centralwidget);
        fileLocationLineEdit_2->setObjectName(QString::fromUtf8("fileLocationLineEdit_2"));
        fileLocationLineEdit_2->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, fileLocationLineEdit_2);

        titleLabel_3 = new QLabel(centralwidget);
        titleLabel_3->setObjectName(QString::fromUtf8("titleLabel_3"));
        titleLabel_3->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, titleLabel_3);


        verticalLayout_3->addLayout(formLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        updateMyListLocationButton = new QPushButton(centralwidget);
        updateMyListLocationButton->setObjectName(QString::fromUtf8("updateMyListLocationButton"));

        verticalLayout_2->addWidget(updateMyListLocationButton);

        openWatchListButton = new QPushButton(centralwidget);
        openWatchListButton->setObjectName(QString::fromUtf8("openWatchListButton"));

        verticalLayout_2->addWidget(openWatchListButton);

        openMyListButton = new QPushButton(centralwidget);
        openMyListButton->setObjectName(QString::fromUtf8("openMyListButton"));

        verticalLayout_2->addWidget(openMyListButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_4);

        Lab12Class->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Lab12Class);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1038, 25));
        Lab12Class->setMenuBar(menubar);
        statusbar = new QStatusBar(Lab12Class);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Lab12Class->setStatusBar(statusbar);

        retranslateUi(Lab12Class);

        QMetaObject::connectSlotsByName(Lab12Class);
    } // setupUi

    void retranslateUi(QMainWindow *Lab12Class)
    {
        Lab12Class->setWindowTitle(QCoreApplication::translate("Lab12Class", "MainWindow", nullptr));
        saveToMyListButton->setText(QCoreApplication::translate("Lab12Class", ">", nullptr));
        titleLabel->setText(QCoreApplication::translate("Lab12Class", "Title", nullptr));
        genreLabel->setText(QCoreApplication::translate("Lab12Class", "Genre", nullptr));
        yearOfReleaseLabel->setText(QCoreApplication::translate("Lab12Class", "Year of Release", nullptr));
        numberOfLikesLabel->setText(QCoreApplication::translate("Lab12Class", "Number of likes", nullptr));
        trailerLabel->setText(QCoreApplication::translate("Lab12Class", "Trailer", nullptr));
        addButton->setText(QCoreApplication::translate("Lab12Class", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("Lab12Class", "Delete", nullptr));
        updateButton->setText(QCoreApplication::translate("Lab12Class", "Update", nullptr));
        undoButton->setText(QCoreApplication::translate("Lab12Class", "Undo", nullptr));
        redoButton->setText(QCoreApplication::translate("Lab12Class", "Redo", nullptr));
        titleLabel_2->setText(QCoreApplication::translate("Lab12Class", "FileLocation", nullptr));
        fileLocationLineEdit->setText(QString());
        updateFileLocationButton->setText(QCoreApplication::translate("Lab12Class", "Update File", nullptr));
        userButton->setText(QCoreApplication::translate("Lab12Class", "Mode User", nullptr));
        adminButton->setText(QCoreApplication::translate("Lab12Class", "Mode Admin", nullptr));
        label->setText(QCoreApplication::translate("Lab12Class", "Sort by Genre", nullptr));
        nextButton->setText(QCoreApplication::translate("Lab12Class", "Next", nullptr));
        sortByGenreButton->setText(QCoreApplication::translate("Lab12Class", "Sort", nullptr));
        fileLocationLineEdit_2->setText(QString());
        titleLabel_3->setText(QCoreApplication::translate("Lab12Class", "MyList Location", nullptr));
        updateMyListLocationButton->setText(QCoreApplication::translate("Lab12Class", "Update File", nullptr));
        openWatchListButton->setText(QCoreApplication::translate("Lab12Class", "Open Watch List", nullptr));
        openMyListButton->setText(QCoreApplication::translate("Lab12Class", "Open My List In Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab12Class: public Ui_Lab12Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB12_H
