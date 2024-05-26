#include <iostream>
#include "..\Strings.cpp"
using namespace std;
int main() {


/*
    Test Case 1: Concatenate a string to an empty string
    Input: cstr = "Mahmoud"
    Expected Output: Mahmoud
    */
    String str1;
    
    str1.concatenate("Mahmoud");
    str1.display();

    /*
    Test Case 2: Concatenate a string to an existing string
    Input: cstr = "metwaly"
    Expected Output: Mahmoudmetwaly
    */
    String str2("Mahmoud");
    str2.concatenate("metwaly");
    str2.display();

    /*
    Test Case 3: Concatenate a null string to an existing string
    Input: cstr = nullptr
    Expected Output: Concatenating an empty stringMahmoud
    */
    String str3("Mahmoud");
    str3.concatenate(nullptr);
    str3.display();



    /*
    Test Case 4: Concatenate an empty string to an existing string
    Input: cstr = ("")
    Expected Output: Mahmoud
    */


    String str4("Mahmoud");
    str4.concatenate("");
    str4.display();


}