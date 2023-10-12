#include <iostream>

class Room {
private:
    int length;
    int breadth;
    int height;

public:
    Room(int l, int b, int h) : length(l), breadth(b), height(h) {}

    Room(const Room& other) : length(other.length), breadth(other.breadth), height(other.height) {}

    int calculateArea() {
        return 2 * (length + breadth) * height;
    }

    void updateDimensions(int l, int b, int h) {
        if (l != -1) {
            length = l;
        }
        if (b != -1) {
            breadth = (b == -1) ? breadth : (breadth - 10); 
        }
        if (h != -1) {
            height = h;
        }
    }
};

int main() {
    int l, b, h;
    std::cin >> l >> b >> h;

    Room r1(l, b, h);
    Room r2(r1); 

    int updatedBreadth;
    std::cin >> updatedBreadth;

    r2.updateDimensions(-1, updatedBreadth, -1);

    std::cout << "r1 area: " << r1.calculateArea() << std::endl;
    std::cout << "r2 area: " << r2.calculateArea() << std::endl;

    return 0;
}
