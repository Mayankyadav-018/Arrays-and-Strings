/* Name - Mayank yadav
   PRN - 24070123060
   Class - ENTC A-3
   Date - 29/07/2025 */
#include <iostream>
using namespace std;

int main() {
    int arr[50],num,temp,i,j;
    cout << "Enter the number of elements you want in your array:";
    cin >> num;
    if(num<=0){
        cout << "Invalid input.";
    }
    
    for(i=0;i<num;i++){
        cout << "Element " << i+1 << ":";
        cin >> arr[i];
    }
    cout << "Original array:{";
    for(i=0;i<num;i++){
        cout << arr[i] << ",";
    }
    cout << "}" << endl;
    
    for(i=0,j=num-1;i<num/2;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    } 
    cout << "Reversed array:{";
    for(i=0;i<num;i++){
        cout << arr[i] << ",";
    }
    cout << "}" << endl;

    return 0;
}




/* OUTPUT
Enter the number of elements you want in your array:5
Element 1:10
Element 2:17
Element 3:9
Element 4:1
Element 5:18
Original array:{10,17,9,1,18,}
Reversed array:{18,1,9,17,10,} */


