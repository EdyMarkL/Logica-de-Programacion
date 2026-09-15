#include <iostream>

using namespace std;

int main()
{
    int Ganancias, Perdidas;

    cin >> Ganancias >> Perdidas;

    if (Ganancias > Perdidas)
    {
        cout << "El negocio si va a jalar" << "\n" << Ganancias - Perdidas << endl;
    }

    else 
    {
        cout << "Dejalo ya esta muerto" << "\n" << Perdidas - Ganancias << endl;
    }

    return 0; 
}
