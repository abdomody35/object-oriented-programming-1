#include <iostream>
#include "..\Strings.cpp"
using namespace std;
 int main() { 
    /*
    test case 1 string is "ABCD"
    input : 1
    expected output : A
    */
    String str1 ("ABCD");
    str1.erase(1);
    str1.display();
    
    /*
    test case 2 string is "ABCD"
    input : 1, 3 
    expected output : AD
    */
    String str2 ("ABCD");
    str2.erase(1, 3);
    str2.display();

     /*
    test case 3 string is "ABCD"
    input : -1
    expected output : Invalid erase indicesABCD
    */
    String str3 ("ABCD");
    str3.erase(-1);
    str3.display();
    
    /*
    test case 4 string is "ABCD"
    input : 1, -3 
    expected output : Invalid erase indicesABCD
    */
    String str4 ("ABCD");
    str4.erase(1, -3);
    str4.display();

    /*
    test case 5 string is "ABCD"
    input : -1, 3 
    expected output : Invalid erase indicesABCD
    */
    String str5 ("ABCD");
    str5.erase(-1, 3);
    str5.display();

    /*
    test case 6 string is "ABCD"
    input : -1, -3 
    expected output : Invalid erase indicesABCD
    */
    String str6 ("ABCD");
    str6.erase(-1, -3);
    str6.display();

 }