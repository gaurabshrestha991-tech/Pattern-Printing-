#include <iostream>
using namespace std;

int main() {

    // Upper part
    for (int i = 1; i <= 2; i++) {

        for (int j = 1; j <= 2 - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i; j++)
            cout << "*";

        for (int j = 1; j <= 3 - 2 * i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower part
    for (int i = 5; i >= 1; i--) {

        for (int j = 1; j <= 6 - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}