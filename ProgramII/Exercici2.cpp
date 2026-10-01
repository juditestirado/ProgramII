//Generar una classe Rectangle perquè permeti :
//•	Crear un rectangle indicant amplada i alçada.
//•	Calcular l'àrea.
//•	Calcular el perímetre.
//•	Mostrar les dimensions del rectangle

#include <iostream>
using namespace std;

class Rectangle
{
private:
    double amplada;
    double alcada;

public:
    Rectangle(double ampladaInicial, double alcadaInicial)
    {
        amplada = ampladaInicial;
        alcada = alcadaInicial;
    }

    double calcularArea()
    {
        return amplada * alcada;
    }

    double calcularPerimetre()
    {
        return 2 * (amplada + alcada);
    }

    void mostrarDimensions()
    {
        cout << "Amplada: " << amplada << endl;
        cout << "Alcada: " << alcada << endl;
    }
};

int main()
{
    Rectangle rectangle(5, 3);

    rectangle.mostrarDimensions();

    cout << "Area: " << rectangle.calcularArea() << endl;

    cout << "Perimetre: " << rectangle.calcularPerimetre() << endl;

    return 0;
}