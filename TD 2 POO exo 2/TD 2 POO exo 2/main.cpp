#include <iostream>
#include <vector>
using namespace std;
#include "fonctions.h"

int main(){
    vector<double> vecteur={1,2,3,4,5};
    /*for(int i=0;i<vecteur.size();i++){
        cout<<vecteur[i]<<" ";
    }
    cout<<endl;*/
    afficher(vecteur);
    cout<<"Ajouts de valeurs entières (entrez -1 pour arreter le processus)"<<endl;
    double ajout;
    do{
        cin>>ajout;
        vecteur.push_back(ajout);
    }while(ajout!=-1);
    afficher(vecteur);
}
