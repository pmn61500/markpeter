#include <iostream>
#include <cmath>

template <typename T>
class PointType {
private:
    T x;
    T y;

public:
    // Default constructor
    PointType() : x(0), y(0) {}

    // Parameterized constructor
    PointType(T x, T y) : x(x), y(y) {}

    // Setters
    void setX(T x) {
        this->x = x;
    }

    void setY(T y) {
        this->y = y;
    }

    // Getters
    T getX() const {
        return x;
    }

    T getY() const {
        return y;
    }

    // Function to calculate distance to another point
    double distanceTo(const PointType<T>& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }

    // Overload the subtraction operator to return the distance between two points
    double operator-(const PointType<T>& other) const {
        return distanceTo(other);
    }
};

int main() {
    // Example usage
    PointType<int> p1(3, 4);
    PointType<int> p2(6, 8);

    std::cout << "Distance between p1 and p2: " << p1 - p2 << std::endl;

    return 0;
}