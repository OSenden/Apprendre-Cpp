#ifndef IPV4_COPLIEN_H
#define IPV4_COPLIEN_H

class IPv4{
    private:
        unsigned char * adresse;
        unsigned char * masque ;
    public:
        IPv4(const unsigned char * _adresse,const unsigned char _cidr);
        IPv4(const unsigned char * _adresse,const unsigned char * _masque);
        ~IPv4(); //destructeur

        //Ajout pour la forme canonique en plus du destructeur

        IPv4(); //constructeurpardéfaut
        IPv4(const IPv4& _ipv4); //constructeurdecopie
        IPv4 &operator=(const IPv4& _ipv4); //opérateurd'affectation
    private:
        void CalculerMasque(unsigned char _cidr);
    public:
        void ObtenirMasque(unsigned char * _masque);
        void ObtenirAdresseReseau(unsigned char * _reseau);
        void ObtenirAdresseDiffusion(unsigned char * _diffusion);
};

#endif // IPV4_COPLIEN_H
