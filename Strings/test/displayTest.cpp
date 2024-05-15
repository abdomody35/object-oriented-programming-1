#include <iostream>
#include "..\Strings.cpp"
using namespace std;
 int main() { 
    /*
    test case 1
    input : ABCD (c string) 
    expected output : ABCD (c string)
    */
    String str1 ("ABCD");
    str1.display();

    /*
    test case 2
    input : empty
    expected output : Empty string
    */
    String str2 ;
    str2.display();
 }