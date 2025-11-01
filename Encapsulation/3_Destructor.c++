#include <iostream>
using namespace std;

class Box
{
    private:
        int *a;
        int *b;
    public :
        Box()
        {
            *a = 10;
            *b = 20;
        }
        ~Box() // Destructor
        {
            delete a;
            delete b;
            cout << "Deleted\n";
        }
        void ty()
        {
            cout << "a = " << *a << "\nb = " << *b << endl;
        }


};

int main()
{
    cout << "============================\n";
    Box obj1;
    obj1.~Box(); // Deleted
    obj1.ty();
    cout << "============================\n";
    // obj1.ty();
}//Deleted