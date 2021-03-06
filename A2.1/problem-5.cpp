#include <iostream>
using namespace std;

// Input validation
double require_double(string text) {
    double num;
    for(;;) {
        cout << text;
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.sync();
            cin.ignore('\n');
            continue;
        }
        return num;
    }
}

void show_highest(int n) {
    cout << n << " is the highest among the input numbers...\n\n";
}

void show_tie(string rank1, string rank2) {
    cout << "The " << rank1 << " and " << rank2 << " inputs are both the highest numbers\n\n";
}

int main() {
    int a,b,c;

    a = require_double("Enter the first number: ");
    b = require_double("Enter the second number: ");
    c = require_double("Enter the last number: ");

    cout << "Input numbers are " << a << ", " << b << ", and " << c << endl;

    if (a == b) {
        if (b == c) {
            cout << "The inputs have the same values";
        }
        else if (b > c) {
            show_tie("first", "second");
        } else {
            show_highest(c);
        }
    } 
    else if (a == c) {
        if (a > b) {
            show_tie("first", "last");
        } else {
            show_highest(b);
        }
    } 
    else if (b == c){
        if (b > a) {
            show_tie("second", "last");
        } else {
            show_highest(a);
        }
    }
    else if (a > b) {
        if (a > c) {
            show_highest(a);
        } else {
            show_highest(c);
        }
    } 
    else if (b > c) {
        show_highest(b);
    } else {
        show_highest(c);
    }

    return 0;
}