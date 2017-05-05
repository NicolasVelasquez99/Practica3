/*
 * Archivo de cabecera clase Empleado
 */
 
 #ifndef EMPLEADO_H
 #define EMPLEADO_H
#include <string>
using std::string; 
 /*
  *Definición clase Empleado
  */
  
class Empleado{

	//Los datos protegido sólo pueden ser vivos por esta clase y por los que heredan de ella
	protected:
		string nombre;
		int edad;
		int salario;
	
	public:
		Empleado(string nombreIn, int edadIn, int salarioIn);
		~Empleado();
		
		string getNombre();
		int getEdad();
		int getSalario();
	 
};
 
 
 #endif
