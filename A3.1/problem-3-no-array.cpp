#include <iostream>
using namespace std;

int arithmetic_series(int method, int start_val, int iterations, int step) {
    int i = 0;

    // Based on the method 
    switch (method) {
        case 0: // For loop
            for (i = 0; i < iterations; i++)
            {
                cout << start_val + i * step << "\t";
            }
            break;
        case 1: // while loop;      
            while (i < iterations)
            {
                cout << start_val + i++ * step << "\t";
            }
            break;
        case 2: // do while loop
            do {
                cout << start_val + i++ * step << "\t";
            } while (i < iterations);
            break;
    }

    return start_val + (i - 1) * step;
}

int main() {
    /* 3.	Create a program that will display the following series: 
       (Prepare 3 versions of source codes using for loop, while loop, do while loop)

    (1) Print half of the integers in a column using an arithmetic series.
        Note:
        (a) The number of elements are based on the ITERATIONS constant.
        (b) The common difference is based on the constant STEP.
        (d) The final value of the element is given by adding the start_value parameter and the product of the current iteration i and common difference STEP.
    (2) Repeat (1) to print the other half of the column but set the start_value as the positive value of the last integer generated by the previous sequence.
    (3) Print a new line
    (4) Repeat (1) to (3) for each of the three iterative control structures.
    */
    int const STEP = 5;
    int const ITERATIONS = 4;
    int last_val;
    for (int i = 0; i < 3; i++) {
        last_val = arithmetic_series(i, -100, ITERATIONS, STEP);
        arithmetic_series(i, last_val * -1, ITERATIONS, STEP);
        cout << endl;
    }
    return 0;
}