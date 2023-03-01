#include <iostream>
#include <string>

#include "jogo.h"

Jogo::Jogo(const std::string& titulo, const int ano, const std::string& genero)
    :Midia(titulo, ano), genero(genero) {};

int Jogo::getTipo() 
{
    return 3;
}
void Jogo::imprimeDados() 
{
    std::cout << "Gênero:" << this->genero << std::endl;
}

std::string Jogo::getGenero()
{
    return this->genero;
}
void Jogo::setGenero(std::string novoGenero)
{
    this->genero = novoGenero;
}
