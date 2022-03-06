#include <iostream>

static const double PI = 3.14;

class circle {
public:
    circle(){}

    circle(int radius) {
        this->radius = radius;
    }

    int radius;

    double perimeter() {
        return 2 * PI * radius;
    }

    ~circle(){
        std::cout << radius << " exit" << std::endl;
    }
};

int main() {
    circle c1 = circle(10);
    std::cout << c1.radius << std::endl;
    std::cout << c1.perimeter() << std::endl;

    circle * c2 = new circle(100);
    std::cout << c2->radius << std::endl;
    std::cout << c2->perimeter() << std::endl;
    delete c2;

    return 0;
}
