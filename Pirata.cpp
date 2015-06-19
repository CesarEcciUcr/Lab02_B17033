#include "stdafx.h"
#include "Pirata.h"


Pirata::Pirata()
{
	int num = rand() % 2000 + 1000;
	this->saco = new Pirata[num];
	for (int i = 0; i < num ; i++){
		saco[i] = nullptr_t;
	}
}

void Pirata::saquearTesoro()
{
	
}

void Pirata::revisarSaco()
{
	if (vacio()==true){
	}
	else{

	}
}
bool Pirata::vacio(){
	bool resp;
	for (int i = 0; i < sizeof(saco); i++){
		if (saco[i] == 0){
			resp = true;
		}
	}
	return resp;
}

Pirata::~Pirata()
{
}
