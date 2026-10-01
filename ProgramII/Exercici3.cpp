//Generar una classe Llum perquè permeti :
//•	Crear una llum apagada.
//•.Encendre - la.
//•	Apagar - la.
//•	Consultar si està encesa.


#include <iostream>
using namespace std;

class Llum
{
private:
    bool encesa;

public:
    Llum()
    {
        encesa = false;
    }

    void encendre()
    {
        encesa = true;
    }

    void apagar()
    {
        encesa = false;
    }

    bool estaEncesa()
    {
        return encesa;
    }
};

int main()
{
    Llum llum;

    if (!llum.estaEncesa())
    {
        cout << "La llum esta apagada" << endl;
    }

    llum.encendre();

    if (llum.estaEncesa())
    {
        cout << "La llum esta encesa" << endl;
    }

    llum.apagar();

    if (!llum.estaEncesa())
    {
        cout << "La llum esta apagada" << endl;
    }

    return 0;
}