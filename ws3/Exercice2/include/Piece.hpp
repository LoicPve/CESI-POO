#pragma once

class Piece{
    private:
    int nb_windows;
    std::string color; 

    public: 
    Piece(int nb_windows, std::string color);
    int getNb_windows();
    void setNb_windows(int nbFenetre);
    std::string getColor();
    void setColor(std::string couleur);

};