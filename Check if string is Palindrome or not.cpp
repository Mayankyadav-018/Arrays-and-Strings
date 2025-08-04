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
    bool isPalindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;
    return 0;
}



/* OUTPUT
Enter a string: MADAM
MADAM is a palindrome.


 */

