#include "optionwindow.h"

OptionWindow::OptionWindow(QWidget *parent)
	: QMainWindow(parent)
{
	difficulte = 700;
	optionWidget = new QWidget();

	//LAYOUT PRINCIPAL
	layoutOption = new QVBoxLayout;

	//BACKGROUND DE LINTERFACE
	QPixmap bkgnd("./Image/Background.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);

	//BOUTON DE OPTION
	boutonRetour= new QPushButton("&Retour:");
	QObject::connect(boutonRetour, SIGNAL(clicked()), this, SLOT(close()));

	boutonFacile = new QPushButton("&Facile");
	connect(boutonFacile, &QPushButton::clicked, this, &OptionWindow::facile);

	boutonMoyen = new QPushButton("&Moyen");
	connect(boutonMoyen, &QPushButton::clicked, this, &OptionWindow::moyen);

	boutonDifficile= new QPushButton("&Difficile");
	connect(boutonDifficile, &QPushButton::clicked, this, &OptionWindow ::difficile);


	//PLACEMENT LAYOUT PRINCIPAL
	layoutOption->addWidget(boutonFacile);
	layoutOption->addWidget(boutonMoyen);
	layoutOption->addWidget(boutonDifficile);
	layoutOption->addWidget(boutonRetour);

	optionWidget->setLayout(layoutOption);
	setCentralWidget(optionWidget);

}

void OptionWindow::facile()
{
	difficulte = 900;
	cout << "optiondiff:" << difficulte << endl;
};

void OptionWindow::moyen()
{
	difficulte = 700;
	cout << "optiondiff:" << difficulte << endl;

};


void OptionWindow::difficile()
{
	difficulte = 250;
	cout << "optiondiff:" << difficulte << endl;

};


OptionWindow::~OptionWindow()
{


	delete layoutOption;
	delete optionWidget;
}

