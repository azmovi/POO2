#include <iostream>
#include <string>
#include "midia.h"

Midia::Midia(const std::string& titulo, const int ano)
    :titulo(titulo), ano(ano) {};


void Midia::imprimeFicha()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Título: " << this->titulo << std::endl;
    std::cout << "Ano: " << this->ano<< std::endl;
    this->imprimeDados();
    std::cout << std::endl;

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


