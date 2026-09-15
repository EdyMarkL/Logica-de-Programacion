#include <iostream>

using namespace std;

int main()
{
    string Nombre1, Nombre2;
    int Puntos1, Puntos2;

    cin >> Nombre1 >> Puntos1;
    cin >> Nombre2 >> Puntos2;

    if (Puntos1 > Puntos2)
    {
        cout << Nombre1 << endl;
    }
    
    else if (Puntos2 > Puntos1)
    {
        cout << Nombre2 << endl;
    }

    return 0;
}
