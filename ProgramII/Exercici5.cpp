//Generar una classe Jugador que tingui:
//•	nom
//•	punts
//•	vides
//Ha de permetre :
//•	Crear un jugador amb un nom, sense punts i 10 vides.
//•	Afegir punts.
//•	Perdre una vida.
//•	Consultar els punts.
//•	Consultar les vides.
//•	Saber si el jugador està viu.


#include <iostream>
#include <string>
using namespace std;

class Jugador
{
private:
    string nom;
    int punts;
    int vides;

public:
    Jugador(string nomInicial)
    {
        nom = nomInicial;
        punts = 0;
        vides = 10;
    }

    void afegirPunts(int quantitat)
    {
        punts = punts + quantitat;
    }

    void perdreVida()
    {
        if (vides > 0)
        {
            vides = vides - 1;
        }
    }

    int consultarPunts()
    {
        return punts;
    }

    int consultarVides()
    {
        return vides;
    }

    bool estaViu()
    {
        if (vides > 0)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Jugador jugador("Anna");

    jugador.afegirPunts(100);
    jugador.perdreVida();

    cout << "Punts: " << jugador.consultarPunts() << endl;
    cout << "Vides: " << jugador.consultarVides() << endl;

    if (jugador.estaViu())
    {
        cout << "El jugador esta viu" << endl;
    }
    else
    {
        cout << "El jugador no esta viu" << endl;
    }

    return 0;
}