#include "mainwindow.h"
#include "ui_mainwindow.h"
// DANS LA FONCTION EMPILER IL FAUT EMPILER TORATIONNEL(S), TOREEL(S)...
// REMPLACER les set text par des insert
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
   // pile(new Pile()); d'abord implementer la pile
    this->setWindowTitle("CooCoo");
    this->setWindowIcon(QIcon(QString("E:/Dropbox/LO21/CooCoo/CooCoo.png")));

    // Connections slot/signaux des boutons du clavier
    QObject::connect(ui->b0, SIGNAL(clicked()), this, SLOT(on_0()));
    QObject::connect(ui->b1, SIGNAL(clicked()), this, SLOT(on_1()));
    QObject::connect(ui->b2, SIGNAL(clicked()), this, SLOT(on_2()));
    QObject::connect(ui->b3, SIGNAL(clicked()), this, SLOT(on_3()));
    QObject::connect(ui->b4, SIGNAL(clicked()), this, SLOT(on_4()));
    QObject::connect(ui->b5, SIGNAL(clicked()), this, SLOT(on_5()));
    QObject::connect(ui->b6, SIGNAL(clicked()), this, SLOT(on_6()));
    QObject::connect(ui->b7, SIGNAL(clicked()), this, SLOT(on_7()));
    QObject::connect(ui->b8, SIGNAL(clicked()), this, SLOT(on_8()));
    QObject::connect(ui->b9, SIGNAL(clicked()), this, SLOT(on_9()));
    QObject::connect(ui->bEsp, SIGNAL(clicked()), this, SLOT(on_espace()));
    QObject::connect(ui->bVirg, SIGNAL(clicked()), this, SLOT(on_virgule()));
    QObject::connect(ui->bCommit, SIGNAL(clicked()), this, SLOT(on_commit()));
    QObject::connect(ui->bAdd, SIGNAL(clicked()), this, SLOT(on_addition()));
    QObject::connect(ui->bSoustr, SIGNAL(clicked()), this, SLOT(on_soustraction()));
    QObject::connect(ui->bMult, SIGNAL(clicked()), this, SLOT(on_multiplication()));
    QObject::connect(ui->bDiv, SIGNAL(clicked()), this, SLOT(on_division()));
    QObject::connect(ui->bC, SIGNAL(clicked()), this, SLOT(on_effacer()));
    QObject::connect(ui->bParD, SIGNAL(clicked()), this, SLOT(on_parenthese_droite()));
    QObject::connect(ui->bParG, SIGNAL(clicked()), this, SLOT(on_parenthese_gauche()));
    QObject::connect(ui->bDollar, SIGNAL(clicked()), this, SLOT(on_dollar()));

    // Connections slot/signaux des boutons des fonctions de la pile
    QObject::connect(ui->bSwap, SIGNAL(clicked()), this, SLOT(on_swap()));
    QObject::connect(ui->bSum, SIGNAL(clicked()), this, SLOT(on_sum()));
    QObject::connect(ui->bDup, SIGNAL(clicked()), this, SLOT(on_dup()));

    // Connections slot/signaux des boutons des param�tres
    QObject::connect(ui->cClavier, SIGNAL(toggled(bool)), this, SLOT(on_clavier(bool)));
    QObject::connect(ui->Complexes, SIGNAL(currentIndexChanged(int)), this, SLOT(on_complexe()));
    QObject::connect(ui->UniteAngle, SIGNAL(currentIndexChanged(int)), this, SLOT(on_angle()));
    QObject::connect(ui->TypeConstante, SIGNAL(currentIndexChanged(int)), this, SLOT(on_constante()));

    // Connections slot/signaux des boutons des fonctions
    QObject::connect(ui->bQuote, SIGNAL(clicked()), this, SLOT(on_quote()));
    QObject::connect(ui->bEval, SIGNAL(clicked()), this, SLOT(on_eval()));

    QObject::connect(ui->bCos, SIGNAL(clicked()), this, SLOT(on_cos()));
    QObject::connect(ui->bSin, SIGNAL(clicked()), this, SLOT(on_sin()));
    QObject::connect(ui->bTan, SIGNAL(clicked()), this, SLOT(on_tan()));
    QObject::connect(ui->bCosh, SIGNAL(clicked()), this, SLOT(on_cosh()));
    QObject::connect(ui->bSinh, SIGNAL(clicked()), this, SLOT(on_sinh()));
    QObject::connect(ui->bTanh, SIGNAL(clicked()), this, SLOT(on_tanh()));

    QObject::connect(ui->bMod, SIGNAL(clicked()), this, SLOT(on_mod()));
    QObject::connect(ui->bLn, SIGNAL(clicked()), this, SLOT(on_ln()));
    QObject::connect(ui->bLog, SIGNAL(clicked()), this, SLOT(on_log()));
    QObject::connect(ui->bInv, SIGNAL(clicked()), this, SLOT(on_inv()));
    QObject::connect(ui->bCarre, SIGNAL(clicked()), this, SLOT(on_sqr()));
    QObject::connect(ui->bRacine, SIGNAL(clicked()), this, SLOT(on_sqrt()));
    QObject::connect(ui->bCube, SIGNAL(clicked()), this, SLOT(on_cube()));
    QObject::connect(ui->bSign, SIGNAL(clicked()), this, SLOT(on_sign()));
    QObject::connect(ui->bPow, SIGNAL(clicked()), this, SLOT(on_pow()));

}


// Slot clavier
void MainWindow::on_1(){
    ui->Afficheur->insert( "1");
}
void MainWindow::on_2(){
    ui->Afficheur->insert( "2");
}
void MainWindow::on_3(){
    ui->Afficheur->insert( "3");
}
void MainWindow::on_4(){
    ui->Afficheur->insert( "4");
}
void MainWindow::on_5(){
    ui->Afficheur->insert( "5");
}
void MainWindow::on_6(){
    ui->Afficheur->insert( "6");
}
void MainWindow::on_7(){
    ui->Afficheur->insert( "7");
}
void MainWindow::on_8(){
    ui->Afficheur->insert( "8");
}
void MainWindow::on_9(){
    ui->Afficheur->insert( "9");
}
void MainWindow::on_0(){
    ui->Afficheur->insert( "0");
}
void MainWindow::on_virgule(){
    ui->Afficheur->insert( ".");
}
void MainWindow::on_espace(){
    ui->Afficheur->insert( " ");
}
void MainWindow::on_addition(){
    ui->Afficheur->insert( "+");
}
void MainWindow::on_soustraction(){
    ui->Afficheur->insert( "-");
}
void MainWindow::on_multiplication(){
    ui->Afficheur->insert( "x");
}
void MainWindow::on_division(){
    ui->Afficheur->insert( "/");
}
void MainWindow::on_effacer(){
    ui->Afficheur->clear();
}
void MainWindow::on_parenthese_gauche(){
      ui->Afficheur->insert("(");
}
void MainWindow::on_parenthese_droite(){
      ui->Afficheur->insert(")");
}
void MainWindow::on_dollar(){
    ui->Afficheur->insert("$");
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_0:
        on_0();
        break;
    case Qt::Key_1:
        on_1();
        break;
    case Qt::Key_2:
        on_2();
        break;
    case Qt::Key_3:
        on_3();
        break;
    case Qt::Key_4:
        on_4();
        break;
    case Qt::Key_5:
        on_5();
        break;
    case Qt::Key_6:
        on_6();
        break;
    case Qt::Key_7:
        on_7();
        break;
    case Qt::Key_8:
        on_8();
        break;
    case Qt::Key_9:
        on_1();
        break;

        case Qt::Key_Period:
            on_virgule();
            break;
    }
}
// Slots fonctions
void MainWindow::on_quote(){
      ui->Afficheur->insert("'");
}
void MainWindow::on_cos(){
    ui->Afficheur->insert("cos");
}
void MainWindow::on_sin(){
    ui->Afficheur->insert("sin");
}
void MainWindow::on_tan(){
    ui->Afficheur->insert("tan");
}
void MainWindow::on_cosh(){
    ui->Afficheur->insert("cosh");
}
void MainWindow::on_sinh(){
    ui->Afficheur->insert("sinh");
}
void MainWindow::on_tanh(){
    ui->Afficheur->insert("tanh");
}
void MainWindow::on_mod(){
   ui->Afficheur->insert("mod");
}

void MainWindow::on_ln(){
    ui->Afficheur->insert("ln");
 }
void MainWindow::on_log(){
    ui->Afficheur->insert("log");
 }
void MainWindow::on_inv(){
    ui->Afficheur->insert("inv");
 }
void MainWindow::on_sqr(){
    ui->Afficheur->insert("sqr");
 }
void MainWindow::on_sqrt(){
    ui->Afficheur->insert("sqrt");
 }
void MainWindow::on_cube(){
    ui->Afficheur->insert("cube");
 }
void MainWindow::on_sign(){
    ui->Afficheur->insert("sign");
 }
void MainWindow::on_pow(){
    ui->Afficheur->insert("pow");
 }
void MainWindow::on_eval(){
    // ici il faut empiler =)
     ui->Afficheur->clear();
}

// Slots param�tres

void MainWindow::on_clavier(bool checked){
    if (checked)
        ui->Clavier->hide();
    else
        ui->Clavier->show();
}
void MainWindow::on_Annuler_triggered(){
}
void MainWindow::on_Retablir_triggered(){
}

void MainWindow::on_complexe(){
    if (ui->Complexes->currentIndex()==1){// complexes
        if (ui->TypeConstante->currentIndex()==1){ // entiers
            refresh_complexe(ui);
        }
        else {//Reels & rationnels
            refresh_complexe(ui);
        }
    }
    else{ // non complexes
        if (ui->TypeConstante->currentIndex()==0){//Entiers
            refresh_entier(ui);
        }
        else {//Reels & rationnels
            refresh_reel_rationnel(ui);
        }
    }

}

void MainWindow::on_constante(){

    if (ui->TypeConstante->currentIndex()==0){//entiers
        if (ui->Complexes->currentIndex()==1){//complexes
            refresh_complexe(ui);
        }
        else // entiers non complexes
            refresh_entier(ui);
    }
    else {//reels et rationnels
        if (ui->Complexes->currentIndex()==1){//complexes
            refresh_complexe(ui);
        }
        else //reels et rationnels non complexes
            refresh_reel_rationnel(ui);
    }
}
void MainWindow::on_angle(){}

// slots operations sur pile
void MainWindow::on_commit(){}
/*
void MainWindow::on_commit(){
    QString s = ui->Afficheur->text();
    bool arret=0;
    /*list = st.split(" ");
    QStringListModel * modele = new QStringListModel(list);
    ui->AffichagePile->setModel(modele);
    ui->Afficheur->clear(); // c'est pas �a qu'il faut faire*/
/*    QRegExp exp("'*'");
    exp.setPatternSyntax(QRegExp::Wildcard);
    if(exp.exactMatch(s)){pile->Empiler(new Expression(s));}
    else if(s.contains("$")){
        if(!complexe){
            arret=1;
            std::cout<<"Le mode complexe n'est pas activ�"<<std::endl;
        }
        else{
            Complexe* c=ToComplexe(s);
            pile->Empiler(c);
        }
    }
    else if(s=="+"){arret=1; calcul_plus();}
    else if(s=="-"){arret=1; calcul_moins();}
    else if(s=="*"){arret=1; calcul_mult();}

    if(!arret){
        try {pile->Empiler(s);}
        catch(ExceptionCooCoo e){e.GetInfos();}
    }

    ui->Afficheur->clear();
    AffichageEcran();
}
*/
void MainWindow::on_swap(){
}
void MainWindow::on_sum(){
}
void MainWindow::on_dup(){
}
void MainWindow::on_mean(){
}
void MainWindow::on_clear(){
}
void MainWindow::on_drop(){
}

MainWindow::~MainWindow(){
    delete ui;
}

// Fonctions refresh affichage boutons
void refresh_entier(Ui::MainWindow *ui){
    ui->bCarre->setEnabled(true);//sqr
    ui->bRacine->setEnabled(true);//sqrt
    ui->bCube->setEnabled(true);
    ui->bSign->setEnabled(true);
    ui->bFact->setEnabled(true);
    ui->bPow->setEnabled(true);
    ui->bMod->setEnabled(true);
    ui->bLn->setEnabled(true);
    ui->bLog->setEnabled(true);
    ui->bInv->setEnabled(true);
    ui->bCos->setEnabled(true);
    ui->bSin->setEnabled(true);
    ui->bTan->setEnabled(true);
    ui->bCosh->setEnabled(true);
    ui->bSinh->setEnabled(true);
    ui->bTanh->setEnabled(true);
}

void refresh_reel_rationnel(Ui::MainWindow *ui){
    ui->bMod->setEnabled(false);
    ui->bFact->setEnabled(false);

    ui->bCarre->setEnabled(true);//sqr
    ui->bRacine->setEnabled(true);//sqrt
    ui->bCube->setEnabled(true);
    ui->bSign->setEnabled(true);
    ui->bPow->setEnabled(true);
    ui->bLn->setEnabled(true);
    ui->bLog->setEnabled(true);
    ui->bInv->setEnabled(true);
    ui->bCos->setEnabled(true);
    ui->bSin->setEnabled(true);
    ui->bTan->setEnabled(true);
    ui->bCosh->setEnabled(true);
    ui->bSinh->setEnabled(true);
    ui->bTanh->setEnabled(true);

}

void refresh_complexe(Ui::MainWindow *ui){
    ui->bCarre->setEnabled(true);//sqr
    ui->bCube->setEnabled(true);
    ui->bSign->setEnabled(true);

    ui->bRacine->setEnabled(false);//sqrt
    ui->bFact->setEnabled(false);
    ui->bPow->setEnabled(false);
    ui->bMod->setEnabled(false);
    ui->bLn->setEnabled(false);
    ui->bLog->setEnabled(false);
    ui->bInv->setEnabled(false);
    ui->bCos->setEnabled(false);
    ui->bSin->setEnabled(false);
    ui->bTan->setEnabled(false);
    ui->bCosh->setEnabled(false);
    ui->bSinh->setEnabled(false);
    ui->bTanh->setEnabled(false);
}

// fonctions de r�cup�ration ou suppression d'historique
/*

void MainWindow::AffichageEcran(){
    ui->AffichagePile->clear();

    std::deque<QString> ptr=pile->GetPtr();

    for(unsigned int i=0;i<ptr.size();i++)
       /*TODO AFFICHER LES LIGNES ui->AffichagePile->
                append(pile->GetVal(i));

faire avec des getstring*//*
}
void MainWindow::InitParam(){
    std::ifstream fichier("sauvegarde_CooCoo", std::ios::in); // Ouverture en lecture du fichier de param�tres
    if(fichier) // l'ouverture fonctionne -> on r�cup�re les valeurs des param�tres
    {
        string tmp, pile;
        getline(fichier, tmp);
        complexe=atoi(tmp.c_str());
        getline(fichier, typeDeCste);
        getline(fichier, tmp);
        clavier=atoi(tmp.c_str());
        getline(fichier, angle);
        getline(fichier, pile);
        if(tmp_pile!="pile vide"){
            while(getline(fichier, pile)){
                QString* tmp2= new QString(pile.c_str());

                /*QRegExp exp("'*'");
                exp.setPatternSyntax(QRegExp::Wildcard);
                if(exp.exactMatch(pile.c_str())){Expression* c=new Expression(*tmp2); ps->Empiler(c); pa->Empiler(*tmp2);}
                else if(tmp_pile.find('$')){Complexe* c=ToComplexe(*tmp2); ps->Empiler(c); pa->Empiler(*tmp2);}
                else if(tmp_pile.find(',')){Reel* c=ToReel(*tmp2); ps->Empiler(c); pa->Empiler(*tmp2);}
                else if(tmp_pile.find('/')){Rationnel* c=ToRationnel(*tmp2); ps->Empiler(c); pa->Empiler(*tmp2);}
                else {Entier* c=new Entier(*tmp2); ps->Empiler(c); pa->Empiler(*tmp2);}
                */

            /*}

            AffichageEcran();

        }
    }
    else{ // Sinon le fichier n'existait pas, on ouvre en �criture et on l'initialise avec les valeurs pas d�faut
        std::ofstream fichier("sauvegarde_CooCoo.txt", std::ios::out);

        if(fichier)
        {
            fichier<<0<<std::endl;
            complexe=0;
            fichier<<"entier"<<std::endl;
            typeDeCste="entier";
            fichier<<1<<std::endl;
            clavier=1;
            fichier<<"degre"<<std::endl;
            angle="degres";
            fichier<<"pile vide"<<std::endl;
        }
        else
            cerr << "Erreur � l'ouverture !" << endl;

    }
    fichier.close();
}*/
/*
void MainWindow::MAJParam(){
    std::ofstream fichier("param.txt", std::ios::out | std::ios::trunc); //ouverture du fichier

    if(fichier) // si l'ouverture a r�ussi
    {
        fichier<<complexe<<std::endl;
        fichier<<typeDeCste<<std::endl;
        fichier<<clavier<<std::endl;
        fichier<<angle<<std::endl;
        fichier<<"pile"<<std::endl;
        //pa->Save(fichier);
        fichier.close();
    }
    else // sinon
        cerr << "Erreur � l'ouverture !" << endl;
}*/
/*
// Fonctions post commit de calcul
void MainWindow::calcul_plus()
{
    if(pile->GetPtr().size()<2)
    {
        ExceptionCooCoo e("Pas assez d'operandes dans la pile");
        e.GetInfos();
    }
    else
    {
        try
        {
            Constante* tmp1=&(pile->Depiler());
            Constante* tmp2=&(pile->Depiler());
            Constante* c;
            c = tmp2+ tmp1; //&(tmp2->operator +(tmp1));

            pile->Empiler(c);
         }
        catch(ExceptionCooCoo e){e.GetInfos();}

    }
    AffichageEcran();
}*/
/*

void MainWindow::calcul_moins()
{
    if(pile->GetPtr().size()<2)
    {
        ExceptionCooCoo e("Pas assez d'operandes dans la pile");
        e.GetInfos();
    }
    else
    {
        try
        {
            Constante* tmp1=&(pile->Depiler());
            Constante* tmp2=&(pile->Depiler());
            Constante* c;
            c = tmp2-tmp1;

            pile->Empiler(c);
        }
        catch(ExceptionCooCoo e){e.GetInfos();}

    }
    AffichageEcran();
}*/
/*
void MainWindow::calcul_mult()
{
    if(pa->GetPtr().size()<2)
    {
        ExceptionCooCoo e("Pas assez d'operandes dans la pile");
        e.GetInfos();
    }
    else
    {
        try
        {
            Constante* tmp1=&(pile->Depiler());
            Constante* tmp2=&(pile->Depiler());
            Constante* c;
            c = tmp2 *tmp1;

            pile->Empiler(c);
        }
        catch(ExceptionCooCoo e){e.GetInfos();}
    }
    //pa->AffichagePile(); ps->AffichagePile();
    AffichageEcran();
}
*/