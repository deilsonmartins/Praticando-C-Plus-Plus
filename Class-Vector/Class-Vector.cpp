#include <iostream>
#include <vector>
#include "Coordenada.h"

int main()
{
    std::vector<Coordenada*> Points;
	
	Coordenada* Point1 = new Coordenada(10, 10);
	Coordenada* Point2 = new Coordenada(20, 20);

	Points.push_back(Point1);
	Points.push_back(Point2);

	std::cout << "Points: " << std::endl;

	for (std::vector<Coordenada*>::iterator it = Points.begin(); it != Points.end(); it++)
		std::cout << "(" << (*it)->getX() << "," << (*it) ->getY() << ")" << std::endl;

}

