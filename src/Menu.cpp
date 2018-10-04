#include "Menu.h"

const int Menu::LONGITUD = 4;

Menu::Menu() {
	this->opciones = new Opcion*[LONGITUD];
	opciones[0] = this->getSumatoria();
	opciones[1] = this->getSubtraccion();
	opciones[2] = this->getMultiplicacion();
	opciones[3] = this->getDivision();
}

Sumatoria* Menu::getSumatoria(){
	return new Sumatoria();
}

Subtraccion* Menu::getSubtraccion() {
	return new Subtraccion();
}

Multiplicacion* Menu::getMultiplicacion() {
	return new Multiplicacion();
}

Division* Menu::getDivision() {
	return new Division();
}

void Menu::mostrarTitulos() {
	for (int i = 0; i < LONGITUD; i++) {
		opciones[i]->mostrarTitulo(i + 1);
	}
}

Opcion* Menu::getOpcion(Entero posicion) {
	return opciones[posicion];
}

Entero Menu::leerPosicion() {
	Consola consola;
	int posicion;
	do {
		std::string maximo = consola.toString(LONGITUD);
		posicion = consola.leerEntero("Cual opcion? [1," + maximo + "]");
	} while (1 > posicion || posicion > LONGITUD);
	return posicion-1;
}

Menu::~Menu() {
	for (int i = 0; i < LONGITUD; ++i) {
		delete opciones[i];
	}
	delete[] opciones;
}

