#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> A;
    char choice;
    int data;

    do {
        cout << "[A] Push Data\n[B] Pop Data\n[C] Show Top\n[D] Show Size\n[E] Quit\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 'A':
            case 'a':
                cout << "Enter data to push: ";
                cin >> data;
                A.push(data);
                break;
            case 'B':
            case 'b':
                if (!A.empty()) {
                    cout << "Popped element: " << A.top() << endl;
                    A.pop();
                } else {
                    cout << "Stack is empty!" << endl;
                }
                break;
            case 'C':
            case 'c':
                if (!A.empty()) {
                    cout << "Top element: " << A.top() << endl;
                } else {
                    cout << "Stack is empty!" << endl;
                }
                break;
            case 'D':
            case 'd':
                cout << "Size of stack: " << A.size() << endl;
                break;
            case 'E':
            case 'e':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 'E' && choice != 'e');

    return 0;
}
