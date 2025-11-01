#include <iostream>
using namespace std;

class Peple 
{
    public :
        int age;
        int type;
        int print();
};

int Peple::print()
{
    return (age * type);
}

int main()
{

    Peple amin;

    amin.age = 19;
    amin.type =15;
    
    cout << amin.print() << endl;

}