#include"session.h"
using namespace std ;


// Implémentation de l'opérateur + pour la classe session
session& operator+(const session& s1, const session& s2){
    int new_id = s1.idS + s2.idS;
    int totalduree = s1.duree + s2.duree;
    return *new session(new_id, totalduree);
}

// Implémentation de l'opérateur de sortie pour la classe session
ostream& operator<<(ostream& os, const session& s) {
    os << "Session " << s.idS << " dure : " << s.duree/60 << " heures et " << s.duree%60 << " minutes"<<endl;
    return os;
}

// Implémentation de l'opérateur d'entrée pour la classe session
istream& operator>>(istream& is, session& s) {
    cout << " Entrez l'identifiant de la session : ";
    is >> s.idS;
    cout << "Entrez la durée de la session (en minute minutes) : ";
    is >> s.duree;
    return is;
}

//fichier
/**istream& operator>>(istream&i,session*s)//afficher  sur ecran
{
        i>>s->idS;
        i>>s->date_debut;
        i>>s->date_fin;
        return i;
}
ostream& operator<<(ostream& o,session*s) //lire tekteeb
{
        o<<s->idS<<endl;
        o<<s->date_debut<<endl;
        o<<s->date_fin<<endl;
        return o;
}

bool session::enregistrer(string nom_fichier )
{
ofstream  file ;
file.open(nom_fichier);
if(file.is_open()==false)
{
    cout<<"Erreur :impossible d'ouvrir le fichier "<<nom_fichier<<endl;
    return false;
}
file<<idS<<endl;
file<<date_debut<<endl;
file<<date_fin<<endl;

   file.close();
   return true ;
}
bool session::lire(string nom_fichier)
{
    ifstream file(nom_fichier);
    if(!file.is_open())
    {
        cerr<<"Erreur:impossible d'ouvrir le fichier"<<nom_fichier<<endl;
        return false ;
    }
    file>>idS;
    file>>date_debut;
    file>>date_fin;
    return true ;*/

