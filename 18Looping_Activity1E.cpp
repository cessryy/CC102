#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 8; i++) { // Loop through 8 rows
        for (int j = 1; j <= 8 - i; j++) {
            cout << "  "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
