//when to use enums in cpp
// Use Enum when you are dealing with some limited set of values.
// Example: Your function can take one value out of set of values.
// Don't use enums for integer values (There can be large no of values to be represented
#include <iostream>
using namespace std;
enum class Color {red, green, blue,};

void fun(Color c) {
    switch(c) {
    case Color::red :
        cout << "Red" << endl; break;
    case Color::green :
        cout << "Green" << endl; break;
    case Color::blue :
        cout << "Blue" << endl; break;
    default:
        cout << "Hey I am default" << endl; break;
    }
}
int main() {
    Color c = Color::red;
    fun(c);
    return 0;
}
