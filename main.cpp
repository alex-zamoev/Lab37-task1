#include <QApplication>
#include <QPushButton>
#include "calcmainwindow.h"
#include "./ui_calc.h"



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.first = calc.first;
    window.second = calc.second;
    window.result = calc.result;
    window.label = calc.label;
    window.resize(320, 240);
    window.show();
    return QApplication::exec();
}
