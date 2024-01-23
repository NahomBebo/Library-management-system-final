#include <iostream>
using namespace std;

int main() {
    int n;
    char ch;
    cout << "Enter the number of lines(n): "; 
    cin >> n; // Prompt the user to enter n
    
    // for the upper triangle
    for (int i = 1; i <= n; i++) {
        ch = '@' - i + n + 1;
        for (int j = 1; j <= n* 2-1; j++) {
            if (j >= i && j <= n * 2 - i) {
                cout << ch;
                if (j < n) {
                    ch--;
                } else {
                    ch++;
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // for the lower triangle
    for (int i = n - 1; i >= 1; i--) {
        ch = '@' - i + n + 1;
        for (int j = 1; j <= n* 2-1; j++) {
            if (j >= i && j <= n * 2 - i) {
                cout << ch;
                if (j < n) {
                    ch--;
                } else {
                    ch++;
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}