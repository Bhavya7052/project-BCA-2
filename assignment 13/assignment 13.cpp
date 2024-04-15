#include <iostream>

class ArrayComparator {
private:
    int array1[10]; 
    int array2[10];
public:
    
    ArrayComparator(int arr1[], int arr2[]) {
        for (int i = 0; i < 10; ++i) {
            array1[i] = arr1[i];
            array2[i] = arr2[i];
        }
    }

   
    void findHigherSumArray() {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 10; ++i) {
            sum1 += array1[i];
            sum2 += array2[i];
        }
        if (sum1 > sum2) {
            std::cout << "Array 1 has a higher sum of elements: " << sum1 << std::endl;
        } else if (sum2 > sum1) {
            std::cout << "Array 2 has a higher sum of elements: " << sum2 << std::endl;
        } else {
            std::cout << "Both arrays have the same sum of elements:))) " << sum1 << std::endl;
        }
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int arr2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    ArrayComparator comparator(arr1, arr2);
    comparator.findHigherSumArray();

    return 0;
}