#include<iostream>
using namespace std;

class String{
    public:
        String();
        String(const char*);
        String(const String&);
        ~String();
        void assign(const char*);
        void assign(const String&);
        void concatenate(const char*);
        void concatenate(const String&);
        void insert(const char*, const int);
        void insert(const String&, const int);
        void erase(const int, int = 0);
        void clear();
        void reverse();
        char at(const int) const;
        int getLength() const;
        void display() const;
        void copy(const char*, const int = 0, int = 0);
        void copy(const int, const int, const char*);
        void copy(const String&, const int = 0, int = 0);
        void copy(const int, const int, const String&);
        String substring(const int = 0, int = 0) const;
        String find(const char) const;
        String find(const char*) const;
        String find(const String&) const;
        bool compare(const char*) const;
        bool compare(const String&) const;
        void swap(String&);
    private:
        int length(const char*) const;
        int length(const String&) const;
        char * string;
};

int main() {
    char arr[25];
    cout << "Enter a c string : ";
    cin >> arr;
    cout << "The length of the string is : " << String(arr).getLength() << endl;
    cout << "Creating string s1 using a c string..." << endl;
    String s1(arr);
    s1.display();
    cout << "Creating string s2 using s1..." << endl;
    String s2(s1);
    s2.display();
    cout << "Creating string s3 using default constructor..." << endl;
    String s3;
    s3.display();
    cout << "Assigning s1 to s3..." << endl;
    s3.assign(s1);
    s3.display();
    cout << "Creating string s4 using default constructor..." << endl;
    String s4;
    s4.display();
    cout << "Assigning a c string to s4..." << endl;
    s4.assign(arr);
    s4.display();
    cout << "Concatenating a c string to s1..." << endl;
    s1.concatenate(arr);
    s1.display();
    cout << "Concatenating s4 to s2..." << endl;
    s2.concatenate(s4);
    s2.display();
    cout << "Inserting s4 into s3 from index 3..." << endl;
    s3.insert(s4,3);
    s3.display();
    cout << "Inserting a c string into s4 from index 3..." << endl;
    s4.insert(arr,3);
    s4.display();
    cout << "Ereasing from index 4 to index 12 from s1..." << endl;
    s1.erase(4,12);
    s1.display();
    cout << "Ereasing from index 4 to the end of s2..." << endl;
    s2.erase(4);
    s2.display();
    cout << "Ereasing everything from s3..." << endl;
    s3.clear();
    s3.display();
    cout << "Reversing s4..." << endl;
    s4.reverse();
    s4.display();
    cout << "The fourth character in s1 is " << s1.at(3) << endl;
    cout << "Copying a c string into s2..." << endl;
    s2.copy(arr);
    s2.display();
    cout << "Copying a c string from index 3 to the end into s2..." << endl;
    s2.copy(arr,3);
    s2.display();
    cout << "Copying a c string from index 3 to index 6 into s2..." << endl;
    s2.copy(arr,3,6);
    s2.display();
    cout << "Copying s1 into s2..." << endl;
    s2.copy(s1);
    s2.display();
    cout << "Copying s1 from index 3 to the end into s2..." << endl;
    s2.copy(s1,3);
    s2.display();
    cout << "Copying s1 from index 3 to index 6 into s2..." << endl;
    s2.copy(s1,3,6);
    s2.display();
    cout << "Copying 2 characters from index 3 from a c string into s2..." << endl;
    s2.copy(3,2,arr);
    s2.display();
    cout << "Copying 2 characters from index 3 from a s1 into s2..." << endl;
    s2.copy(3,2,s1);
    s2.display();
    cout << "A substring of s1 from index 2 to index 5 is : ";
    s1.substring(2,5).display();
    cout << "A substring of s1 from index 3 to the end is : ";
    s1.substring(3).display();
    cout << "A substring of s1 is : ";
    s1.substring().display();
    cout << "Searching for the character 'p' in s1...";
    s1.find('p').display();
    cout << "Searching for a c string in s1...";
    s1.find(arr).display();
    cout << "Searching for s1 in s1...";
    s1.find(s1).display();
    cout << "Comparing a c string with s1...";
    cout << "s1 is : ";
    s1.display();
    cout << "The c string is : " << arr << endl;
    cout << "Are the c stirng and s1 equal ? " << (s1.compare(arr)?"Yes":"No") << endl;
    cout << "s1 is : "; 
    s1.display();
    cout << "s2 is : ";
    s2.display();
    cout << "Are s1 and s2 equal ? " << (s1.compare(s2)?"Yes":"No") <<endl;
    String s5(arr);
    cout << "Creating a string s5 using a c string..." << endl;
    s5.display();
    cout << "The c string is : " << arr << endl;
    cout << "Are s5 and the c string equal ? " << (s5.compare(arr)?"Yes":"No") << endl;
    cout << "s1 is : ";
    s1.display();
    cout << "s5 is : ";
    s5.display();
    cout << "Swapping s5 and s1..." << endl;
    s5.swap(s1);
    cout << "s1 is : ";
    s1.display();
    cout << "s5 is : ";
    s5.display();
    return 0;
}

String::String(): string(NULL) {}

String::String(const char * cstr) {
    if (cstr == NULL) 
        string = NULL;
    else 
    {
        string = new char[length(cstr)];
        for(size_t i = 0; i < length(cstr); i++)
        {
            string[i] = cstr[i];
        }
        string[length(cstr)] = '\0';
    }
}

String::String(const String & str) {
    if (str.string == NULL) 
        string = NULL;
    else 
    {
        string = new char[length(str)];
        for(size_t i = 0; i < length(str); i++) 
        {
            string[i] = str.at(i);
        }
        string[length(str)] = '\0';
    }
}

String::~String(){
    delete[] string;
    string = NULL;
}

void String::assign(const char * cstr) {
    if (cstr == NULL) 
        cout << "Assiging an empty string";
    else 
    {
        clear();
        string = new char[length(cstr)];
        for(size_t i = 0; i < length(cstr); i++)
        {
            string[i] = cstr[i];
        }
        string[length(cstr)] = '\0';
    }
}

void String::assign(const String & str) {
    if (str.string == NULL) 
        cout << "Assiging an empty string";
    else 
    {
        clear();    
        string = new char[length(str)];
        for(size_t i = 0; i < length(str); i++)
        {
            string[i] = str.at(i);
        }
        string[length(str)] = '\0';
    }
}

void String::concatenate(const char * cstr) {
    if (cstr == NULL) 
        cout << "Concatenating an empty string";
    else 
    {
        String tstr(string);
        clear();    
        string = new char[length(tstr)+length(cstr)];
        for(size_t i = 0; i < length(tstr); i++) 
        {
            string[i] = tstr.at(i);
        }
        for(size_t i = 0; i < length(cstr); i++) 
        {
            string[i+length(tstr)] = cstr[i];
        }
        string[length(tstr)+length(cstr)] = '\0';
    }
}

void String::concatenate(const String & str) {
    if (str.string == NULL) 
        cout << "Concatenating an empty string";
    else 
    {
        String tstr(string);
        clear();    
        string = new char[length(tstr)+length(str)];
        for(size_t i = 0; i < length(tstr); i++) 
        {
            string[i] = tstr.at(i);
        }
        for(size_t i = 0; i < length(str); i++) 
        {
            string[i+length(tstr)] = str.at(i);
        }
        string[length(tstr)+length(str)] = '\0';
    }
}

void String::insert(const char * cstr, const int start) {
    if (cstr == NULL) 
        cout << "Inserting an empty string";
    else 
    {
        String tstr(string);
        delete[] string;    
        string = new char[length(tstr)+length(cstr)];
        for(size_t i = 0; i < start; i++) 
        {
            string[i] = tstr.string[i];
        }
        for(size_t i = 0; i < length(cstr); i++)
        {
            string[i+start] = cstr[i];
        }
        for(size_t i = start; i < length(tstr); i++)
        {
            string[i+length(cstr)] = tstr.string[i];
        }
        string[length(tstr)+length(cstr)] = '\0';
    }
}

void String::insert(const String & str, const int start) {
    if (str.string == NULL) 
        cout << "Inserting an empty string";
    else 
    {
        String tstr(string);
        delete[] string;    
        string = new char[length(tstr)+length(str)];
        for(size_t i = 0; i < start; i++) 
        {
            string[i] = tstr.at(i);
        }
        for(size_t i = 0; i < length(str); i++)
        {
            string[i+start] = str.at(i);
        }
        for(size_t i = start; i < length(tstr); i++)
        {
            string[i+length(str)] = tstr.at(i);
        }
        string[length(tstr)+length(str)] = '\0';
    }
}

void String::erase(const int start, int end) {
    if (end == 0) 
        end = length(string);
    if (start < 0 || start > length(string) || end < 0 || end > length(string)) 
        cout << "Invalid erase indices";
    else 
    {
        String tstr(string);
        clear();    
        string = new char[length(tstr)-(end-start)];
        for(size_t i = 0; i < start; i++)
        {
            string[i] = tstr.at(i);
        }
        for(size_t i = end; i < length(tstr); i++)
        {
            string[i-(end-start)] = tstr.at(i);
        }
        string[length(tstr)-(end-start)] = '\0';
    }
}

void String::clear(){
    delete[] string;
    string = NULL;
}

void String::reverse() {
    if (string == NULL) 
        cout << "Reverseing an empty string";
    else 
    {
        for(size_t i = 0; i < length(string)/2; i++) 
        {
            char temp = string[i];
            string[i] = string[length(string)-i-1];
            string[length(string)-i-1] = temp;
        }
    }
}

char String::at(const int i) const {
    return string[i];
}

int String::getLength() const {
    return length(string);
}

void String::display() const {
    if(string != NULL) 
        cout << string << endl;
    else 
        cout << "Empty string" << endl;
}

void String::copy(const char * cstr, const int start, int end) {
    if (cstr == NULL) 
        cout << "copying an empty string" << endl;
    else if (start < 0 || start > length(cstr) || end < 0 || end > length(cstr)) 
        cout << "Invalid copy indices" << endl;
    else 
    {
        if(end == 0)
            end = length(cstr);
        clear();    
        string = new char[end-start];
        for(size_t i = 0, l = end - start; i < l; i++) 
        {
            string[i] = cstr[i + start];
        }
        string[end-start] = '\0';
    }
}

void String::copy(const int start, const int num, const char * cstr) {
    if (cstr == NULL) 
        cout << "copying an empty string" << endl;
    else if (start < 0 || start > length(cstr) || num < 0 || num > length(cstr)) 
        cout << "Invalid copy indices" << endl;
    else 
    {
        clear();    
        string = new char[num];
        for(size_t i = 0; i < num ; i++) 
        {
            string[i] = cstr[i + start];
        }
        string[num] = '\0';
    }
}

void String::copy(const String & str, const int start, int end) {
    if (str.string == NULL) 
        cout << "copying an empty string" << endl;
    else if (start < 0 || start > length(str.string) || end < 0 || end > length(str.string)) 
        cout << "Invalid copy indices" << endl;
    else 
    {
        if(end == 0)
            end = length(str);
        clear();    
        string = new char[end - start];
        for(size_t i = 0, l = end - start; i < l; i++) 
        {
            string[i] = str.at(i + start);
        }
        string[end - start] = '\0';
    }
}

void String::copy(const int start, const int num, const String & str) {
    if (str.string == NULL) 
        cout << "copying an empty string" << endl;
    else if (start < 0 || start > length(str.string) || num < 0 || num > length(str.string)) 
        cout << "Invalid copy indices" << endl;
    else 
    {
        clear();    
        string = new char[num];
        for(size_t i = 0; i < num; i++) 
        {
            string[i] = str.at(i + start);
        }
        string[num] = '\0';
    }
}

String String::substring(const int start, int end) const {
    if (string == NULL) 
        return String("substring of an empty string");
    else if (start < 0 || start > length(string) || end < 0 || end > length(string)) 
        return String("Invalid substring indices");
    else 
    {
        if(end == 0)
            end = length(string);
        String tstr;
        tstr.string = new char[end - start];
        for(size_t i = 0, l = end - start; i < l; i++) 
        {
            tstr.string[i] = string[i + start];
        }
        tstr.string[end - start] = '\0';
        return tstr;
    }
}

String String::find(const char c) const {
    if (string == NULL) 
        return String("finding in an empty string");
    else 
    {
        for(size_t i = 0, l = length(string); i < l; i++) 
        {
            if (string[i] == c) 
                return substring(i);
        }
        return String("nothing was found");
    }
}

String String::find(const char * cstr) const {
    if (string == NULL) 
        return String("finding in an empty string");
    else if (cstr == NULL) 
        return String("finding an empty string");
    else 
    {
        for(size_t j = 0, l = length(string); j < l; j++)
        {    
            if (String(cstr).compare(String(string).substring(j)))
                return String(string).substring(j);
        }
        return String("nothing was found");
    }
}

String String::find(const String & str) const {
    if (string == NULL) 
        return String("finding in an empty string");
    else if (str.string == NULL) 
        return String("finding an empty string");
    else 
    {
        for(size_t j = 0, l = length(string); j < l; j++)
        {    
            if (str.compare(String(string).substring(j)))
                return String(string).substring(j);
        }
        return String("nothing was found");
    }
}

bool String::compare(const char * cstr) const {
    if (string == NULL) 
        return false;
    else if (cstr == NULL) 
        return false;
    else if (length(string) != length(cstr))
        return false;
    else 
    {
        /* Old version
        int flags = 0;
        for(size_t i = 0, l = length(cstr); i < l; i++) 
        {
            if(cstr[i] == string[i]) flags += 1;
        }
        return flags == length(cstr);
        */

       // Optimized version
       for(size_t i = 0, l = length(cstr); i < l; i++) 
        {
            if(cstr[i] != string[i]) 
                return false;
        }
        return true;
    }
}

bool String::compare(const String & str) const {
    if (string == NULL) 
        return false;
    else if (str.string == NULL) 
        return false;
    else if (length(string) != length(str.string)) 
        return false;
    else 
    {
        /* Old Version
        int flags = 0;
        for(size_t i = 0, l = length(str); i < l; i++) 
        {
            if(str.at(i) == string[i]) flags += 1;
        }
        return flags == length(str);
        */

       // Optimized version
        for(size_t i = 0, l = length(str); i < l; i++) 
        {
            if(str.at(i) != string[i]) 
                return false;
        }
        return true;
    }
}

void String::swap(String & str) {
    String temp(string);
    assign(str);
    str.assign(temp);
}

int String::length(const char * cstr) const {
    if (cstr == NULL) 
        return 0;
    else 
    {
        size_t i;
        for(i = 0; cstr[i] != '\0'; i++);
        return i;
    }
}

int String::length(const String & str) const {
    if (str.string == NULL) 
        return 0;
    else 
    {
        size_t i;
        for(i = 0; str.at(i) != '\0'; i++);
        return i;
    }
}
