//Generar una classe Reserva d'una habitació d'hotel:
//•	nom del client
//•	nombre de nits
//•	preu per nit
//•	estat de la reserva
//Ha de permetre :
//•	Crear una reserva.
//•	Consultar el nom del client.
//•	Canviar el nombre de nits.
//•	Calcular el preu total.
//•	Cancel·lar la reserva.
//•	Consultar si la reserva està activa.
//•	No permetre modificar les nits si la reserva està cancel·lada.

#include <iostream>
#include <string>
using namespace std;

class Reserva
{
private:
    string nomClient;
    int nombreNits;
    double preuPerNit;
    bool activa;

public:
    Reserva(string nomClientInicial, int nitsInicial, double preuInicial)
    {
        nomClient = nomClientInicial;
        nombreNits = nitsInicial;
        preuPerNit = preuInicial;
        activa = true;
    }

    string consultarNomClient()
    {
        return nomClient;
    }

    void canviarNits(int novesNits)
    {
        if (activa)
        {
            nombreNits = novesNits;
        }
    }

    double calcularPreuTotal()
    {
        return nombreNits * preuPerNit;
    }

    void cancel·lar()
    {
        activa = false;
    }

    bool estaActiva()
    {
        if (activa)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Reserva reserva("Anna", 3, 50);

    cout << "Client: " << reserva.consultarNomClient() << endl;

    cout << "Preu total: "
        << reserva.calcularPreuTotal()
        << " euros" << endl;

    reserva.canviarNits(5);

    cout << "Preu total: "
        << reserva.calcularPreuTotal()
        << " euros" << endl;

    reserva.cancel·lar();

    if (reserva.estaActiva())
    {
        cout << "La reserva esta activa" << endl;
    }
    else
    {
        cout << "La reserva esta cancel·lada" << endl;
    }

    return 0;
}