#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include "cd.h"

Cd::Cd(const std::string& titulo, const int ano, const std::string& artista)
    :Midia(titulo, ano), artista(artista) {}

virtual int Cd::getTipo() override
{
    return 1;
}
virtual void Cd::imprimeDados() override
{
    std::cout << "Artista: " << this->artista <<std::endl;
    for(int i = 1; i < len(faixa) + 1; ++i)
    {
        std::cout << "Faixa" << i << ": " << faixa[i].first << ", duração: " 
            << faixa[i].second <<std::endl;
    }
}
void Cd::adicionaFaixa(std::string faixa, int time)
{
    std::pair<std::string, int> par = {faixa, time};
    std::vector.push_back(par);
}
std::string Cd::getArtista()
{
    return this->artista;
}
void Cd::setArtista(std::string)
{
    this->artista = artista;
}
