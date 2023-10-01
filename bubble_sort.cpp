#include<iostream>
using namespace std;
void loop_sorting(int arr[] ,int n){
    for(int i = 1;i<n;i++){
        bool swapped = false;
        for(int j= 0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
void recursion_sorting(int arr[], int n){
    if(n == 1){
        return;
    }bool swapped = false;
    for(int i = 0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped = true;
        }
    }
    if(swapped == false){
        return;
    }
    recursion_sorting(arr,n-1);
}
void printarr(int arr[] ,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    // bubble sort algorithm using loops
    int n = 7;
    int arr[n] = {9,7,6,5,4,3,2};
    loop_sorting(arr, n);
    printarr(arr, n);

    // bubble sort using recursion
    int m = 7;
    int array[m] = {8, 22, 7, 9, 31, 5, 13};
    recursion_sorting(array,m);
    printarr(array,m);
    
}