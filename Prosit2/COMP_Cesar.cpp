#include "COMP_Cesar.h"

using namespace std;

namespace NS_COMP
{
    COMP_Cesar::COMP_Cesar(int dec)
    {
        this->decalage = dec;
        // Generation des tableaux avec boucle (Exercice 3)
        for (int i = 0; i < 256; i++)
        {
            this->alphabetClair[i] = static_cast<char>(i);
            this->alphabetCrypte[i] = static_cast<char>((i + dec) % 256);
        }
    }

    string COMP_Cesar::chiffrer(string texte)
    {
        for (size_t i = 0; i < texte.length(); i++)
        {
            unsigned char c = static_cast<unsigned char>(texte[i]);
            texte[i] = this->alphabetCrypte[c]; 
        }
        return texte;
    }

    string COMP_Cesar::dechiffrer(string texte)
    {
        for (size_t i = 0; i < texte.length(); i++)
        {
            unsigned char c = static_cast<unsigned char>(texte[i]);
            for (int j = 0; j < 256; j++)
            {
                if (this->alphabetCrypte[j] == static_cast<char>(c))
                {
                    texte[i] = this->alphabetClair[j];
                    break;
                }
            }
        }
        return texte;
    }
}