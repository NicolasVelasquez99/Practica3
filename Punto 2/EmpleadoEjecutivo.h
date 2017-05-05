/*
 * Archivo de cabecera clase Empleado Ejecutivo
 */
 
 #ifndef EMPLEADOEJECUTIVO_H
 #define EMPLEADOEJECUTIVO_H
 
#include "Empleado.h"
#include <string>
using std::string; 
 /*
  *Definición clase EmpleadoEjecutivo
  */
  
class EmpleadoEjecutivo: public Empleado{

	//Los datos protegido sólo pueden ser vivos por esta clase y por los que heredan de ella
	protected:
		int numEmple;
		int numOficina;
	
	public:
		EmpleadoEjecutivo(string nombreIn, int edadIn, int salarioIn, int numEmpleIn, int numOficinaIn);
		~EmpleadoEjecutivo();
		
		int getNumEmple();
		int getNumOficina();
		
		void setNumEmple(int numEmpleIn);
		void setNumOficina(int numOficinaIn);
	 
};

#endif
