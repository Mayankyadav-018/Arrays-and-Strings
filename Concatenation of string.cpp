/* Name - Mayank yadav
   PRN - 24070123060
   Class - ENTC A-3
   Date - 31/07/2025 */
#include <iostream>
using namespace std;
int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    while (str1[i] != '\0') {
        i++;
    }
    str1[i] = ' ';
    i++;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    cout << "Concatenated string: " << str1 << endl;
    return 0;
}



/* OUTPUT
Enter first string: Hii
Enter second string: Everyone
Concatenated string: Hii Everyone
 */
