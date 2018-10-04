#include "Menu.h"

const int Menu::LONGITUD = 5;

Menu::Menu() : cantidad(0) {
	this->opciones = new Opcion*[LONGITUD];
	for (int i = 0; i < LONGITUD; ++i) {
		opciones[i] = nullptr;
	}
	this->salida = nullptr;
}

void Menu::mostrarTitulos() {
	for (int i = 0; i < LONGITUD; i++) {
		opciones[i]->mostrarTitulo(i + 1);
	}
}

Opcion* Menu::getOpcion(Entero posicion) {
	return opciones[posicion];
}

bool Menu::terminado() {
	return salida->cerrar();
}

void Menu::agnadir(Opcion* opcion) {
	this->opciones[cantidad] = opcion;
	++cantidad;
}

void Menu::cerrar() {
	salida = new Salida();
	this->agnadir(salida);
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

