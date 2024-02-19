#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> B;
    char choice;
    int data;

    do {
        cout << "[A] Push Data\n[B] Pop Data\n[C] Show Front\n[D] Show Size\n[E] Quit\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 'A':
            case 'a':
                cout << "Enter data to push: ";
                cin >> data;
                B.push(data);
                break;
            case 'B':
            case 'b':
                if (!B.empty()) {
                    cout << "Popped element: " << B.front() << endl;
                    B.pop();
                } else {
                    cout << "Queue is empty!" << endl;
                }
                break;
            case 'C':
            case 'c':
                if (!B.empty()) {
                    cout << "Front element: " << B.front() << endl;
                } else {
                    cout << "Queue is empty!" << endl;
                }
                break;
            case 'D':
            case 'd':
                cout << "Size of queue: " << B.size() << endl;
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
