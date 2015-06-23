#ifndef ARMA_H
#define	ARMA_H

#include <iostream>
#include <string>

using namespace std;

class Arma {
public:
    Arma(string nombre, double potencia);
    Arma(const Arma& orig);
    virtual ~Arma();
    string getNombre()const;
    void setNombre(string nombre);
    double getPotencia()const;
    void setPotencia(double potencia);
    string toString()const;
    
    
    
protected:
    string nombre;
    double potencia;
};

#endif	/* ARMA_H */