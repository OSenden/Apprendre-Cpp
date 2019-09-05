/*
#include <iostream>
using namespace std;

int main()
{
    cout << "Bienvenue en C++" << endl;
    return 0;
}
*/
/*
using namespace std;
int main(){
    float temperature;
    float humidite;
    int pression;
    cout<<"Saisir la température,l'humidité et la pression:";
    cin>>temperature>>humidite>>pression;
    cout<<"la température est: "<<temperature<<"°"<<endl;
    cout<<"le taux d'humidité est: "<<humidite<<" %"<<endl;
    cout<<"la pression est: "<<pression<<" hPa"<<endl;
    return 0;
}
*/
/*
using namespace std;
int main(){
    char phrase[80+1];
    cout<<"Saisir une phrase: ";
    cin.getline(phrase,80);
    cout<<"Votre phrase est: "<<phrase<<endl;
    return 0;
}
*/
/*
using namespace std;
int main(){
    int val=192;
    cout<<"Affichage par défaut : "<< val << endl;
    cout<<"Affichage en hexadécimal : "<< hex << uppercase << val << endl;
    cout<<"Affichage en décimal : "<< dec << val << endl;
    return 0;
}
*/
/*
#include<iomanip>
using namespace std;
int main(){
    int val=192;
    double val2=3.141592654;
    bool sortie=true;
    cout<<"Affichage par défaut : "<< val << endl;
    cout<<"Affichage en hexadécimal : "<< hex << val << endl;
    cout<<"Affichage en décimal : "<< dec << val << endl;
    cout<< hex << val << " " << uppercase << val << " ";
    cout<< showbase << val << nouppercase << " " << val << endl;
    cout<< "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout<< "|" << setw(20) << left << "abc" << "|" << endl;
    cout<< "|" << setw(20) << right << "abc" << "|" << endl;
    cout<< "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout<< dec << sortie << " " << boolalpha << sortie << endl;
    cout<< val2 << " " << fixed << val2 << " " << scientific << val2 << " ";
    cout<< fixed << setprecision(2) << val2 << endl;
    cout<<"Entrez un nombre en octal :";
    cin>> oct >> val;
    cout<< "vous avez saisie " << dec << val << "en décimal" << endl;
    return 0;
}
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string nomDuFichier;

    cout<< "Entrer le nom du fichier à lire :";
    cin>> nomDuFichier;

    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str());// c_str() transforme string en char*

    if(!leFichier .is_open())
        cerr<< "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau
        cout<< "+" <<setfill('-') << setw(21) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" << endl;
        do{
            //récupération des valeurs
            leFichier>>pays>>nbOr>>nbArgent>>nbBronze;
            if(leFichier.good())//Si les valeurs ont bien été lues
            {
                // A compléter, affichage de chaque ligne du tableau
                cout<< "| " << left << setw(18) << setfill(' ') << pays ;
                cout << right << " |" << setw(9) << setfill(' ') << nbOr ;
                cout << " |" << setw(9) << setfill(' ') << nbArgent ;
                cout << " |" << setw(9) << setfill(' ') << nbBronze << " |" << endl;
            }
        }while(!leFichier.eof());
        // A compléter, affichage de la dernière ligne du tableau.
        cout<< "+" <<setfill('-') << setw(21) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" << endl;
    }
    return 0;
}
