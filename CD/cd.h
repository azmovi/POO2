#ifndef _CD_H
#define _CD_H 

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include "../Midia/midia.h"

class CD: public Midia
{
private:
    std::string artista;
    std::vector<std::pair<std::string, int>> faixa;
public:
    CD(const std::string& titulo, const int ano, const std::string& artista);
    int getTipo() override;
    void imprimeDados() override;
    void adicionaFaixa(std::string, int);

    std::string getArtista();
    void setArtista(std::string);
};
#endif
