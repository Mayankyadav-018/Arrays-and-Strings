/* Name - Mayank yadav
   PRN - 24070123060
   Class - ENTC A-3
   Date - 29/07/2025 */
#include <iostream>
using namespace std;

int main() {
    int marks[] = {24, 62, 45, 77, 57};
    int key;
    cout << "Enter the marks you want to find: ";
    cin >> key;

    bool found = false;
    for(int i = 0; i < 5; i++) {
        if(key == marks[i]) {
            cout << "Key found at position: " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}




/* OUTPUT
Enter the marks you want to find: 62
Key found at position: 2 */


