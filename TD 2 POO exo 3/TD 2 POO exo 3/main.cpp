#include <iostream>
#include <list>
#include <string.h>

using namespace std;

#include "fonctions.h"

int main(){
    list<string> tab;

    cout<<"Affichage vide"<<endl;
    afficher(tab);
    cout<<"Saisie de la liste"<<endl;
    saisir(tab);
    cout<<"Affichage de la liste après saisie"<<endl;
    afficher(tab);
    cout<<endl;
    list<string> liste(tab); //création d'une nouvelle liste et copie de la liste précédente
    afficher(liste);
    //liste.sort(); //tri de la liste (inutile quand on utilise insertion dans la saisie)
    //afficher(liste);
    liste.reverse();//tri décroissant de la liste
    afficher(liste);
}
