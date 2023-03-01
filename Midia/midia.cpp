#include <iostream>
#include <string>
#include "midia.h"

Midia::Midia(const std::string& titulo, const int ano)
    :titulo(titulo), ano(ano) {};

virtual int Midia::getTipo() = 0;
virtual void Midia::imprimeDados() = 0;

void Midia::imprimeFicha()
{
    std::cout << "Título: " << this->titulo << std::endl;
    std::cout << "Ano: " << this->ano<< std::endl;
}

std::string Midia::getTitulo()
{
    return this->titulo;
}
void Midia::setTitulo(std::string titulo) 
{
    this->titulo = titulo;
}
int Midia::getAno()
{
    return this->ano;
}
void Midia::setAno(int ano)
{
    this->ano = ano;
}


