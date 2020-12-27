#include <iostream>
using namespace std;

int main() {

// plain Enum
enum Color1{ red, green, blue };
Color1 c1 = red;

switch(c1)
{
    case red :
        cout << "red" << endl; break;
    case green :
        cout << "green" << endl; break;
    case blue :
        cout << "blue" << endl; break;
}
/*
Difference 2:
int green = 100;
// This won't compile because green variable
has already been declared in the enum. This is the disadvantage
of a simple enum. This won't be an issue with enum class because
the objects there are assigned with class scope.
*/

enum class Color3 { red, green, blue, orange }; // gets compiled
/*
Difference 3:

enum Color4 {red, green, violet}; //This won't get compiled
*/

/////////////////////////////////////////////
// class Enum
enum class Color2 { red, green, blue };
Color2 c2 = Color2::red; //Difference 1: for class Enum, you always have to assign the object with scope

switch(c2)
{
    case Color2::red :
        cout << "red" << endl; break;
    case Color2::green :
        cout << "green" << endl; break;
    case Color2::blue :
        cout << "blue" << endl; break;
}


/*Difference 4
In simple enum, the values are implicitly assigned integer values to it.
Ex:
enum Color5{ red, green, blue };

red will be 0, green will be 1 and blue will be 2.

The same doesn't work for enum class Color5{ red, green, blue };

This is the reason, enum class were introduced.

*/

/*Difference 5:
enum Color8{ red, green, blue };
enum People { good, bad };

int main() {
if(red == good ) {
    cout << "True" << endl; //This will get compiled and print True
}

This shouldn't compile, but gets compiled and prints "True" as well.
*/


    return 0;
}
