#include <iostream>

class ClassA; 

class ClassB {
private:
    int numB;
public:
    ClassB(int n) : numB(n) {}
    friend int sumAB(const ClassA& a, const ClassB& b);
};

class ClassA {
private:
    int numA;
public:
    ClassA(int n) : numA(n) {}
    friend int sumAB(const ClassA& a, const ClassB& b);
};


int sumAB(const ClassA& a, const ClassB& b) {
    return a.numA + b.numB;
}

int main() {
    ClassA objectA(56);
    ClassB objectB(24);

    int sum = sumAB(objectA, objectB);
    std::cout << "Sum of students of Class A and Class B are :)) - " << sum << std::endl;

    return 0;
}