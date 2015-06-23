#include "avionPasajero.hpp"
#include "avion.hpp"
#include "pasajero.hpp"

#include <sstream>
#include <string>

using namespace std;

avionPasajero::avionPasajero(string nombre, string fabricante, string estado, double pesoPermitido):Avion(nombre, fabricante, estado), pesoPermitido(pesoPermitido) {
}

avionPasajero::avionPasajero(const avionPasajero& orig):Avion(orig),pesoPermitido(orig.pesoPermitido) {
}

avionPasajero::~avionPasajero() {
}

void avionPasajero::agregarPasajero(pasajero& persona){
    this->pasajeros.push_back(persona);
}
double avionPasajero::getpesoPermitido()const{
    return this->pesoPermitido;
}
void avionPasajero::setpesoPermitido(double pesoPermitido){
    this->pesoPermitido = pesoPermitido;
}
string avionPasajero::toString()const{
    stringstream ss;
    ss << "Avion de Pasajeros: "<< Avion::toString() << ", Armamento{ \n";
    double peso=0.0;
    for (int i = 0; i < pasajeros.size(); i++) {
        ss << pasajeros[i].toString() << "\n";
        peso+=pasajeros[i].getPeso();
    }
    ss << "}, Peso Total: " << peso << ", Peso Permitido: " << pesoPermitido << "\n";
    return ss.str();
}