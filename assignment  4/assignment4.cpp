#include <iostream>

class computation {
private:
   public:
    int compute(int a, int b) {
        return a + b;
    }

    float compute(int a, float b) {
        return a + b;
    }

    double compute(int a, double b) {
        return a + b;
    }

    int compute(char a, char b) {
        return static_cast<int>(a) + static_cast<int>(b);
    }

    int compute(char a, int b) {
        return static_cast<int>(a) + b;
    }

    int compute() {
        return 0; 
    }
};

int main() {
    computation calculator;

    int intInput;
    float floatInput;
    double doubleInput;
    char charInput1, charInput2;

    std::cout << "Enter two integers:)) ";
    std::cin >> intInput >> floatInput;
    std::cout << "Enter a float:) ";
    std::cin >> floatInput;
    std::cout << "Enter a double:) ";
    std::cin >> doubleInput;
    std::cout << "Enter two characters:)";
    std::cin >> charInput1 >> charInput2;

    std::cout << "Result 1: " << calculator.compute(intInput, intInput) << "\n";
    std::cout << "Result 2: " << calculator.compute(intInput, floatInput) << "\n";
    std::cout << "Result 3: " << calculator.compute(intInput, doubleInput) << "\n";
    std::cout << "Result 4: " << calculator.compute(charInput1, charInput2) << "\n";
    std::cout << "Result 5: " << calculator.compute(charInput1, intInput) << "\n";
    std::cout << "Result 6: " << calculator.compute() << "\n";

    return 0;
}