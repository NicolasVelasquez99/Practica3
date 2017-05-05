/*
 * Cabecera objeto Mes
 */
#ifndef MES_H
#define MES_H

#include <string>
using std::string;

class Mes{
    private:
        string nombreMes;
        int numeroMes;

    public:
        Mes(string nombreM, int numeroM);
        ~Mes();

        string getNombreMes();
        int getNumeroMes();

        void setNombreMes(string nombreM);
        void setNumeroMes(int numeroM);
};

#endif // MES_H
