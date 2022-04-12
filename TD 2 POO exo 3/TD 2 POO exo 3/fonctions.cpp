#include <iostream>
#include <list>

using namespace std;

#include "fonctions.h"

void saisir(list<string> &tab){
    string mot;
    cout<<"Entrez des mots (entrez \"fin\" pour terminer)"<<endl;;
    do{
        cout<<"Entrez votre mot : ";
        cin>>mot;
        //tab.push_back(mot); // sans méthode d'insertion avec tri
        insertion(tab,mot); // avec méthode d'insertion avec tri
        afficher(tab);
    }while(mot!="fin");
    
}

void afficher(const list<string> &tab){
    list<string>::const_iterator i;
    cout<<"Contenu de la liste : ";
    for(i=tab.begin();i!=tab.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}

void insertion(list<string> &tab, string mot_insert){
    list<string>::iterator i=tab.begin();
    while(i!=tab.end() && *i<mot_insert){
        i++;
    }
    tab.insert(i, mot_insert);
}
