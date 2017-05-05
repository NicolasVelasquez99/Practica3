/*
 * Archivo de cabecera clase Empleado Operativo
 */
 
 #ifndef EMPLEADOOPERATIVO_H
 #define EMPLEADOOPERATIVO_H


#include "EmpleadoAsistente.h"
#include <string>
using std::string; 
 /*
  *Definición clase EmpleadoOperativo
  */
  
class EmpleadoOperativo: public EmpleadoAsistente{

	//Los datos protegido sólo pueden ser vivos por esta clase y por los que heredan de ella
	protected:
		string descripActividad;
	
	public:
		EmpleadoOperativo(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asocSindicalIn, string descripActividadIn);
		~EmpleadoOperativo();
		
		string getDescripActividad();
	
		void setDescripActividad(string descripActividadIn);
	 
};

#endif
