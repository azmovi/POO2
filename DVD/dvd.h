#ifndef _DVD_H
#define _DVD_H

#include "../Midia/midia.h"

class Dvd : public Midia
{
private:
    std::string diretor;
    std::vector<std::pair<std::string, std::string>> elenco;
public:
    Dvd(const std::string& titulo, const int ano, std::string& diretor);
    
    virtual int getTipo() override;
    virtual void imprimeDados() override;
    void adcionaArtista(std::string, std::string);

    std::string getDiretor();
    void setDiretor(std::string);
};
#endif
