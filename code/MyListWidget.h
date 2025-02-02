#pragma once

#include <QWidget>
#include <ui_MyListWidget.h>
#include "MyListTableModel.h"

class MyListWidget : public QWidget
{
	Q_OBJECT

public:
	MyListWidget(MyListTableModel* model, QWidget* parent = Q_NULLPTR);
	~MyListWidget() {};
	void addInWatchList(const std::string &title) {
		model->addInWatchList(title);

	};
	void changeRepositoryFileName(std::string fileName, std::string extension) {
		this->model->changeRepositoryFileName(fileName, extension);
	}
private:
	Ui::MyListWidget ui;
	MyListTableModel* model;
};
