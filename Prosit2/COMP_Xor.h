#pragma once
#include <string>

namespace NS_COMP
{
    class COMP_Xor
    {
    public:
        // Cle passee en parametre de methode (Exercice 4)
        std::string chiffrer_dechiffrer(std::string texte, char cle);
    };
}