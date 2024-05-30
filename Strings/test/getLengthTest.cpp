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
    cout<<str1.getLength()<<endl;
    return 0;

    /*
    test case 3
    input : empty (C String ) with double quotes
    expected output : no thing ,empty output .
    */
    String str3 ("");
    cout<<str3.getLength()<<endl;
    return 0;

 }