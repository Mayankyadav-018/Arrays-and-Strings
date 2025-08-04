/* Name - Mayank yadav
   PRN - 24070123060
   Class - ENTC A-3
   Date - 29/07/2025 */
#include <iostream>
using namespace std;

int main(){
    int arr[50],num,temp,i,j;
    int sum=0;
    cout << "Enter the number of elements you want in your array:";
    cin >> num;
    if(num<=0){
        cout << "Invalid input.";
    }
    
    for(i=0;i<num;i++){
        cout << "Element " << i+1 << ":";
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    
    for(i=0;i<num;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Maximum number in the array:" << max << endl;
    cout << "Minimum number in the array:" << min;
   
    

    return 0;
}




/* OUTPUT
Enter the number of elements you want in your array:6
Element 1:7
Element 2:12
Element 3:3
Element 4:45
Element 5:33
Element 6:8
Maximum number in the array:45
Minimum number in the array:3

 */


