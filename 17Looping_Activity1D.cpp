#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 8; i++) {  // Outer loop: controls the number of rows
        for (int j = i; j >= 1; j--) {  // Inner loop: prints numbers in descending order
            cout << j << " ";
        }
        cout << endl;  
    }
    return 0;
}
