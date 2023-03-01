#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include "dvd.h"

Dvd::Dvd(const std::string& titulo, const int ano, std::string& diretor)
    :Midia(titulo, ano), diretor(diretor) {}

virtual int Dvd::getTipo() override
{
    return 2;
}
virtual void Dvd::imprimeDados() override
{
    for(int i = 1; i < elenco.size(); ++i)
    {
        std::cout << "Artista" << i << ": " << elenco[i].first <<
            ", papel: " << elenco[i].second << std::endl;
    }
}
void Dvd::adcionaArtista(std::string artista, std::string papel)
{
    std::pair<std::string, std::string> par = {artista, papel};
    elenco.push_back(par);
}

std::string Dvd::getDiretor()
{
    return this->diretor;
}

void Dvd::setDiretor(std::string diretor)
{
    this->diretor = diretor;
}
