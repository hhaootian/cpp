#include <iostream>
using namespace std;

int func(int a, int b, int c = 10);


int func(int a, int b, int c) {
    return a + b + c;
}

int func(int a) {
    return a * 2;
}

int main() {
    cout << func(1, 2, 3) << endl;
    cout << func(10) << endl;
    return 0;
}

