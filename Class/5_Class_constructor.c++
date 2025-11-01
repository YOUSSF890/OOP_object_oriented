#include <iostream>
using namespace std;
class Box
{
    public :
        int id;
        int age;
        string name;

    Box()
    {
        cout << "I am a constructor \n";
    }
    void prinf(int i, string name_al , int x)
    {
        id = i;
        age = x;
        name = name_al;
    }


};

int main()
{
    Box obj0;
    Box obj1;

    cout << "\n===================\n";

    obj0.prinf(10,"youssef",20);
    cout << "\nid = " << obj0.id << "\nname = " << obj0.name <<  "\nAGE = "<<obj0.age << endl;
}