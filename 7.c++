// Write a program of Addition, Subtraction, Division, Multiplication using
// constructor.

#include <iostream>

using namespace std;

class demo

{
   
   public:

   demo (int a,int b)
   {
      cout << " the sum of a and b is :"<< a + b << endl;
   }

   demo ( float b,float d, float c)

   {

     cout<< " the substraction b and d and c is :"<< b-d-c <<endl;
   }

   demo (int c, int d,int e,int f)
   {
      cout<<" the divion of c and d is :"<< c/d/e/f << endl;
   }

   demo (int m,int n,int o ,int p,int q)
   {
      cout<< " the multipliction of a and b  :" << m*n*o*p*q<< endl;
   }
};

int main ()

{
    demo (10,20);

    demo (10.20,50.30,26.21);

    demo (200,2,2,2);

    demo (2,3,4,5,6);
}