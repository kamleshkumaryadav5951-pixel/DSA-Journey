#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {

    deque<string> history;
    int choice;
    string page;

    do {
        cout << "\n=== BROWSER HISTORY ===\n";
        cout << "1. Visit a Page\n";
        cout << "2. Go Back\n";
        cout << "3. Display Current History\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";

        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Page URL: ";
                cin >> page;

                history.push_back(page);

                cout << "Visited: " << page << endl;
                break;


            case 2:
                if (history.size() <= 1) {
                    cout << "No Previous Page Available.\n";
                }
                else {
                    cout << "Going back from: "
                         << history.back() << endl;

                    history.pop_back();

                    cout << "Current Page: "
                         << history.back() << endl;
                }
                break;


            case 3:
                if (history.empty()) {
                    cout << "History is empty.\n";
                }
                else {
                    cout << "\nCurrent History:\n";

                    for (string page : history) {
                        cout << page << endl;
                    }

                    cout << "Current Page: "
                         << history.back() << endl;
                }
                break;


            case 4:
                cout << "Exiting Browser History...\n";
                break;


            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}