#pragma once
class Pirata
{
	Pirata * saco;

public:
	Pirata();
	virtual ~Pirata();
	void saquearTesoro();
	void revisarSaco();

private:
	bool vacio();
	
};
