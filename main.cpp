#include "avion.hpp"
#include "avionGuerra.hpp"
#include "arma.hpp"
#include "cargamento.hpp"
#include "pasajero.hpp"
#include "avionPasajero.hpp"
#include "avionCarga.hpp"

#include <iostream>
#include <string>
#include <vector>
//#include <stdio.h>

void listarAviones(vector<Avion>);
void clear();

using namespace std;

int main(int argc, char const *argv[])
{
	vector <Avion> aviones;
	vector <Arma> armas;
	vector <cargamento> cargamentos;
	vector <pasajero> pasajeros;
	clear();
	avionGuerra a("Pity", "Pity.inc", "Estacionado", "Miguel", "Walther");
	//cout << a.toString();
	aviones.push_back(a);
	cout<<aviones.at(0).toString();
	
	int menu = 0;
	while(menu != 4){
		cout << "------ FUERZAS ARMADAS HONDUREÑAS ------"<<endl;
		cout << "   -----------BIENVENIDO-----------"<<endl;

		cout << "1) Agregar Avion" << endl;
		cout << "2) Modificar Avion" << endl;
		cout << "3) Eliminar Avion" << endl;
		cout << "4) Despegar Avion" << endl;
		cout << "5) Alistar Avion" << endl;
		cout << "6) Estacionar Avion" << endl;
		cout << "7) Listar Aviones" << endl;
		cout << "8) Crear Arma"<<endl;
		cout << "9) Crear Pasajero" << endl;
		cout << "10) Crear Cargamento" << endl;
		cout << "11) Salir" << endl;
		cin >> menu;
		if (menu == 1)
		{
			int menu1 = 0;
			cout << endl << "-------AGREGAR AVION--------"<<endl; 
			cout << "1) Avion de Guerra" << endl;
			cout << "2) Avion de Pasajero" << endl;
			cout << "3) Avion de Cargamento" << endl;
			cin >> menu1;
			if (menu1 == 1)
			{
				string nombre = "", fabricante = "", piloto = "", copiloto = "";
				int opc;
				cout << "Ingrese Nombre: ";
				cin >> nombre;
				cout << endl << "Ingrese Fabricante: ";
				cin >> fabricante;
				cout << endl << "Ingrese nombre del Piloto: ";
				cin >> piloto;
				cout << endl << "Ingrese nombre de copiloto: ";
				cin >> copiloto;
				avionGuerra a(nombre, fabricante, "Estacionado", piloto, copiloto);
				cout << endl << "Agregar Armas: " << endl;
				do
				{
					cout<< "---------Armas--------" << endl;
					for (int i = 0; i < armas.size(); i++)
					{
						cout << (i+1) << armas[i].toString() << endl;
					}
					cout << endl << "Ingresa el numero del arma que desea agregar, presione 0 para dejar de agreagar.";
					cin >> opc;
					
					if (opc != 0)
					{
						a.agregarArma(armas[opc-1]);
					    
					}
					

				} while (opc != 0);
				aviones.push_back(a);
				cout << "AVION CREADO CON EXITO" << endl;
				char b  = ' ';
				cin>>b;
				clear();
			}else if (menu1 == 2)
			{
				string nombre = "", fabricante = "";
				double pesoMax = 0.0;
				int opc = 0;
				cout << "Ingrese Nombre: ";
				cin >> nombre;
				cout << endl << "Ingrese Fabricante: ";
				cin >> fabricante;
				cout << endl << "Ingrese Peso Maximo: ";
				cin >> pesoMax;
				avionPasajero a(nombre, fabricante, "Estacionado", pesoMax);
				cout << endl << "Agregar Pasajeros: " << endl;
				int peso=0;
				do
				{
					cout<< "---------Pasajeros--------" << endl;
					for (int i = 0; i < pasajeros.size(); i++)
					{
						cout << (i+1) << pasajeros[i].toString() << endl;
					}
					cout << endl << "Ingresa el numero del pasajero que desea agregar, presione 0 para dejar de agreagar.";
					cin >> opc;
					
					if (opc != 0)
					{
						if ((peso+pasajeros[opc-1].getPeso()) < pesoMax)
						{
							a.agregarPasajero(pasajeros[opc-1]);
							peso+=pasajeros[opc-1].getPeso();

						}else{
							cout<<"Peso no soportado"<<endl;
						}
					}
					
				} while (opc != 0);
				aviones.push_back(a);
				cout << "AVION CREADO CON EXITO" << endl;
				char b = ' ';
				cin>>b;
				clear();
			}else{
				string nombre = "", fabricante = "";
				double pesoMax = 0.0;
				int opc = 0;
				cout << "Ingrese Nombre: ";
				cin >> nombre;
				cout << endl << "Ingrese Fabricante: ";
				cin >> fabricante;
				cout << endl << "Ingrese Peso Maximo: ";
				cin >> pesoMax;
				avionCarga a(nombre, fabricante, "Estacionado", pesoMax);
				cout << endl << "Agregar Cargas: " << endl;
				int peso=0;
				do
				{
					cout<< "---------Cargamentos--------" << endl;
					for (int i = 0; i < cargamentos.size(); i++)
					{
						cout << (i+1) << cargamentos[i].toString() << endl;
					}
					cout << endl << "Ingresa el numero del cargamento que desea agregar, presione 0 para dejar de agreagar.";
					cin >> opc;
					
					if (opc != 0)
					{
						if ((peso+cargamentos[opc-1].getPeso()) < pesoMax)
						{
							a.agregarCargamento(cargamentos[opc-1]);
							peso+=cargamentos[opc-1].getPeso();

						}else{
							cout<<"Peso no soportado"<<endl;
						}
					}
					
				} while (opc != 0);
				aviones.push_back(a);
				cout << "AVION CREADO CON EXITO" << endl;
				char b =' ';
				cin>>b;
				clear();
			}
		}else if (menu == 2)
		{
			
		}else if (menu == 3)
		{
			
		}else if (menu == 4)
		{
			listarAviones(aviones);
			cout<<"\n\nIngrese el numero del avion que quiere despegar: "<< endl;
			int avionSeleccionado;
			cin >> avionSeleccionado;
			if (aviones[avionSeleccionado].getEstado() == "Preparado")
			{
				aviones[avionSeleccionado].setEstado("En Aire");
			}
		}else if (menu == 5)
		{
			listarAviones(aviones);
			cout<<"\n\nIngrese el numero del avion que quiere alirstar: "<< endl;
			int avionSeleccionado = 0;
			cin >> avionSeleccionado;
			if (aviones[avionSeleccionado].getEstado() == "En Aire"  ||  aviones[avionSeleccionado].getEstado() == "Estacionado" )
			{
				aviones[avionSeleccionado].setEstado("Preparado");
			}
		}else if (menu == 6)
		{
			listarAviones(aviones);
			cout<<"\n\nIngrese el numero del avion que quiere estacionar: "<< endl;
			int avionSeleccionado=0;
			cin >> avionSeleccionado;
			if (aviones[avionSeleccionado].getEstado() == "En Aire"  ||  aviones[avionSeleccionado].getEstado() == "Preparado" )
			{
				aviones[avionSeleccionado].setEstado("Estacionado");
			}
		}else if (menu == 7)
		{
			listarAviones(aviones);
		}else if (menu == 8)
		{
			cout << "------CREAR ARMA------" << endl;
			string nombre = "";
			double potencia = 0.0;
			cout << "Ingrese Nombre: " << endl;
			cin >> nombre;
			cout << endl << "Potencia: " << endl;
			cin >> potencia;
			Arma a(nombre, potencia);
			armas.push_back(a); 
		}else if (menu == 9)
		{
			cout << "------CREAR PASAJERO------" << endl;
			string nombre = "";
			double peso = 0.0;
			cout << "Ingrese Nombre: " << endl;
			cin >> nombre;
			cout << endl << "Peso: " << endl;
			cin >> peso;
			pasajero a(nombre, peso);
			pasajeros.push_back(a); 
		}else if (menu == 10)
		{
			cout << "------CREAR CARGAMENTO------" << endl;
			string nombre = "";
			double peso = 0.0;
			cout << "Ingrese Nombre: " << endl;
			cin >> nombre;
			cout << endl << "Peso: " << endl;
			cin >> peso;
			cout << endl << "Unidades: "<<endl;
			int unidades = 0;
			cin >> unidades;
			cargamento a(nombre, peso, unidades);
			cargamentos.push_back(a);
		}else{
			return 0;
		}
	}

	return 0;	
}

void clear(){
	for (int i = 0; i < 50; i++)
	{
		cout << "\n\n\n" <<endl;
	}
}

void listarAviones(vector<Avion>aviones){
	cout << "-------AVIONES--------"<<endl;
	for (int i = 0; i < aviones.size(); i++)
	{
		cout << i << aviones[i].toString() << endl;
	}

}