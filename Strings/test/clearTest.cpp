#include <iostream>
#include "..\Strings.cpp"
using namespace std;
int main() {
    /*
    test case 1 : the string is Mahmoud
    input : no input (function should delete the string)
    expected output : Empty string (check display tests to ensure correctness)
    */
    String str1("Mahmoud");
    str1.clear();
    str1.display();
}


