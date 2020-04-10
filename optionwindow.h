#ifndef	OPTIONWINDOW_H
#define OPTIONWINDOW_H

#include <QMainWindow>
#include <qlayout.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <QSound.h>
#include <iostream>

using namespace std;

class OptionWindow : public QMainWindow
{
	Q_OBJECT

public:
	OptionWindow(QWidget *parent = nullptr);
	~OptionWindow();
	int difficulte;

public slots:
	void facile();
	void moyen();
	void difficile();


private:

	QVBoxLayout *layoutOption;
	QWidget *optionWidget;
	QPushButton *boutonRetour;
	QPushButton *boutonFacile;
	QPushButton *boutonMoyen;
	QPushButton *boutonDifficile;


};
#endif // MAINWINDOW_H
