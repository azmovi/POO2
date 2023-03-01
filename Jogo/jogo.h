#ifndef _JOGO_H 
#define _JOGO_H 

#include "../Midia/midia.h"

class Jogo : public Midia
{
private:
    std::string genero;
public:
    Jogo(const std::string& titulo, const int ano, const std::string& genero);

    int getTipo() override;
    void imprimeDados() override;

    std::string getGenero();
    void setGenero(std::string);
};
#endif
