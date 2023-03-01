#ifndef _CD_H
#define _CD_H 

#include <../Midia/midia.h>

class Cd : public Midia
{
private:
    std::string artista;
    std::vector<std::pair<std::string, int>> faixa;
public:
    Cd(const std::string& titulo, const int ano, const std::string& artista);
    virtual int getTipo() override;
    virtual void imprimeDados() override;
    void adicionaFaixa(std::string, int);

    std::string getArtista();
    void setArtista(std::string);
}
#endif
