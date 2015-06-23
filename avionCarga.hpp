#ifndef AVIONCARGA_H
#define	AVIONCARGA_H

#include "avion.hpp"
#include "cargamento.hpp"

#include <string>
#include <vector>

using namespace std;


class avionCarga:public Avion {
public:
    avionCarga(string nombre, string fabrica, string estado, double pesoPermitido);
    avionCarga(const avionCarga& orig);
    virtual ~avionCarga();
    void agregarCargamento(cargamento&);
    double getpesoPermitido()const;
    void setpesoPermitido(double pesoPermitido);
    virtual string toString()const;
private:
    vector<cargamento> cargamentos;
    double pesoPermitido;
};

#endif