#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

class Calculator {
public:
    
    int floor(double number) {
        return static_cast<int>(number);
            }

    int add(int a, int b) {
        return a + b;
    }

    double max1(double a, double b) {
        return (a > b) ? a : b;
    }

    bool find1(const string& str, char ch) {
        return str.find(ch) != string::npos; 
    }

    int max2(int arr[], int size) {
        return *max_element(arr, arr + size); 
    }
};

int main() {

    Calculator calc;


    double num = 3.67;
    cout << "Floor of " << num << " is: " << calc.floor(num) << endl;


    int sum = calc.add(5, 10);
    cout << "Sum of 5 and 10 is: " << sum << endl;


    double a = 4.5, b = 2.3;
    cout << "Max of " << a << " and " << b << " is: " << calc.max1(a, b) << endl;


    string str = "Hello, world!";
    char ch = 'w';
    cout << "Is '" << ch << "' in string? " << (calc.find1(str, ch) ? "Yes" : "No") << endl;


    int arr[] = {1, 3, 7, 0, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max element in array is: " << calc.max2(arr, size) << endl;

    return 0;
}
