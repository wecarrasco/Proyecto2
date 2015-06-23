#ifndef AVIONPASAJERO_H
#define	AVIONPASAJERO_H

#include "avion.hpp"
#include "pasajero.hpp"

#include <string>
#include <vector>

using namespace std;

class avionPasajero:public Avion {
public:
    avionPasajero(string nombre, string fabricante, string estado, double pesoPermitido);
    avionPasajero(const avionPasajero& orig);
    virtual ~avionPasajero();
    void agregarPasajero(pasajero&);
    double getpesoPermitido()const;
    void setpesoPermitido(double pesoPermitido);
    virtual string toString()const;
private:
    vector<pasajero> pasajeros;
    double pesoPermitido;
};

#endif	/* AVIONPASAJERO_H */

