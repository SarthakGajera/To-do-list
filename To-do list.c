#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the menu options
void displayMenu() {
    cout << "===== To-Do List Menu =====" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Done" << endl;
    cout << "4. Exit" << endl;
    cout << "===========================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    vector<string> tasks; // Vector to store tasks

    int choice;
    string task;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the task to add: ";
                cin >> task;
                tasks.push_back(task);
                cout << "Task added successfully!" << endl;
                break;
            case 2:
                if (tasks.empty()) {
                    cout << "No tasks added yet." << endl;
                } else {
                    cout << "Tasks:" << endl;
                    for (int i = 0; i < tasks.size(); ++i) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;
            case 3:
                int index;
                cout << "Enter the index of the task to mark as done: ";
                cin >> index;
                if (index >= 1 && index <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    cout << "Task marked as done!" << endl;
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
