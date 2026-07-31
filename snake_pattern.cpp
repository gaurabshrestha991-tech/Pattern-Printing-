#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int rows = 4;
    int cols = 4;

    int nums = 1;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                cout << setw(3) << nums++;
            }
        } else {
            int temp = nums + cols - 1;

            for (int j = 0; j < cols; j++) {
                cout << setw(3) << temp--;
            }
            nums += cols;
        }
        cout << endl;
    }
    return 0;
}