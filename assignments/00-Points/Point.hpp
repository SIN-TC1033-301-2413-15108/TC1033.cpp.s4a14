#pragma once

class Point {
public:
    Point();
    Point(double, double);
    ~Point();

    double getX() const;
    double getY() const;
    void setX(double);
    void setY(double);

    double distance(Point);

private:
    double x;
    double y;
};