//
//  fonctions.cpp
//  TD 2 POO exo 2
//
//  Created by Arthur on 12/04/2022.
//
#include <iostream>
#include <stdio.h>
#include "fonctions.h"
using namespace std;
#include <vector>

void afficher(vector<double> vecteur){
    cout<<"Taille du vecteur : "<<vecteur.size()<<endl;;
    cout<<"Contenu du vecteur : ";
    for(int i=0;i<vecteur.size();i++){
        cout<<vecteur[i]<<" ";
    }
    cout<<endl;
}
