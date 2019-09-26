#include "menu.h"


using namespace std;
Menu::Menu(const string _nom):nom(_nom), longueurMax(0)
{

    ifstream fichierMenu(_nom.c_str());          // ouvrir le fichier
    if(!fichierMenu .is_open()){             // Si il y a une erreur
        cout << "Erreur lors de l'ouverture du fichier menu"<<endl;           //alors Afficher un message indiquant une erreur de lecture
        nbOptions = 0;          //et mettre nbOptions à 0
    } else
    {
        int nbLignes = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        nbOptions = nbLignes;             //Sinon calculer nbOptions, le nombre d’options dans le fichier
        fichierMenu.seekg(0,ios::beg);         // On retourne au début du fichier

        options = new string [nbOptions];    //allouer dynamiquement le tableau options en fonction de nbOptions
        for (int i=0; i<nbOptions; i++)   //Pour chaque option dans le fichier
        {
            getline(fichierMenu,options[i]);        //Lire l’option et l’affecter dans le tableau options
            if(static_cast<int>(options[i].length())>longueurMax)   //Si la taille de l’option est plus grande que longueurMax
            {
                longueurMax = static_cast<int>(options[i].length());     //alors longueurMax reçoit la taille de l’option
            }  //FinSi
        }  //FinPour
    }  // FinSi
}


int Menu::Afficher()
{
    int choix;
    bool passage = false;

    do{
        system("clear");    //Nettoie la zone
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+3) << "+" << endl; //Affiche la barre du hautdu tableau
        for (int i=0; i<nbOptions; i++){         //Repeter pour chaques options
            int lg =  longueurMax - static_cast<int>(options[i].length()) + 2;   //Créer lg en prenant la longueur max et en retireant les caracteres des options
            cout << "|  " << left << i+1 << right << "  " << "|" << " "  << options[i] << setfill(' ') << setw(lg) << "|" << endl;  //Ecrit toutes les lignes des Options
        }
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+3) << "+" << endl <<endl;  // affiche la barre du bas du tableau

        if(passage==false){
            cout << "Votre choix svp : ";
            passage=true;
        }else{

            cout << "Entrer un nombre entre 1"<< " et " << nbOptions << ": "; //Si le chiffre choisi est supérieur a ceux proposés on sugere un choix entre 1 et le nombre d'options
        }
        if(!(cin>>choix)){
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
            choix=-1;
        }
    }while((choix<1) || (choix>nbOptions)); //Recommence si le choix n'est pas fait ou que le choix est raté (soit supérieur a ceux proposés


    return choix;
}




void Menu::AttendreAppuiTouche()
{

    string uneChaine;
    cout << endl << "Appuyer sur la Touche Entrée pour continuer..."; //Ce message s'affiche lorsqu'un choix correct se fait
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    system("clear"); //Nettoie la zone

}

Menu::~Menu()
{
    delete [] options;
}
