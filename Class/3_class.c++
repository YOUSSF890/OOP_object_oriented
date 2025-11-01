#include <iostream>
using namespace std;


class Game
{
    public:
        string  name_game;
        int count_game;
        int game(Game x)
        {
            cout << "name game = " << x.name_game << endl;
            return (x.count_game);
        }

};

int test(Game x)
{
    cout << "test name game = " << x.name_game << endl;
    cout << "great youssef\n";
    cout << x.game(x) + 5 << endl;
    return (x.count_game);
}

int main()
{
    Game obj1;
    Game obj2;

    obj1.name_game = "cub3D";
    obj1.count_game = 15;

    cout << obj1.game(obj2) << endl;

    cout << "\n==============================\n";

    cout << obj1.game(obj1) << endl;
    cout << "\n================================\n";

    cout << test(obj1) << endl;

    return (1);
}