/*
 *Autor: Nicolas Velasquez
 *Archivo: EmpleadoAsistente.cpp
 *Descripción: Clase que implementa objeto Empleado
 *Fecha: 04-05-2016
 *Fecha modificación: 05 de Mayo de 2016 
 */
#include "EmpleadoAsistente.h"

EmpleadoAsistente::EmpleadoAsistente(string nombreIn, int edadIn, int salarioIn,string numSeccionIn, string asocSindicalIn):Empleado(nombreIn, edadIn, salarioIn){
	/*nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;*/
	numSeccion = numSeccionIn;
	asocSindical = asocSindicalIn;
	
	
}

EmpleadoAsistente::~EmpleadoAsistente(){
	
}

string EmpleadoAsistente::getNumSeccion(){
	return numSeccion;
}

string EmpleadoAsistente::getAsocSindical(){
		return asocSindical;
}

void EmpleadoAsistente::setNumSeccion(string numSeccionIn){
	numSeccion = numSeccionIn;
}

void EmpleadoAsistente::setAsocSindical(string asocSindicalIn){
	asocSindical = asocSindicalIn;
}

