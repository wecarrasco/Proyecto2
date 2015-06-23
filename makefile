rm: exe
	rm *.o

exe: avion.o avionGuerra.o arma.o avionPasajero.o pasajero.o avionCarga.o cargamento.o
	g++ main.cpp avion.o avionGuerra.o arma.o avionPasajero.o pasajero.o avionCarga.o cargamento.o -o exe

avion.o: avionGuerra.o avionCarga.o avionPasajero.o arma.o cargamento.o pasajero.o
	g++ -c avion.cpp

avionGuerra.o: arma.o
	g++ -c avionGuerra.cpp

avionPasajero.o: pasajero.o
	g++ -c avionPasajero.cpp

avionCarga.o: cargamento.o
	g++ -c avionCarga.cpp

arma.o: 
	g++ -c arma.cpp

cargamento.o: 
	g++ -c cargamento.cpp

pasajero.o:
	g++ -c pasajero.cpp