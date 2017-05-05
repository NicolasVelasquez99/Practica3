/*
 *Autor: Nicolas Velasquez
 *Archivo: EmpleadoOficina.cpp
 *Descripción: Clase que implementa objeto Empleado Oficina
 *Fecha: 04-05-2016
 *Fecha modificación: 05 de Mayo de 2016 
 */
 
#include "EmpleadoOficina.h"


EmpleadoOficina::EmpleadoOficina(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asocSindicalIn, string nomJefeIn,  string descripLaboresIn):EmpleadoAsistente(nombreIn, edadIn, salarioIn, numSeccionIn, asocSindicalIn){
	
	nomJefe = nomJefeIn;
	descripLabores = descripLaboresIn;
	
}

EmpleadoOficina::~EmpleadoOficina(){

}

string EmpleadoOficina::getNomJefe(){
	return nomJefe;
}

string EmpleadoOficina::getDescripLabores(){
	return descripLabores;
}

void EmpleadoOficina::setNomJefe(string nomJefeIn){
		
	nomJefe = nomJefeIn;
}

void EmpleadoOficina::setDescripLabores(string descripLaboresIn){
	
	descripLabores = descripLaboresIn;
}


