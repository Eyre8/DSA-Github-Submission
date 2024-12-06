#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string Task, Answer;
    int rem;
    vector<string> TodoList = {};
    
    cout << "Your To-Do List is empty \n";
    
    
    while (true){
        
        cout << "Add another task? (y/n): ";
        cin >> Answer;
    
        if (Answer == "y"){
        
            cout << "Add a task: ";
            cin >> Task;
            
            TodoList.push_back(Task);
        
        } else if (Answer == "n"){
        goto task;
        
        } else {
        cout << "Not a valid response";
        
        }
        
    }
        
    task:
    cout << "\n" << "Your To-Do List: \n";
    int i = 0;
    for (auto &element : TodoList) {
        cout << i++ << ": " << element << endl;
    }
    
    cout << "\n" << "Mark a task as completed by entering its number: ";
    cin >> rem;
    
    cout  << "Task " << TodoList [rem] << " has been completed";
    
    TodoList.erase(TodoList.begin()+rem);
    
    cout << "\n" <<"Your updated To-do List: \n";
    
    i = 0;
    for (auto &element : TodoList) {
        cout << i++ << ": " << element << endl;
        
    }
    
    
    
    
    
        
    
    
        
    
    
    
    
    
    

}