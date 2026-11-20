#pragma once
#include <string>

namespace NS_COMP
{
    class COMP_Cesar
    {
    private:
        int decalage;
        char alphabetClair[256];
        char alphabetCrypte[256];

    public:
        COMP_Cesar(int dec);
        std::string chiffrer(std::string texte);
        std::string dechiffrer(std::string texte);
    };
}