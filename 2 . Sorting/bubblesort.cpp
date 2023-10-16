#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){ //Sorted in n-1 steps
        int didswap = 0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                didswap = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(didswap == 0) break; //Array is sorted, so no need to keep iterating
    }
}

int main() {

    int arr[] = {12, 34, 45, 56, 15, 23, 35};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array before sorting: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    bubbleSort(arr, n);

    cout<<"\n\nArray after sorting: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
