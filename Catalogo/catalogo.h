#ifndef _CATALOGO_H 
#define _CATALOGO_H

#include "../Midia/midia.h"

class Catalogo 
{
private:
    std::vector<Midia*> midia;
public:
    Catalogo();
    
    bool adicionaMidia(Midia&);
    bool removeMidia(std::string);
    Midia* obtemMidia(std::string);
    int quantidadeDeMidias();
    int quantidadeDeCDs();
    int quantidadeDeDVDs();
    int quantidadeDeJogos();
    void imprimeColecao();
    void imprimeColecaoPorTipo(int);
};
#endif
