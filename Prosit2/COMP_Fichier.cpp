#include "COMP_Fichier.h"
#include <fstream>
#include <iostream>

using namespace std;

namespace NS_COMP
{
    string COMP_Fichier::lire(string cheminSource)
    {
        ifstream fichier(cheminSource, ios::in);
        if (!fichier.is_open()) return "";
        
        string contenu = "";
        char c;
        // Lecture caractere par caractere (Exercice 1)
        while (fichier.get(c)) 
        {
            contenu += c;
        }
        fichier.close();
        return contenu;
    }

    bool COMP_Fichier::ecrire(string cheminDest, string contenu)
    {
        ofstream fichier(cheminDest, ios::out);
        if (!fichier.is_open()) return false;
        
        // Ecriture caractere par caractere (Exercice 1)
        for (size_t i = 0; i < contenu.length(); i++)
        {
            fichier.put(contenu[i]); 
        }
        fichier.close();
        return true;
    }
}