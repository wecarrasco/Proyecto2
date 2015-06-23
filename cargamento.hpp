#ifndef CARGAMENTO_H
#define	CARGAMENTO_H

#include <string>

using namespace std;

class cargamento {
public:
    cargamento(string nombre, double peso, int unidades);
    cargamento(const cargamento& orig);
    virtual ~cargamento();
    string getNombre()const;
    void setNombre(string nombre);
    double getPeso()const;
    void setPeso(double potencia);
    int getUnidades()const;
    void setUnidades(int unidades);
    string toString()const;
protected:
    string nombre;
    double peso;
    int unidades;

};

#endif	/* CARGAMENTO_H */

