#ifndef MENU_H_
#define MENU_H_

#include "Sumatoria.h"
#include "Subtraccion.h"
#include "Multiplicacion.h"
#include "Division.h"
#include "Salida.h"

class Menu {
private:
	static const int LONGITUD;
	Entero cantidad;
	Opcion** opciones;
	Salida* salida;
public:
	Menu();
	void mostrarTitulos();
	Opcion* getOpcion(Entero posicion);
	Entero leerPosicion();
	bool terminado();
	void agnadir(Opcion* opcion);
	void cerrar();
	virtual ~Menu();
};

#endif
