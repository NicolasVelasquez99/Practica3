/*
 *Autor: Nicolas Velasquez
 *Archivo: Empleado.cpp
 *Descripción: Clase que implementa objeto Empleado
 *Fecha: 04-05-2016
 *Fecha modificación: 05 de Mayo de 2016 
 */
 
#include "Empleado.h"


Empleado::Empleado(string nombreIn, int edadIn, int salarioIn){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	
}

Empleado::~Empleado(){
	
}
	
string Empleado::getNombre(){
	return nombre;
}

int Empleado::getEdad(){
	return edad;
}

int Empleado::getSalario(){
	return salario;
}
