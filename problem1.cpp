// We can store details related to a student in a class consisting of his age (int), first_name (string), last_name (string) and standard (int).

// You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

// get_age, set_age
// get_first_name, set_first_name
// get_last_name, set_last_name
// get_standard, set_standard
// Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.

// Input Format

// Input will consist of four lines.
// The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
// The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
// The fourth line will contain an integer, representing the standard of student.

// Note: The number of characters in first_name and last_name will not exceed 50.

// Output Format

// The code provided by HackerRank will use your class members to set and then get the elements of the Student class.

// Sample Input

// 15
// john
// carmack
// 10
// Sample Output

// 15
// carmack, john
// 10

// 15,john,carmack,10


#include<iostream>

using namespace std;

class Student{
    private:
        string first_name, last_name;
        int age,standard;
    
    public: void get_age(){
        cin>>age;
    }

    public: int set_age() const{
        return age;
    }

    public: void get_first_name(){
        cin>>first_name;
    }

    public: string set_first_name() const{
        return first_name;
    }

    public: void get_last_name(){
        cin>>last_name;
    }

    public: string set_last_name() const{
        return last_name;
    }

    public: void get_standard(){
        cin>>standard;
    }

    public: int set_standard() const{
        return standard;
    }

    public: void Output(){
        cout<<age<<"\n";
        cout<<last_name<<","<<" "<<first_name<<"\n";
        cout<<standard<<"\n\n";

        cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    }
        
};

int main(){
    Student obj;
    obj.get_age();
    obj.set_age();
    obj.get_first_name();
    obj.set_first_name();
    obj.get_last_name();
    obj.set_last_name();
    obj.get_standard();
    obj.set_standard();
    obj.Output();
}