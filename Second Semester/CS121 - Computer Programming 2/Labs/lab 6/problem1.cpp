/*
+---------------------------------+
|           Rectangle             |
+---------------------------------+
| - width: double                 |
| - height: double                |
+---------------------------------+
| + Rectangle()                   |
| + Rectangle(double, double)     |
| + getWidth(): double            |
| + setWidth(double): void        |
| + getHeight(): double           |
| + setHeight(double): void       |
| + getArea(): double             |
| + getPerimeter(): double        |
+---------------------------------+
*/

#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() {                               // naay duha ka constructor: default ug parameterized constructor. 
        width = 1.0;                            // sa default, gi-set na ang width ug height to 1.0.
        height = 1.0;
    }

    Rectangle(double width, double height) {    // sa parameterized, maoy ga allow para mag create ug dimensions sa rectangle.
        this->width = width;
        this->height = height;
    }

    double getWidth() const {                   // sa getter function, gina-retrieve ang values sa width ug height.
        return width;
    }

    void setWidth(double width) {
        this->width = width;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double height) {             // sa setter function, mao ang ga change ato nga values.
        this->height = height;
    }

    double getArea() const {                    // ginamultiply ang width ug height para makuha ang value sa Area.
        return width * height;
    }

    double getPerimeter() const {               // add twice the width ug height para ma calculate ang perimeter.
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect1(4.0, 40.0);                 // assigning specific width ug height values.
    Rectangle rect2;

    std::cout << "Rectangle 1:" << std::endl;
    std::cout << "Width: " << rect1.getWidth() << std::endl;
    std::cout << "Height: " << rect1.getHeight() << std::endl;
    std::cout << "Area: " << rect1.getArea() << std::endl;
    std::cout << "Perimeter: " << rect1.getPerimeter() << std::endl;

    std::cout << "\nRectangle 2:" << std::endl;
    std::cout << "Width: " << rect2.getWidth() << std::endl;
    std::cout << "Height: " << rect2.getHeight() << std::endl;
    std::cout << "Area: " << rect2.getArea() << std::endl;
    std::cout << "Perimeter: " << rect2.getPerimeter() << std::endl;

    return 0;
}