// Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the 5 exams given during this semester.

// Create a class named Student with the following specifications:

// An instance variable named scores to hold a student's 5 exam scores.
// A void input() function that reads  5integers and saves them to scores.
// An int calculateTotalScore() function that returns the sum of the student's scores.
// Input Format

// Most of the input is handled for you by the locked code in the editor.

// In the void Student::input() function, you must read  scores from stdin and save them to your  instance variable.

// Constraints

//1<=n<=100
//0<=examscore<=50

// Output Format

// In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in scores).

// The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.

// Sample Input

// The first line contains n, the number of students in Kristen's class. The n subsequent lines contain each student's 5 exam grades for this semester.

// 3
// 30 40 45 10 10
// 40 40 40 10 10
// 50 20 30 10 10
// Sample Output

// 1
// Explanation

// Kristen's grades are on the first line of grades. Only 1 student scored higher than her.



#include <iostream>

using namespace std;

class Student {
    int scores[5];

public:
    void input() {
        for (int i = 0; i < 5; ++i) {
            cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n;
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; ++i) {
        students[i].input();
    }

    int kristenScore = students[0].calculateTotalScore();

    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (students[i].calculateTotalScore() > kristenScore) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
