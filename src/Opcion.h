#ifndef OPCION_H_
#define OPCION_H_

#include "Consola.h"

typedef int Entero;

class Opcion {
protected:
	std::string titulo;
	Entero unNumero;
	Entero otroNumero;
public:
	Opcion(std::string titulo);
	Opcion();
	virtual Entero ejecutar() = 0;
	virtual void readOperandos();
	virtual ~Opcion();
};

#endif
