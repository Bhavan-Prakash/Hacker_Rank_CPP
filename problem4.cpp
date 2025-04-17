// This problem is to get you familiar with virtual functions. Create three classes Person, Professor and Student. The class Person should have data members name and age. The classes Professor and Student should inherit from the class Person.

// The class Professor should have two integer members: publications and cur_id. There will be two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age and publications of the professor. The function putdata should print the name, age, publications and the cur_id of the professor.

// The class Student should have two data members: marks, which is an array of size  and cur_id. It has two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age, and the marks of the student in  6 subjects. The function putdata should print the name, age, sum of the marks and the cur_id of the student.

// For each object being created of the Professor or the Student class, sequential id's should be assigned to them starting from  1.

// Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.

// sample input:
// 4
// 1
// Walter 56 99
// 2
// Jesse 18 50 48 97 76 34 98
// 2
// Pinkman 22 10 12 0 18 45 50
// 1
// White 58 87

// sample output:

// Walter 56 99 1
// Jesse 18 403 1
// Pinkman 22 135 2
// White 58 87 2


#include <iostream>
#include <string>
using namespace std;


//its a tough one so i learned some concepts online 
//theres a difference in copying and gaining the concept and then again solving the problem :)
class Person {
public:
    string name;
    int age;

    virtual void getdata() = 0;
    virtual void putdata() = 0;

    virtual ~Person() {}
};

class Professor : public Person {
private:
    int publications;
    int cur_id;
    static int id_counter;

public:
    Professor() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};


int Professor::id_counter = 0;

class Student : public Person {
private:
    int marks[6];
    int cur_id;
    static int id_counter;

public:
    Student() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; ++i) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; ++i) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};


int Student::id_counter = 0;

int main() {
    int n;
    cin >> n;

    Person* persons[n];

    for (int i = 0; i < n; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            persons[i] = new Professor();
        } else {
            persons[i] = new Student();
        }
        persons[i]->getdata();
    }

    for (int i = 0; i < n; ++i) {
        persons[i]->putdata();
        delete persons[i];
    }

    return 0;
}
