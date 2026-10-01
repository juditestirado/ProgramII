//Generar una classe Termòmetre perquè permeti :
//•	Crear un termòmetre amb una temperatura inicial.
//•	Consultar la temperatura.
//•	Modificar la temperatura(No permetre temperatures inferiors a - 50 °C ni superiors a 60 °C)


#include <iostream>
using namespace std;

class Termometre
{
private:
    double temperatura;

public:
    Termometre(double temperaturaInicial)
    {
        temperatura = temperaturaInicial;
    }

    double consultar()
    {
        return temperatura;
    }

    void modificar(double novaTemperatura)
    {
        if (novaTemperatura >= -50 && novaTemperatura <= 60)
        {
            temperatura = novaTemperatura;
        }
    }
};

int main()
{
    Termometre termometre(20);

    cout << "Temperatura: " << termometre.consultar() << " graus" << endl;

    termometre.modificar(30);

    cout << "Temperatura: " << termometre.consultar() << " graus" << endl;

    termometre.modificar(70);

    cout << "Temperatura: " << termometre.consultar() << " graus" << endl;

    return 0;
}