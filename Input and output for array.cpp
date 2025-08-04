/* Name - Mayank yadav
   PRN - 24070123060
   Class - ENTC A-3
   Date - 29/07/2025 */
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter how many numbers you want in an array:";
    cin >> n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cout << "Element" << i+1 << ":";
        cin >> numbers[i];
    }
    cout << "The elements of this array are:";
    for(int j = 0;j<n;j++){
        cout << numbers[j] << " ";
    }
    return 0;
}



/* OUTPUT
Enter how many numbers you want in an array:5
Element1:7
Element2:4
Element3:9
Element4:5
Element5:2
The elements of this array are:7 4 9 5 2 */
