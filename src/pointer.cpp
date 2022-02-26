#include <iostream>
using namespace std;

void swap(int * p1, int * p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int num1 = 0;
    int num2 = 0;

	const int * p1 = &num1;
    int * const p2 = &num2;

	cout << p1 << endl;
	cout << *p1 << endl;
    cout << p2 << endl;
    cout << *p2 << endl;

    p1 = &num2;
    *p2 = 10;

    cout << p1 << endl;
    cout << *p1 << endl;
    cout << p2 << endl;
    cout << *p2 << endl;
    
    cout << num1 << "  " << num2 << endl;
    swap(&num1, &num2);
    cout << num1 << "  " << num2 << endl;

    return 0;
}
