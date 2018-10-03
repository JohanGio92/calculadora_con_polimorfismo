#ifndef OPCION_H_
#define OPCION_H_
#include <string>
#include <iostream>

typedef int Entero;

class Opcion {
private:
	std::string titulo;
	Entero unNumero;
	Entero otroNumero;
public:
	Opcion();
	virtual Entero ejecutar() = 0;

	virtual ~Opcion();
};

#endif
