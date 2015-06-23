#include "pasajero.hpp"

#include <sstream>
#include <string>

using namespace std;

pasajero::pasajero(string nombre, double peso) {
    this->nombre = nombre;
    this->peso = peso;
}

pasajero::pasajero(const pasajero& orig) {
}

pasajero::~pasajero() {
}

string pasajero::getNombre() const{
    return this->nombre;
}

double pasajero::getPeso() const{
    return this->peso;
}

void pasajero::setNombre(string nombre){
    this->nombre = nombre;
}

void pasajero::setPeso(double potencia){
    this->peso = potencia;
}

string pasajero::toString() const{
    stringstream ss;
    ss << "Pasajero{ Nombre: " << this->nombre << "Peso: " << this->peso <<"}";
    return ss.str();
}
