#include <iostream>
#include "..\Strings.cpp"
using namespace std;                        //void concatenate(const String&);
/*
      here in this function ther is an error when i give a value  like this (String str7("21140092"), str8; ) he gives me output (Concatenating an empty string) 
      but when i give  (String str7("21140092"), str8 = "";) h giv me no output so who did the code do not make tste for all empty, null string








*/
int main() {
    /*
    Test Case 1: 
    Input: str1 = "Mahmoud", str2 = "mwtwaly"
    Expected Output: "Mahmoudmetwaly"
    */

    String str1("Mahmoud"), str2("metwaly");
    str1.concatenate(str2);
    
    str1.display();  

    /*
    Test Case 2: 
    Input: str3 = "Mahmoud ", str4 = "metwaly"
    Expected Output: "Mahmoud metwaly"
    */
    String str3("Mahmoud"), str4("metwaly");
    str3.concatenate(str4);
    str3.display();  

    /*
    Test Case 3: 
    Input: str5 = "", str6 = "Code"
    Expected Output: "Mahmoud"
    */
    String str5, str6("Mahmoud");
    str5.concatenate(str6);
    str5.display();  

    /*
    Test Case 4: 
    Input: str7 = "21140092", str8 = ""
    Expected Output: "21140092"
    */
    String str7("21140092"), str8;
    str7.concatenate(str8);
}
