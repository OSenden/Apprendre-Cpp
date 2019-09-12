#include "ipv4.h"
#include "ipv4_coplien.h"

/**
 * @brief IPv4::CalculerMasque
 * @detail Calcul le masque du réseau à partir du CIDR
 * @param _cidr entier sur 8 bits
 */

void IPv4::CalculerMasque(unsigned char _cidr)
{
    int indice;
    for (indice=0;indice < 4;indice++)
        masque[indice] = 0;
    indice = 0;

    while(_cidr >= 8){
    masque[indice++]=255;
    _cidr -=8;
    }

    unsigned char puissance = 255;

    while(_cidr-- >0){
        masque[indice] += puissance;
        puissance /= 2;
    }
}

/**
 * @brief IPv4::IPv4
 * @details Constructeur d ela classe, initialise l'adresse et le masque
 *  alloue la mémoire pour adresse et masque
 * @param _adresse Adresse IPv4
 * @param _cidr valeur derrière le / de CIDR
 */
IPv4::IPv4(const unsigned char *_adresse, const unsigned char _cidr)
{
    adresse = new unsigned char[4];
    masque = new unsigned char[4];
    for(int indice=0;indice<4;indice++)
        adresse[indice] = _adresse[indice];
    if(_cidr<=32)
        CalculerMasque(_cidr);
}

/**
 * @brief IPv4::IPv4
 * @details Constructeur d ela classe, initialise l'adresse et le masque
 *  alloue la mémoire pour adresse et masque
 * @param _adresse Adresse IPv4
 * @param _masque Masque du réseau
 */
IPv4::IPv4(const unsigned char *_adresse, const unsigned char *_masque)
{
    adresse = new unsigned char[4];
    masque=new unsigned char[4];
    for(int indice=0;indice<4;indice++){
        adresse[indice]=_adresse[indice];
        masque[indice]=_masque[indice];
    }
}

void IPv4::ObtenirMasque(unsigned char *_masque)
{
    for(int indice=0; indice<4; indice++)
        _masque[indice] = masque[indice];
}

void IPv4::ObtenirAdresseReseau(unsigned char *_reseau)
{
    for(int indice=0; indice<4; indice++)
        _reseau[indice] = adresse[indice] & masque[indice];
}

void IPv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice=0;indice<4;indice++)
        _diffusion[indice] = adresseDuReseau[indice] | ~masque[indice];
}

/**
 * @brief IPv4::~IPv4
 * @details Destructeur de la classe, libère la mémoire allouée
 */
IPv4::~IPv4()
{
    delete [] adresse;
    delete [] masque;
}
