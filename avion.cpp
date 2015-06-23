#include "avion.hpp"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Avion::Avion(string nombre, string fabricante, string estado) {
    this->nombre = nombre;
    this->fabricante = fabricante;
    this->estado = estado;
}



Avion::Avion(const Avion& orig) {
}

Avion::~Avion() {
}

string Avion::getEstado() const{
    return this->estado;
}

string Avion::getFabricante()const {
    return this->fabricante;
}

string Avion::getNombre() const{
    return this->nombre;
}

void Avion::setEstado(string estado){
    this->estado = estado;
}

void Avion::setFabricante(string fabricante){
    this->fabricante = fabricante;
}

void Avion::setNombre(string nombre){
    this->nombre = nombre;
}

string Avion::toString() const{
    stringstream ss;
    ss << "Nombre: " << nombre << "Fabricante: " << fabricante << "Estado: " << estado << ".";
    return ss.str();
}