#include <iostream>
using namespace std;

int main() {
    // int stores whole numbers (no decimals)
    int myNum = 13;

    // you can declare multiple variables of the same type on one line
    int x = 23, y = 44;

    // variables can store the result of expressions
    int sum = x + y;

    cout << "Hello, C++\n";
    cout << "This is Zifan\n";

    // you can do math directly inside cout
    cout << 3 + 5 << "\n";

    // multiple couts in a row print on the same line without \n
    cout << 6;
    cout << 7 << "\n";

    // you can mix strings and variables in one cout using <<
    cout << "I am " << myNum << " years old\n";

    // you can change a variable's value after declaring it
    myNum = 45;
    cout << myNum << "\n";

    // sum holds 23 + 44 = 67
    cout << sum << "\n";

    return 0;
}
