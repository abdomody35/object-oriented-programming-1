#include <iostream>
#include "..\Strings.cpp"
using namespace std;
 int main() { 
    /*
    test case 1
    input : ABCD (c string) and call the element number 2 in the string .
    expected output : C .
    */
    String str1 ("ABCD");
    cout<<str1.at(2)<<endl;
    return 0;

    /*
    test case 1
    input : ABCD (c string) and call element number 5 in the string .
    expected output : no thing , because we don't have an element number 5 in the string.
    */
    String str2 ("ABCD");
    cout<<str2.at(5)<<endl;

    /*
    test case 1
    input : ABCD (c string) and call element number -2 in the string .
    expected output : no thing , because we don't have an element number -2 in the string.
    */
    String str3 ("ABCD");
    cout<<str3.at(-2)<<endl;
    return 0;
 }