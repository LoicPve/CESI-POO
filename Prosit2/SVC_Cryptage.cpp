#include "SVC_Cryptage.h"

using namespace std;

namespace NS_SVC
{
    SVC_Cryptage::SVC_Cryptage()
    {
        this->oFichier = new NS_COMP::COMP_Fichier();
        this->oCesar = new NS_COMP::COMP_Cesar(3);
        this->oXor = new NS_COMP::COMP_Xor();
    }

    SVC_Cryptage::~SVC_Cryptage()
    {
        delete this->oFichier;
        delete this->oCesar;
        delete this->oXor;
    }

    bool SVC_Cryptage::executer(string source, string dest, int mode, bool estChiffrement, char cleXor)
    {
        string texte = this->oFichier->lire(source);
        if (texte.empty()) return false;

        string res = "";
        
        if (mode == 1)
        {
            res = estChiffrement ? this->oCesar->chiffrer(texte) : this->oCesar->dechiffrer(texte);
        }
        else if (mode == 2)
        {
            res = this->oXor->chiffrer_dechiffrer(texte, cleXor);
        }
        else if (mode == 3)
        {
            if (estChiffrement)
            {
                res = this->oCesar->chiffrer(texte);
                res = this->oXor->chiffrer_dechiffrer(res, cleXor);
            }
            else 
            {
                res = this->oXor->chiffrer_dechiffrer(texte, cleXor);
                res = this->oCesar->dechiffrer(res);
            }
        }
        return this->oFichier->ecrire(dest, res);
    }
}