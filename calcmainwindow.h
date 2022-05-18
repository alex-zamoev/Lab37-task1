//
// Created by alex on 18.05.2022.
//

#ifndef TASK1_CALCMAINWINDOW_H
#define TASK1_CALCMAINWINDOW_H
#include <QMainWindow>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

class CalcMainWindow : public QMainWindow{
Q_OBJECT
public:
    QLineEdit *second = nullptr;
    QLineEdit *first = nullptr;
    QLabel *result = nullptr;
    QLabel *label = nullptr;
    //int res = 0;
    CalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}
public slots:
    void plus(){
        QString s;
        int t1 = first->text().toInt();
        int t2 = second->text().toInt();
        int res = t1 + t2;
        s.setNum(res);
        result->setText(s);};
    void minus(){
        QString s;
        int t1 = first->text().toInt();
        int t2 = second->text().toInt();
        int res = t1 - t2;
        s.setNum(res);
        result->setText(s);
    };
    void divide(){
        QString s;
        int t1 = first->text().toInt();
        int t2 = second->text().toInt();
        if(t2 == 0) s = "Error";
        else{
            int res = t1 / t2;
            s.setNum(res);
        }
        result->setText(s);
    };
    void multiply(){
        QString s;
        int t1 = first->text().toInt();
        int t2 = second->text().toInt();
        int res = t1 * t2;
        s.setNum(res);
        result->setText(s);
    };
};
#endif //TASK1_CALCMAINWINDOW_H