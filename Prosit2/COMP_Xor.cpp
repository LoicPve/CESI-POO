#include "COMP_Xor.h"

using namespace std;

namespace NS_COMP
{
    string COMP_Xor::chiffrer_dechiffrer(string texte, char cle)
    {
        for (size_t i = 0; i < texte.length(); i++)
        {
            texte[i] = texte[i] ^ cle; 
        }
        return texte;
    }
}