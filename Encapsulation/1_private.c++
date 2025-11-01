#include <iostream>
using namespace std;

class Book
{
    private :
        int age;
        string name;
        int type;
    public :
    void add_valou(int i, string str , int x);
    void add(int i, string str, int x)
    {
        age = i;
        name = str;
        type = x;
    }
    void print()
    {
        cout << "name = "<< name << "\nage = " << age << "\ntype = " << type << endl;
    }
};

void Book :: add_valou(int i, string str , int x)
{
    age = i;
    type = x;
    name = str;
    cout << "name = "<< name << "\nage = " << age << "\ntype = " << type << endl;
}

int main()
{
    Book obj;
    obj.add_valou(17,"aya",22);
    cout << "\n==================\n";
    obj.add(10,"youssef",4);
    obj.print();
}