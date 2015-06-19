#pragma once
#include "Anillo.h"
#include "Collar.h"
#include "Corona.h"
#include "Moneda.h"
#include "Corona.h"
#include "Collar.h"
#include "Anillo.h"

class Tesoro
{
	friend class Pirata;

public:
	Tesoro();
	virtual ~Tesoro();
	Tesoro generarTesoro();

private:
	Tesoro* cofreDelTesoro;
};

