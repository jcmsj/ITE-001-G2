#include <iostream>
using namespace std;

int main() {
    int const STEP = 5;
    int const COLUMNS = 8;
    int n = -100;
    int i = 0;

   cout << "Using do while loop...\n";

    do {
        cout << n << "\t";

        if (i == (COLUMNS / 2) - 1) {
            n *=-1;
        } else {
            n += STEP;
        }

        i++;

    } while ( i < COLUMNS);

    return 0;
}