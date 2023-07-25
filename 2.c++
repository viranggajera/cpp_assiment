/*Assume that the test results of a batch ofstudents are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marksobtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/


#include <iostream>

using namespace std;

class students
{
   public:

   int roll_number;

   void rollnumber ()
   {
      cout<< " enter a student roll number : ";

      cin >> roll_number;
   }
};

class test : public students

{
   public:

   int sub1;
   int sub2;

   void marks()

   {
      cout<<" enter a marks for subjecxt 1 :";

      cin >> sub1;

      cout <<" enter a marks for subject 2 :";

      cin>> roll_number;
   }
};

class result : public test

{
   public:

   int total;

   void total_marks()
   {
      total = sub1 + sub2;

   }

   void display ()
   {
      cout << " student roll no is :"<< roll_number << endl;

      cout << " sub 1 marks :"<< sub1 << endl;

      cout << " sub 2 marks :"<< sub2 <<endl;

      cout<< " total marks is :"<< total << endl;
   }
};


int main ()

{
   result obj;
   obj.rollnumber();
   obj.marks();
   obj.total_marks();
   obj.display();
}