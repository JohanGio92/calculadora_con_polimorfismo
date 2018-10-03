#ifndef DIVISION_H_
#define DIVISION_H_

#include "Opcion.h"
#include <cassert>

class Division : public Opcion{
public:
	Division();
	virtual Entero ejecutar() override;
	virtual ~Division();
};

#endif
