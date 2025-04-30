#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
        double width;
        double length;

    public:
        void setWidth(double w);
        void setLength(double len);
        // get() should never change anything, constants stop that
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

// implementation of class functions
void Rectangle::setWidth(double w) {
    width = w;
}
void Rectangle::setLength(double len) {
    length = len;
}

double Rectangle::getWidth() const {
    return width;
}
double Rectangle::getLength() const {
    return length;
}
double Rectangle::getArea() const {
    double area = width * length;
    return area;
}

#endif