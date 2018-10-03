#ifndef SUMATORIA_H_
#define SUMATORIA_H_

#include "Opcion.h"

class Sumatoria : public Opcion {
public:
	Sumatoria();
	virtual Entero ejecutar() override;
	virtual ~Sumatoria();
};

#endif
