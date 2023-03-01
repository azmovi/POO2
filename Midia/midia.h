#ifndef _MIDIA_H
#define _MIDIA_H

class Midia
{
private:
    std::string titulo;
    int ano;
public:
    Midia(const std::string& titulo, const int ano);
    virtual int getTipo() = 0;
    virtual void imprimeDados() = 0;
    void imprimeFicha();

    std::string getTitulo();
    void setTitulo(std::string);
    int getAno();
    void setAno(int);
};
#endif
