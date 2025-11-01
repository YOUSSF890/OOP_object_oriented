#include <iostream>
using namespace std;
class Box
{
    public :
        int id;
        int age;
        string name;
    void prinf(int i, string name_al , int x)
    {
        id = i;
        age = x;
        name = name_al;
    }


};

int main()
{
    Box obj;
    obj.prinf(10,"youssef",20);

    cout << "id = " << obj.id << "\nname = " << obj.name <<  "\nAGE = "<<obj.age << endl;
}