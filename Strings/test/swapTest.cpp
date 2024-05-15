#include <iostream>
#include "..\Strings.cpp"
using namespace std;
int main() {
    /*
    test case 1 : str1 is Mahmoud and str2 is metwaly
    input : no input (function should swap the strings)
    expected output : metwaly(\n)Mahmoud 
    */

    String str1("Mahmoud"), str2("metwaly");
    str1.swap(str2);
    str1.display();
    str2.display();

    /*
    test case 2 : str1 is Mahmoud and str2 is empty
    input : no input (function should swap the strings)
    expected output : metwaly(\n)Mahmoud 
    */
   String str3("Mahmoud"), str4;
    str3.swap(str4);
    str3.display();
    str4.display();
}