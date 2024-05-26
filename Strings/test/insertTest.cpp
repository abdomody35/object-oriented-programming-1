#include <iostream>
#include "..\Strings.cpp"
using namespace std;
int main() {
    
     /*
    Test Case 1: 
    Input: cstr = "metwaly", start = 0
    Expected Output: metwalyMahmoud

    */

    String str1("Mahmoud");
    str1.insert("metwaly", 0);
    str1.display();

    /*
    Test Case 2: 
    Input: cstr = " metwaly", start = 3
    Expected Output: Mah metwalymoud

    */
    String str2("Mahmoud");
    str2.insert(" metwaly", 3);
    str2.display();

    /*
    Test Case 3: 
    Input: cstr = "!", start = length of string
    Expected Output: Mahmoud!
    */
    String str3("Mahmoud");
    str3.insert("!", str3.getLength());
    str3.display();

    /*
    Test Case 4: 
    Input: cstr = "", start = 5
    Expected Output: Mahmoud!
    */

    String str4("Mahmoud");
    str4.insert("", 5);
    str4.display();

/*
    Test Case 5: 
    Input: cstr = "metwaly", start = -2
    Expected Output: No output
    */


    String str5("Mahmoud");
    str5.insert("metwaly", -2);
    str5.display();

    




    

    return 0;
    






}