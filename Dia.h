/*
 * Cabecera objeto Dia
 */
#ifndef DIA_H
#define DIA_H

#include <string>
using std::string;

class Dia{
    private:
        string nombreDia;
        int numeroDia;

    public:
        Dia(string nombreD, int numeroD);
        ~Dia();

        string getNombreDia();
        int getNumeroDia();

        void setNombreDia(string nombreD);
        void setNumeroDia(int numeroD);
};
#endif
