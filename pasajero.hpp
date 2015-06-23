#ifndef PASAJERO_H
#define	PASAJERO_H

#include <string>

using namespace std;

class pasajero {
public:
    pasajero(string nombre, double peso);
    pasajero(const pasajero& orig);
    virtual ~pasajero();
    string getNombre()const;
    void setNombre(string nombre);
    double getPeso()const;
    void setPeso(double potencia);
    string toString()const;
    
protected:
    string nombre;
    double peso;
    
};

#endif	/* PASAJERO_H */