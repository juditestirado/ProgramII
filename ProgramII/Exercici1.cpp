//Generar una classe Persona que permeti :
//•	Crear una persona indicant el seu nom i edat
//•	Mostrar totes les dades d’una persona
//•	Comprovar si és major d’edat

#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
    string nom;
    int edat;

public:
    Persona(string nomInicial, int edatInicial)
    {
        nom = nomInicial;
        edat = edatInicial;
    }

    void mostrarDades()
    {
        cout << "Nom: " << nom << endl;
        cout << "Edat: " << edat << endl;
    }

    bool esMajorEdat()
    {
        if (edat >= 18)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Persona persona("Anna", 20);

    persona.mostrarDades();

    if (persona.esMajorEdat())
    {
        cout << "Es major d'edat" << endl;
    }
    else
    {
        cout << "No es major d'edat" << endl;
    }

    return 0;
}