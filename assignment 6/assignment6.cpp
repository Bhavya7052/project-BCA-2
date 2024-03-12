#include <iostream>
using namespace std;

class sample {
public:
    int Compute(int (sample::*func)(int), int n) {
        return (this->*func)(n);
    }

    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char *argv[]) {
    sample obj;

    int factorial = obj.Compute(&sample::findFactorial, 5);
    cout << "Factorial: " << factorial << endl;

    int square = obj.Compute(&sample::findSquare, 4);
    cout << "Square: " << square << endl;

    int cube = obj.Compute(&sample::findCube, 3);
    cout << "Cube: " << cube << endl;

    return 0;
}
