#include "avionGuerra.hpp"
#include "arma.hpp"
#include "avion.hpp"

#include <string>

#include <sstream>

using namespace std;

avionGuerra::avionGuerra(string nombre, string fabricante, string estado, string piloto, string copiloto) : Avion(nombre, fabricante, "Estacionado"), piloto(piloto), copiloto(copiloto) {

}

avionGuerra::avionGuerra(const avionGuerra& orig):Avion(orig), piloto(orig.piloto), copiloto(orig.copiloto) {
}

avionGuerra::~avionGuerra() {
}

void avionGuerra::agregarArma(Arma& arma) {
    this->armamento.push_back(arma);
}

void avionGuerra::setPiloto(string piloto) {
    this->piloto = piloto;
}

string avionGuerra::getPiloto() const {
    return this->piloto;
}

void avionGuerra::setCopiloto(string copiloto) {
    this->copiloto = copiloto;
}

string avionGuerra::getCopiloto() const {
    return this->copiloto;
}

string avionGuerra::toString() const {
    stringstream ss;
    ss << "Avion de Guerra: "<<Avion::toString()<< "\nArmamento{ \n";
    for (int i = 0; i < armamento.size(); i++) {
        ss << armamento[i].toString() << "\n";
    }
    ss << "} \nPiloto: " << piloto << "\nCopiloto: " << copiloto << "\n\n";
    return ss.str();
}