#include "cargamento.hpp"
#include <string>
#include <sstream>

using namespace std;

cargamento::cargamento(string nombre, double peso, int unidades) {
    this->nombre = nombre;
    this->peso = peso;
    this->unidades = unidades;
}

cargamento::cargamento(const cargamento& orig) {
}

cargamento::~cargamento() {
}

string cargamento::getNombre()const{
    return this->nombre;
}
void cargamento::setNombre(string nombre){
    this->nombre = nombre;
}
double cargamento::getPeso()const{
    return this->peso;
}
void cargamento::setPeso(double potencia){
    this->peso = peso;
}
int cargamento::getUnidades()const{
    return this->unidades;
}
void cargamento::setUnidades(int unidades){
    this->unidades = unidades;
}
string cargamento::toString()const{
    stringstream ss;
    ss << "Cargamento{ Nombre: " << nombre << ", Unidades: " << unidades << ", Peso: " << peso << "}";
    return ss.str();          
}