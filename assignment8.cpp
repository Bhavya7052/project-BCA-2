#include <iostream>
using namespace std;
int main (){
	 int number ,count = 0;
			
	 
	 cout<< "Input of the number is:)" << endl; 
	 cin>> number ;
	 
	 int sum = 0;
    cout << "Explanation :)))";
    for (int i = 1; i <= number; ++i) {
        int term_sum = 0;
        for (int j = 1; j <= i; ++j) {
            term_sum += j;
            cout << j;
            if (j < i) {
                cout << "+";
            }
        }
        cout << "";
        sum += term_sum;
}
	cout <<endl<< "Output of the number is :))) " << sum;

return 0;	
}