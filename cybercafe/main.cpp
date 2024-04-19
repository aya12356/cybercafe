#include <iostream>
#include "promotion.h"
#include"tarif.h"
#include"session.h"
#include"tarifservice.h"
#include "tarifboisson.h"
#include "facture.h"
#include "boisson.h"
#include"service.h"
#include <string.h>
#include<vector>
#include<map>
#include<list>
#include<fstream>
using namespace std;

int main()

{/**
tarif t;
tarifservice ts;
t.saisir();
ts.saisir_tarifservice();
cout<<"***********************************"<<endl;
facture fac(5555);
fac.ajouter_tarif(t);
fac.ajouter_tarif(ts);
cout <<"affichage de la facture  \n ";
fac.afficher();
if (fac.rechercher(1111)!=-1)
    cout<<"le compte existe \n";
fac.supprimer(1111);
facture d=fac;
d.afficher();
facture fa(8888);
cin>>fa;
cout<<"\n";
cout<<fa;
promotion prom(25,7777);
cout<<fa.calculer_montant() ;

*/




/**float x;
promotion p(5);
promotion a(14,458);
cout<<p.get_promotion()<<endl;
cout<<"donner le pourcentage de la promotion "<<endl;
cin>>x;
p.set_promotion(x);
cout<<endl;
cout<< p.get_promotion();
 cout<<endl;
 p.afficher();
 cin>>a;
 cout<<a;

*/
/**cout<<"----------------------------------"<<endl;
tarif tar(10,12.3);
tar.afficher();
cout<<tar.get_code();
cout<<endl;
tar.set_prix(9.4);
cout<<"\n";
cout<<tar.get_prix();
tarifboisson bou("fanta",5,6,121,1.5);
cout<<bou.get_type();cout<<"\n";
bou.saisir_tarifboisson();
cout<<"-------------------------------------------\n";
bou.afficher();//

tarifboisson d ;
cin>>r;//
cout<<r;//
cout<<r.boisson_plus_cher();//
tarifboisson b("aya",400,145,47,2222);
b=d;

cout<<d ;
cout<<"---------------------------\n";
tarifboisson r;
cin>>r;
cout<<r;
r.ajouter();
cout<<"---------------------------\n";
r.afficher();
cout<<"************************************************\n";

cout<<"\n";
cout<<"\n";
cout<<"\n";
r.supprimer();
cout<<"\n";
r.afficher();


*/


/**

cout <<"----------------------------------\n";
tarifservice ra("aya",25,1111,20.51);
ra.afficher_tarifservice();
ra.set_nom("chouch");
cout<<ra.get_nom();
cout<<"\n";
ra.set_duree(658);
cout<<"\n";
cout<<ra.get_duree();
cout<<"\n";
ra.afficher_tarifservice();
cout<<"\n";
cout<<"\n";
cout<<"\n";
tarifservice m,p;
m.saisir_tarifservice();
cout<<m;
cout<<"\n";
cout<<"\n";
cin>>p;
p.afficher_tarifservice();


*/

/**
session s(123,"10:30","11:30");
session setr(212121,"12:00");
s.afficher();
s.modifier();
s.afficher();
s.set_date_debut("14:20");
s.set_date_fin("14:25");
cout<<"-------------------------\n";
s.afficher();
cout<<endl;
cout<<s.calculer_duree();
cout<<"\n";
cout<<setr;

tarifboisson *t;
t=new tarifboisson();
tarifboisson d=*t;
t->afficher();
cout<<"****************;
d.afficher();*/

/**tarifservice b("aya",12,0025,1),s("chiuchen",10,8778,558),c;
c=b+s;

cout<<"********";
*/

/**session s ;
s.enregistrer("test.txt");
cout<<"\n";
s.lire("text.txt");

service s(1111,"scanner",12.54,10);
cout<<s;
s.saisir();
s.afficher_service();
cout<<"\n";
service*ser;
ser=new service();
cin>>*ser;
cout<<*ser;
delete ser;
*/



/**
tarifboisson terb;
list<boisson>::iterator it;
tarifservice ters;
service s1(1000,"ddd",10,10),s2;
boisson b1(11,"aa",11.11,11);
boisson b2(22,"bb",22.22,22);
tarifboisson q;
tarif*t;
t=new tarif;
cin>>*t;
cout<<"\n";
cout<<*t;
t->modifier();
cout<<"\n";
cout<<*t;
terb.ajouter(&b1);
terb.ajouter(&b2);
cin>>q;
cout<<"***************"<<endl;
cin>>s2;
terb.afficher ();// code et montant prennet la valeur initiale
cout<<q;
cout<<terb.boisson_plus_cher();
cout<<"\n";
terb.rechercher_boisson("aa");
cout<<"\n";
cout<<terb.calculer_prix();
terb.modifier_prix(11);
cout<<"\n";
cout<<terb<<endl;
delete t;
tarifservice rr;
cin>>rr;
cout<<"****************\n";
cout<<rr;
facture f(0000);
f.ajouter_tarif(*t);
f.ajouter_tarif(terb);
f.ajouter_tarif(ters);
f.ajouter_tarif(rr);
f.afficher();
cout<<"\n";
f.rechercher(1111);

f.supprimer(1111);
facture d=f;
d.afficher();
facture fa(8888);
cin>>fa;
cout<<"\n";
cout<<fa;
promotion prom(25,7777);
cin>>prom;
cout<<fa.calculer_montant() ;
/*boisson b1(1111,"eau",1.2,10);
tarifboisson tb(8888,8.8);
service s1(2222,"scan",2.2,20);//probleme:cout tarifboisson et service

tarifservice ts(7777,7.7);    //probleme :cin case 3
tb.ajouter(&b1);
ts.ajout_fin(&s1);
tarif t(9999,99.99);
facture fac(4561);
fac.ajouter_tarif(t);
fac.ajouter_tarif(tb);
fac.ajouter_tarif(ts);
cout<<fac;
/*acture ft(2589);
cin>>ft;
cout<<ft;
cout<<"/////////////////////////////////////\n";
cout<<fac.calculer_montant();
facture f=fac;
cout<<f;
cout<<"****************************\n";
f.afficher();
if (fac.rechercher(4561)!=-1)
    cout<<"le compte existe \n";

fac.supprimer(4561);

*/

/*fstream f;
promotion p ;
cin>>p;
f.open(file);
f<<&p;
cout<<p;
f>>&p;*/
/*tarifboisson tb;
tb=new tarifboisson(11,555);
list<boisson>::iterator it;
boisson b1(11,"aa",11.11,11);
boisson b2(22,"bb",22.22,22);
tb.ajouter(&b1);
tb.ajouter(&b2);
tb.afficher();
tb.set_code(200);
tb.set_montant(1000);
cout<<"*************************************"<<endl;
cout<<*tb;
tarifboisson q;
cin>>q;
cout<<"******************************************\n";
cout<<q;
facture f(100);
cin>>f;
cout<<"***************"<<endl;
cout<<f;
f.rechercher(100);

*/

 return 0;
}

