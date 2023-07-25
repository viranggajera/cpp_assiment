/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/


#include <iostream>
using namespace std;

class MathOperations 
{
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        }
        else {
            cout << "Error: Division by zero" << endl;
            return 0.0;
        }
    }
};

int main() 

{
    MathOperations math;

    
    cout << "Addition:" << endl;
    cout << "Result (2 + 3) = " << math.add(2, 3) << endl;
    cout << "Result (2 + 3 + 4) = " << math.add(2, 3, 4) << endl;

    
    cout << "\nSubtraction:" << endl;
    cout << "Result (5 - 3) = " << math.subtract(5, 3) << endl;

    
    cout << "\nMultiplication:" << endl;
    cout << "Result (2 * 4) = " << math.multiply(2, 4) << endl;

    
    cout << "\nDivision:" << endl;
    cout << "Result (10 / 2) = " << math.divide(10, 2) << endl;
    cout << "Result (5 / 0) = " << math.divide(5, 0) << endl;

    
}