#ifndef AVIONGUERRA_H
#define AVIONGUERRA_H

#include "avion.hpp"
#include "arma.hpp"
#include <string>
#include <vector>

using namespace std;

class avionGuerra:public Avion {
public:
    avionGuerra(string nombre, string fabricante, string estado, string piloto, string copiloto);
    avionGuerra(const avionGuerra& orig);
    virtual ~avionGuerra();
    void agregarArma(Arma&);
    void setPiloto(string piloto);
    string getPiloto() const;
    void setCopiloto(string copiloto);
    string getCopiloto() const;
    virtual string toString() const;
    
protected:
    vector <Arma> armamento;
    string piloto;
    string copiloto;
};

#endif