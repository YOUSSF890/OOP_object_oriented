#include <iostream>
using namespace std;

class Box
{
    private:
        int a;
        int b;
        int c;
    public :
        Box(int x, int y) // Default_constructoin
        {
            a = x;
            b = y;
        }
        int sum(Box obj1,Box obj2)
        {
            return (obj1.a + obj2.b);
        }
        void mm();
        friend void stm(Box obj1);//friend_function


};

void Box :: mm()
{
    cout << a << endl;
}

void stm (Box obj1)
{
    cout << obj1.a << endl;
}

int main()
{
    Box obj1(100,200);
    Box obj2(10,20);
    cout << obj1.sum(obj1, obj2) << endl;
    cout << "++++++++++++++++++\n";
    obj1.mm();
    stm(obj1);
}