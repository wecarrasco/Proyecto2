#include "arma.hpp"
#include <sstream>
#include <string>

using namespace std;

Arma::Arma(string nombre, double potencia) {
    this->nombre = nombre;
    this->potencia = potencia;
}

Arma::Arma(const Arma& orig) {
}

Arma::~Arma() {
}

string Arma::getNombre() const{
    return this->nombre;
}

double Arma::getPotencia() const{
    return this->potencia;
}

void Arma::setNombre(string nombre){
    this->nombre = nombre;
}

void Arma::setPotencia(double potencia){
    this->potencia = potencia;
}

string Arma::toString() const{
    stringstream ss;
    ss << "Nombre: " << this->nombre << "Potencia: " << this->potencia <<".";
    return ss.str();
}