#include<iostream>
using namespace std;

class Box {
private:
    int l, b, h;

public:
    // Default constructor
    Box() : l(0), b(0), h(0) {}

    // Parameterized constructor
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

    // Copy constructor
    Box(const Box& s) {
        l = s.l;
        b = s.b;
        h = s.h;
    }

    // Getters
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }

    // Calculate volume
    long long CalculateVolume() {
        return static_cast<long long>(l) * b * h;
    }

    // Overload '<' operator
    bool operator<(const Box& other) {
        if (l < other.l) return true;
        if (l == other.l && b < other.b) return true;
        if (l == other.l && b == other.b && h < other.h) return true;
        return false;
    }

    // Overload '<<' operator
    friend ostream& operator<<(ostream& out, const Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

int main() {
    Box b1;
    Box b2(2, 3, 4);

    cout << b2.getLength() << endl;
    cout << b2.getBreadth() << endl;
    cout << b2.getHeight() << endl;

    cout << b2.CalculateVolume() << endl;

    bool x = (b1 < b2);
    cout << (x ? "True" : "False") << endl;

    cout << b2 << endl;

    return 0;
}
