#include "QtClicker.h"
#include <string>
#include <QPixmap>

using namespace std;
QtClicker::QtClicker(QWidget* parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    timer.setInterval(100);
    //! Funkcja odpowiedzialna za wlaczenie timer'a
    timer.start(); 
    connect(&timer, SIGNAL(timeout()), this, SLOT(update()));
    QPixmap pix("logo.png");
    //! Funkcja odpowiedzialna za ustawienie rozmaru loga
    ui.label->setPixmap(pix.scaled(800, 100, Qt::KeepAspectRatio)); 
    //! Funkcja odpowiedzialna za inicjalizacje
    init(); 

}
QtClicker::~QtClicker()
{}