#include "avionCarga.hpp"
#include "avion.hpp"
#include "cargamento.hpp"

#include <string>
#include <sstream>

using namespace std;

avionCarga::avionCarga(string nombre, string fabrica, string estado, double pesoPermitido) : Avion(nombre, fabrica, estado), pesoPermitido(pesoPermitido) {
}

avionCarga::avionCarga(const avionCarga& orig):Avion(orig), pesoPermitido(orig.pesoPermitido) {
}

avionCarga::~avionCarga() {
}

void avionCarga::agregarCargamento(cargamento& carga) {
    this->cargamentos.push_back(carga);
}

double avionCarga::getpesoPermitido()const {
    return this->pesoPermitido;
}

void avionCarga::setpesoPermitido(double pesoPermitido) {
    this->pesoPermitido = pesoPermitido;
}

string avionCarga::toString()const {
    stringstream ss;
    ss << "Avion de Carga: "<< Avion::toString() << ", Armamento{ \n";
    double peso = 0.0;
    for (int i = 0; i < cargamentos.size(); i++) {
        ss << cargamentos[i].toString() << "\n";
        peso += cargamentos[i].getPeso();
    }
    ss << "}, Peso Total: " << peso << ", Peso Permitido: " << this->pesoPermitido << "\n";
    return ss.str();
}