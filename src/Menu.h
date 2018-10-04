#ifndef MENU_H_
#define MENU_H_

#include "Sumatoria.h"
#include "Subtraccion.h"
#include "Multiplicacion.h"
#include "Division.h"

class Menu {
private:
	static const int LONGITUD;
	Opcion** opciones;
	Sumatoria* getSumatoria();
	Subtraccion* getSubtraccion();
	Multiplicacion* getMultiplicacion();
	Division* getDivision();
public:
	Menu();
	void mostrarTitulos();
	Opcion* getOpcion(Entero posicion);
	Entero leerPosicion();
	virtual ~Menu();
};

#endif
