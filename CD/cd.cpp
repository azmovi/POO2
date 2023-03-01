#include "cd.h"

CD::CD(const std::string& titulo, const int ano, const std::string& artista)
    :Midia(titulo, ano), artista(artista) {}

int CD::getTipo() 
{
    return 1;
}
void CD::imprimeDados() 
{
    std::cout << "Artista: " << this->artista <<std::endl;
    for(int i = 0; i < faixa.size(); ++i)
    {
        std::cout << "Faixa" << i+1 << ": " << faixa[i].first << ", duração: " 
            << faixa[i].second <<std::endl;
    }
}
void CD::adicionaFaixa(std::string nome, int time)
{
    std::pair<std::string, int> par = {nome, time};
    faixa.push_back(par);
}
std::string CD::getArtista()
{
    return this->artista;
}
void CD::setArtista(std::string)
{
    this->artista = artista;
}
