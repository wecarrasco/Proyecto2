#ifndef AVION_H
#define	AVION_H

#include <string>

using namespace std;

class Avion {
public:
    Avion(string nombre, string fabricante, string estado);
    //Avion();
    Avion(const Avion& orig);
    virtual ~Avion();
    void setNombre(string nombre);
    string getNombre()const;
    void setFabricante(string fabricante);
    string getFabricante()const;
    virtual void setEstado(string estado);
    virtual string getEstado()const;
    virtual string toString()const;
    
protected:
    string nombre;
    string fabricante;
    string estado;

};

#endif	/* AVION_H */