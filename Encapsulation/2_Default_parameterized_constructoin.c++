#include <iostream>
using namespace std;

class Box
{
    private:
        int a;
        int b;
        int c;
    public :
        Box() // Default_constructoin
        {
            cout << "youssef lagzouli \n";
        }
        Box(int x, int y) // parameterized_construction
        {
            a = x;
            b = y;
            cout << "a = " << a << "\nb = " << b << endl;
        }
        Box(int x, int y,int t)// parameterized_construction
        {
            a = x;
            b = y;
            c = t;
            cout << "a = " << a << "\nb = " << b << "\nc = " << c << endl;
        }


};

int main()
{
    cout << "============================\n";
    Box obj1;
    cout << "============================\n";
    Box obj3(10, 20);
    cout << "============================\n";
    Box obj4(10,20,30);
}