#include <iostream>
#include <string>
using namespace std;

template <class type>
type F1(type list[], int size) {
    type x = list[0];
    type y = list[size - 1];
    for (int j = 1; j < size - 1; j++) {
        if (x < list[j])
            x = list[j];
        if (y > list[size - 1 - j])
            y = list[size - 1 - j];
    }
    cout << x << endl;
    cout << y << endl;
    return y + x;
}

int main() {
    double sales[7] = { 600.50, 350.00, 56.10, 278.90, 330.00 };
    string names[] = { "Bob", "Lizzy", "Becky", "Max", "Sam", "Kyle" };

    cout << F1(sales, 3) << endl;
    cout << F1(names, 4) << endl;

    return 0;
}
