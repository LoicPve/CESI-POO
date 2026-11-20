#pragma once
#include <string>
#include "COMP_Fichier.h"
#include "COMP_Cesar.h"
#include "COMP_Xor.h"

namespace NS_SVC
{
    class SVC_Cryptage
    {
    private:
        NS_COMP::COMP_Fichier* oFichier;
        NS_COMP::COMP_Cesar* oCesar;
        NS_COMP::COMP_Xor* oXor;

    public:
        SVC_Cryptage();
        ~SVC_Cryptage(); 
        bool executer(std::string source, std::string dest, int mode, bool estChiffrement, char cleXor);
    };
}