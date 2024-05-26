#include <iostream>
#include "..\Strings.cpp"
using namespace std;
int main() {

/*
    Test Case 1: Insert a string object at index 0
    Input: String object = "Mahmoud", start = 0
    Expected Output: metwalyMahmoud
    */
    String str6("Mahmoud");
    String Insert("metwaly");
    str6.insert(Insert, 0);
    str6.display();

    /*
    Test Case 2: Insert a string object at index 3
    Input: String object = " metwaly", start = 3
    Expected Output: Mah metwalymoud

    */
    String str7("Mahmoud");
    String Insert2(" metwaly");
    str7.insert(Insert2, 3);
    str7.display();

    /*
    Test Case 3: Insert a string object at the end of the string
    Input: String object = "!", start = length of string
    Expected Output:  Mahmoud
    */
    String str8("Mahmoud");
    String Insert3("!");
    str8.insert(Insert3, str7.getLength());
    str8.display();



    /*
    Test Case 4: Insert a string object at the end of the string
    Input: String object = "metwaly", start = -3
    Expected Output:  
    */
    String str9("Mahmoud");
    String Insert4("metwaly");
    str9.insert(Insert4, -3);
    str9.display();



    /*
    Test Case 5: Insert a string object at the end of the string
    Input: String object = "", start = 5
    Expected Output:  
    */
    String str10("Mahmoud");
    String Insert5("");
    str10.insert(Insert5, 5);
    str10.display();

}

    


