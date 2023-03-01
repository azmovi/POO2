#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "catalogo.h"

using namespace catalogo;

Catalogo::Catalogo() {}

bool Catalogo::adicionaMidia(Midia &conteudo)
{
    int old = midia.size();
    midia.push_back(&conteudo);
    return (midia.size() > old);
}

bool Catalogo::removeMidia(std::string titulo)
{ 
    for(int i = 0; i < midia.size(); ++i)
    {
        if(midia[i]->getTitulo() == titulo)
        {
            midia.erase(midia.begin() + i);
            return true;
        }
    }
    return false;
}

Midia* Catalogo::obtemMidia(std::string titulo)
{
    for(int i = 0; i < midia.size(); ++i)
    {
        if(titulo == midia[i]->getTitulo())
        {
            return midia[i];
        }
    }
    return nullptr;
}

int Catalogo::quantidadeDeMidias()
{
    return midia.size();
}

int Catalogo::quantidadeDeCDs()
{    
    int soma = 0;
    for(int i = 0; i < midia.size(); ++i)
    {
        if(midia[i]->getTipo() == 1)
        {
            soma++;
        }
    }
    return soma;
}

int Catalogo::quantidadeDeDVDs()
{
    int soma = 0;
    for(int i = 0; i < midia.size(); ++i)
    {
        if(midia[i]->getTipo() == 2)
        {
            soma++;
        }
    }
    return soma;
}

int Catalogo::quantidadeDeJogos()
{
    int soma = 0;
    for(int i = 0; i < midia.size(); ++i)
    {
        if(midia[i]->getTipo() == 3)
        {
            soma++;
        }
    }
    return soma;
}

bool comparador(Midia *primeiro, Midia *segundo)
{
    if(primeiro->getAno() == segundo->getAno())
    {
        return (primeiro->getTitulo() < segundo->getTitulo());
    }
    return (primeiro->getAno() > segundo->getAno());
}

void Catalogo::imprimeColecao()
{
    std::sort(midia.begin(), midia.end(), comparador);
    for(int i = 0; i < midia.size(); ++i)
    {
        midia[i]->imprimeFicha();
    }
}

void Catalogo::imprimeColecaoPorTipo(int value)
{
    std::sort(midia.begin(), midia.end(), comparador);
    for(int i = 0; i < midia.size(); ++i)
    {
        if(midia[i]->getTipo() == value)
        {
            midia[i]->imprimeFicha();
        }
    }
}


