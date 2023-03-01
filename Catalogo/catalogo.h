#ifndef _CATALOGO_H 
#define _CATALOGO_H

#include "../Midia/midia.h"

class Catalogo 
{
private:
    std::vector<Midia*> midia;
public:
    Catalogo();
    
    bool adcionaMidia(Midia&);
    bool removeMidia(std::string);
    Midia* obtemMidia(std::string);
    int quantidadeDeMidia();
    int quantidadeDeCDs();
    int quantidadeDeDVDs();
    int quantidadeDeJogos();
    void imprimeColecao();
    void imprimeColecaoPorTipo(int);
    bool comparador(Midia*, Midia*);
};
#endif
