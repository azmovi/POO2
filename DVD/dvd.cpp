#include "dvd.h"

DVD::DVD(const std::string& titulo, const int ano, const std::string& diretor)
    :Midia(titulo, ano), diretor(diretor) {}

int DVD::getTipo() 
{
    return 2;
}
void DVD::imprimeDados() 
{
    for(int i = 0; i < elenco.size(); ++i)
    {
        std::cout << "Artista" << i+1 << ": " << elenco[i].first <<
            ", papel: " << elenco[i].second << std::endl;
    }
}
void DVD::adicionaArtista(std::string artista, std::string papel)
{
    std::pair<std::string, std::string> par = {artista, papel};
    elenco.push_back(par);
}

std::string DVD::getDiretor()
{
    return this->diretor;
}

void DVD::setDiretor(std::string diretor)
{
    this->diretor = diretor;
}
