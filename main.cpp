#include "std_lib_inc.h"

int main()
{
    int zahl1=0;
    int zahl2=0;
    cout << "Geben Sie zwei ganze Zahlen ein (oder 'q', um zu beenden):\n";

    while (cin) {
        cin >> zahl1 >> zahl2;

        if (!cin >> zahl1)
        {
            break; // Schleife beenden, wenn keine Zahl eingegeben wird
        }

        if (!cin >> zahl2)
        {
            break; // Schleife beenden, wenn keine Zahl eingegeben wird
        }

        cout << "Eingegebene Zahlen: " << zahl1 << " und " << zahl2 << "\n";
    }

    cout << "Programm beendet.\n";
    return 0;
}


