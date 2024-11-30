#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 8; i++) { 
        if (i % 2 == 0) {
            cout << " ";  
        }
        for (int j = 0; j < 8; j++) { // Loop through 8 columns
            if (j % 2 == 0) {
                cout << "# ";  
            } else {
                cout << "* ";  
            }
        }
        cout << endl;
    }
    return 0;
}
