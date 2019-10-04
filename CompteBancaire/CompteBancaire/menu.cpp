#include "menu.h"
/**
  * @file menu.cpp
  * @brief Méthode de la classe menu
  * @date 13/09/19
  * @author mc (feat. gb)
*/

using namespace std;
/**
 * @brief Menu::Menu
 * @param _nom
 * @details Constructeur de la classe menu qui initialise le nom et la longueurMax, On verifie si le fichier est ouvert
 *          sinon on affiche un message d'erreur, attribution de la valeur longueurMax par lecture de toute les lignes du fichier
 */
Menu::Menu(const string _nom):nom(_nom), longueurMax(0)
{

    ifstream fichierMenu(_nom.c_str());
    if(!fichierMenu .is_open()){
            nbOptions = 0;
            options = nullptr;
            ErreurFichier excep(FICHIER,"Erreur lors de l'ouverture du fichier menu");
       // cout << "Erreur lors de l'ouverture du fichier menu"<<endl;



    } else {
        int nbLignes = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        nbOptions = nbLignes;
        fichierMenu.seekg(0,ios::beg); // On retourne au début du fichier

        options = new string [nbOptions];
        for (int i=0; i<nbOptions; i++){
            getline(fichierMenu,options[i]);
            if(static_cast<int>(options[i].length())>longueurMax){
                longueurMax = static_cast<int>(options[i].length());
            }
        }
    }
}

Menu::~Menu()
{
    if(options != nullptr)
       delete [] options;
}
/**
 * @brief Menu::Afficher
 * @return
 * @details Methode Afficher qui affiche un tableau qui s'adapte en fonction du nombre d'options et de la longueurMax de la plus longue option possible
 */
int Menu::Afficher()
{ int choix;
    bool passage = false;
    do{
        system("clear");
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+3) << "+" << endl;
        for (int i=0; i<nbOptions; i++){
            int lg =  longueurMax - static_cast<int>(options[i].length()) + 2;
            // cout << lg;
            cout << "|  " << left << i+1 << right << "  " << "| "  <<  options[i] << setfill(' ') << setw(lg) << "|" << endl;
        }
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+3) << "+" << endl;
        if(passage==false){
            cout << "Entrez votre choix : ";
            passage=true;
        }else{
            cout << "Entrez un nombre entre 1"<< " et " << nbOptions << ": ";
        }
        if(!(cin>>choix)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            choix=-1;
        }
    }while((choix<1) || (choix>nbOptions));
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "Appuyez sur la touche Entrée pour continuer... ";
    getline(cin,uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("clear");
}



ErreurFichier::ErreurFichier(int _codeErreur, string _message):
    codeErreur(_codeErreur),
    message(_message)
{

}

int ErreurFichier::ObtenirCodeErreur() const
{
    return codeErreur;
}

string ErreurFichier::ObtenirDescription() const
{
    return message;
}
