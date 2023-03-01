#ifndef _DVD_H
#define _DVD_H

#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include "../Midia/midia.h"

class DVD: public Midia
{
private:
    std::string diretor;
    std::vector<std::pair<std::string, std::string>> elenco;
public:
    DVD(const std::string& titulo, const int ano, std::string& diretor);
    
    int getTipo() override;
    void imprimeDados() override;
    void adicionaArtista(std::string, std::string);

    std::string getDiretor();
    void setDiretor(std::string);
};
#endif
