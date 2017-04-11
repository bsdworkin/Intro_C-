
#include "Rectangle.cpp"
#include "Circle.cpp"
#include <iostream>

int main() {
    Shape* newRectangle = new Rectangle(5, 10);
    std::cout << "Area of Rectangle: " << newRectangle->getArea() << std::endl;


    Shape* newCircle = new Circle(4);
    std::cout << "Area of Circle: " << newCircle->getArea() << std::endl;

  
    delete newRectangle;
    delete newCircle;
    newRectangle = 0;
    newCircle = 0;
    return 0;
}
