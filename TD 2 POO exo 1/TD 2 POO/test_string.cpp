#include <iostream>
#include <string>
using namespace std;

int main() {
    string text_1("blop");
    cout<<"Text_1 : "<<text_1<<endl;
    text_1.length();
    
    cout<<"Rentrez un texte : ";
    getline(cin,text_1);
    cout<<"Text_1 : "<<text_1<<endl;
    
    int compteur_mots=1;
    int find;

    for(int i=0;i<text_1.size();i++){
        find=text_1.find(" ",i);
        if(find!=string::npos){
            compteur_mots++;
            i=find;
        }
    }
    cout<<"Nb de mots : "<<compteur_mots<<endl;
    
    string recherche("");
    cout<<"Quel mot à rechercher dans la chaine de caractères : ";
    cin>>recherche;
    find=text_1.find(recherche);
    if(find!=string::npos){
        cout<<"Mot à la pos : "<<find<<endl;
    }
    else{
        cout<<"Mot non trouvé"<<endl;
    }
}
