#include "QtClicker.h"
#include <string>
#include <QPixmap>

using namespace std;
QtClicker::QtClicker(QWidget* parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    timer.setInterval(100);
    timer.start(); //!< funkcja odpowiedzialna za wlaczenie timer'a
    connect(&timer, SIGNAL(timeout()), this, SLOT(update()));
    QPixmap pix("logo.png");
    ui.label->setPixmap(pix.scaled(800, 100, Qt::KeepAspectRatio)); //!< funkcja odpowiedzialna za ustawienie rozmaru loga
    init(); //!< funkcja odpowiedzialna za inicjalizacje

}
QtClicker::~QtClicker()
{}