#include <iostream>
#include "..\Strings.cpp"
using namespace std;
int main() {
    /*
    test case 1 : the string is Mahmoud
    input : no input (function should reverse the string)
    expected output : duomham
    */

    String str1("Mahmoud");
    str1.reverse();
    str1.display();
}