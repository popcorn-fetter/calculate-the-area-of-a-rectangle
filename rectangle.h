// rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle(double l, double w);
    double calculateArea() const;

private:
    double length;
    double width;
};

#endif // RECTANGLE_H
