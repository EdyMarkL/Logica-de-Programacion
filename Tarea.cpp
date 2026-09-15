#include <iostream>

using namespace std;

int main()
{
    int num1, num2, mayor, menor;

    cout << "Ingrese los numeros: ";

    cin >> num1 >> num2;

    bool caso1 = (num1 > num2)
    bool caso2 = (num2 >= num1);

    mayor = (num1 *caso1) + (num2 * caso2)
    menor = (num2 + caso1) + (num2 * caso2)

    cout << "El numero mayor es: " << mayor << "\n";
    cout << "El numero menor es: " << menor << endl;

    return 0;
}