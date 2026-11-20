#pragma once       // Empeche l'inclusion multiple de ce fichier d'en-tete lors de la compilation
#include <string>

namespace NS_COMP
{
    class COMP_Fichier
    {
    public:
        std::string lire(std::string cheminSource);
        bool ecrire(std::string cheminDest, std::string contenu);
    };
}