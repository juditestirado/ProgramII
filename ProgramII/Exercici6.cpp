//Generar una classe Producte que tingui :
//•	nom
//•	preu
//•	estoc
//Ha de permetre :
//•	Crear un producte.
//•	Consultar el preu.
//•	Canviar el preu.
//•	Afegir unitats a l'estoc.
//•	Vendre una unitat(impedir vendre si no hi ha estoc)

#include <iostream>
#include <string>
using namespace std;

class Producte
{
private:
    string nom;
    double preu;
    int estoc;

public:
    Producte(string nomInicial, double preuInicial, int estocInicial)
    {
        nom = nomInicial;
        preu = preuInicial;
        estoc = estocInicial;
    }

    double consultarPreu()
    {
        return preu;
    }

    void canviarPreu(double nouPreu)
    {
        preu = nouPreu;
    }

    void afegirEstoc(int quantitat)
    {
        estoc = estoc + quantitat;
    }

    bool vendre()
    {
        if (estoc > 0)
        {
            estoc = estoc - 1;
            return true;
        }

        return false;
    }
};

int main()
{
    Producte producte("Auriculars", 25.50, 5);

    cout << "Preu: " << producte.consultarPreu() << " euros" << endl;

    producte.canviarPreu(20);

    cout << "Nou preu: " << producte.consultarPreu() << " euros" << endl;

    producte.afegirEstoc(3);

    if (producte.vendre())
    {
        cout << "Venda correcta" << endl;
    }
    else
    {
        cout << "No hi ha estoc" << endl;
    }

    return 0;
}