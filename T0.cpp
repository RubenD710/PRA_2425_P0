#include "T0.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(){
	x=0;
	y=0;
	z=0;
	sujetando=false;
}

double BrazoRobotico::getx(){
	std::cout << "Posicion en x: " << x << std::endl;
	return x;
}

double BrazoRobotico::gety(){
	std::cout << "Posicion en y: " << y << std::endl;
	return y;
}

double BrazoRobotico::getz(){
	std::cout << "Posicion en z: " << z << std::endl;
	return z;
}

bool BrazoRobotico::getsujetando(){
	std::cout << "El brazo robotico";
	if (sujetando){
	   std::cout << " esta sujetando un objeto" << std::endl;
	}else{
	   std::cout << " no esta sujetando un objeto" << std::endl;
	}
	
	return sujetando;
}

void BrazoRobotico::coger(){
	std::cout << "El brazo va a cojer un objeto"<< std::endl;
	sujetando=true;
}

void BrazoRobotico::soltar(){
	std::cout << "El brazo va a soltar un objeto"<< std::endl;
	sujetando=false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this->x=x;
	this->y=y;
	this->z=z;
	std::cout << "El brazo robotico se esta moviendo a las cordenadas:" << std::endl;
	std::cout << "x: " << x << std::endl;
       	std::cout << "y: " << y << std::endl;
	std::cout << "z: " << z << std::endl;

}

