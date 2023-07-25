/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include <iostream>

using namespace std;

class cricketer 
{
    public:
    
    string batsman_name;
    int total_runs;
    int total_match_played;
    int average_runs;
    int best_performance;

    void information()
    {
        cout<<"enter batsman name "<<endl;
        cin>>batsman_name;

        cout<<"enter batsman total runs"<<endl;
        cin>>total_runs;
    
        cout<<"enter batsman average_runs"<<endl;
        cin>>average_runs;

        cout<<"enter batsman best performance"<<endl;
        cin>>best_performance;

    
    }

};

    class batsman1 :  public cricketer

 {
    public:

    batsman1 average ()

    {
        average_runs = total_runs/ total_match_played;
    }

    batsman1 display()
    {
        cout<<"batsman name is:"<<batsman_name<<endl;


        cout<<"batsman best performance is :"<<best_performance<<endl;

        cout<<"batsman average is : "<< average_runs<<endl;
    }

 };

 int main()

 {
    batsman1 obj;
    obj.information();
    obj.display();
    obj.average();
 }