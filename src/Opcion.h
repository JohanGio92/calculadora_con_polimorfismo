#ifndef OPCION_H_
#define OPCION_H_

#include "Consola.h"

typedef int Entero;

class Opcion {
protected:
	std::string titulo;
	Entero unNumero;
	Entero otroNumero;
	Consola consola;
public:
	Opcion(std::string titulo);
	Opcion();
	virtual void ejecutar() = 0;
	virtual void leerOperandos();
	virtual void mostrarTitulo(int posicion);
	virtual ~Opcion();
};

#endif
