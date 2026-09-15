#include <iostream>

using namespace std;

int main()
{
    int edad;
    bool vip;

    cin >> edad >> vip;

    cout << (edad >= 18 && vip) << endl;

    return 0;
}
