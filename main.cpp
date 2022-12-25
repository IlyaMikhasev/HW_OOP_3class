#include <iostream>
#include "transport.h"
int main() {
	setlocale(LC_ALL, "Russian");
	transport transport(60,"white",1000);
	comercial com(15,255,80);
	bus bus(40,15,255,7,"Jordan Street");
	std::cout << "Speed transport = " << transport.getSpeed() << '\n';
	std::cout << "Speed comercial = " << com.getSpeed() << '\n';
	std::cout << "Speed bus = " << bus.getSpeed() << std::endl;

	return 0;
}