#include <iostream>
using namespace std;

int main() {
    
    float exam1, exam2, exam3, total, average;
    
    cout << "Enter the score for Exam 1: ";
    cin >> exam1;
    cout << "Enter the score for Exam 2: ";
    cin >> exam2;
    cout << "Enter the score for Exam 3: ";
    cin >> exam3;
    
    total = exam1+exam2+exam3;
    average = total/3;
    
    cout << "Average score: " << average << "\n";
    
    if (average>=70) {
        cout << "Result: Passed";
    } else {
        cout << "Result: Failed";
    }
    
}