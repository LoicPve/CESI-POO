#include <iostream>
#include <string>
#include "SVC_Cryptage.h"

using namespace std;

int main() // utilisation de "<<" pour envoyer les donnees (equivalant "std::count") et de ">>" pour extraire les donnees (equivalant "std::cin")
{
    string src, dest;
    int action, mode;

    cout << "=== UTILITAIRE DE CHIFFREMENT ===" << endl;
    cout << "Fichier source : ";
    cin >> src;
    
    cout << "Action (1=Chiffrer, 2=Dechiffrer) : ";
    cin >> action;
    
    cout << "Mode (1=Cesar, 2=XOR, 3=Cesar+XOR) : ";
    cin >> mode;
    
    cout << "Fichier destination : ";
    cin >> dest;

    NS_SVC::SVC_Cryptage service;
    bool ok = service.executer(src, dest, mode, (action == 1), 'K');
    
    if (ok) 
    {
        cout << "\n[SUCCES] Operation terminee. Fichier genere : " << dest << endl;
    } 
    else 
    {
        cout << "\n[ERREUR] Echec lors du traitement du fichier." << endl;
    }
    
    return 0;
}