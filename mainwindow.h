#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QKeyEvent>
#include <QMessageBox>
#include <QMetaEnum>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include "exceptionCooCoo.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_ENUMS(angle)


private:
    Ui::MainWindow *ui;
    //QStack<int> *pile;
    bool complexe; //0 pour non complexe et 1 pour complexe
    bool clavier; //0 pour cach� et 1 pour visible
    enum TypeAngle {degre, radian};
    TypeAngle angle;
    enum TypeConstante {entier, rationnel, reel};
    TypeConstante cste;
    int nb_elem_affiche;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void AffichageEcran();
    void InitParam();
    void MAJParam();

    void calcul_plus();
    void calcul_moins();
    void calcul_mult();
    void keyPressEvent(QKeyEvent *);
    void setAngle(TypeAngle a){
        angle=a;
    }
    TypeAngle getAngle(){
        return angle;
    }
    void setConstante(TypeConstante c){
        cste=c;
    }
    TypeConstante getConstante(){
        return cste;
    }
    bool getComplexe(){
        return complexe;
    }
    void setComplexe(bool c){
        complexe=c;
    }
    bool getClavier(){
        return clavier;
    }
    void setClavier(bool c){
        clavier=c;
    }
    int getNbPile(){
        return nb_elem_affiche;
    }
    void setNbPile(int n){
        nb_elem_affiche=n;
    }

/* TODO    signals:
        void pushStack_signal(const QString&);
        void cleanList_signal();
        void refresh_signal();
*/


private slots:

    void on_0();
    void on_1();
    void on_2();
    void on_3();
    void on_4();
    void on_5();
    void on_6();
    void on_7();
    void on_8();
    void on_9();
    void on_espace();
    void on_virgule();
    void on_commit();
    void on_addition();
    void on_soustraction();
    void on_multiplication();
    void on_division();
    void on_effacer();
    void on_parenthese_droite();
    void on_parenthese_gauche();
    void on_dollar();

    // slots des op�rations sur la pile
    void on_swap();
    void on_sum();
    void on_dup();
    void on_mean();
    void on_clear();
    void on_drop();


    // slots des param�tres
    void on_clavier(bool);
    void on_nbPile(int);
    void on_complexe(int);
    void on_angle(int);
    void on_constante(int);

    void on_Annuler_triggered();
    void on_Retablir_triggered();

    // slots des fonctions
    void on_quote();
    void on_eval();

    void on_cos();
    void on_sin();
    void on_tan();

    void on_cosh();
    void on_sinh();
    void on_tanh();

    void on_mod();

    void on_ln();
    void on_log();

    void on_inv();
    void on_sign();

    void on_pow();
    void on_cube();
    void on_sqr();
    void on_sqrt();
    void on_fact();





};



void refresh_entier(Ui::MainWindow *);
void refresh_reel_rationnel(Ui::MainWindow *);
void refresh_complexe(Ui::MainWindow *);


#endif // MAINWINDOW_H
