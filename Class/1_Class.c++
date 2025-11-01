#include <iostream>
using namespace std;

class Peple 
{
    public :
        void print() // Member Function
        {
            cout << "age = "<< age << "\n type = " << type<< endl; 
        }
        int age;
        string type;
};

int main()
{
    Peple youssef;
    Peple amin;

    youssef.age = 20;
    amin.age = 19;

    amin.type ="man";
    
    amin.print();
    cout << "yousssef = " << youssef.age <<"\namin = " << amin.age << endl;


}