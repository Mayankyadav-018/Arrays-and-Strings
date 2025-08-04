/* Name - Mayank yadav
   PRN - 24070123060
   Class - ENTC A-3
   Date - 31/07/2025 */
#include <iostream>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}


/* OUTPUT
Enter a string: Mayank
Reversed string: knayaM
 */


