#include <iostream>
using namespace std;

int main ()
{
    int rows = 3;
    int cols = 9;
    
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {

            if ((i == 1 && (j == 5 || j == 9)) || (i == 2 && (j == 3 || j == 6 || j == 8)) || (i == 3 && (j == 1 || j == 7))) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;

}