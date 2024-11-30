#include <iostream>

using namespace std;

int main() {
    for (int i = 8; i >= 1; i--) {  // starts at 8 and decreases to 1
        for (int j = 1; j <= 8 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "# ";
        }
        cout << endl;  
    }
    return 0;
}
