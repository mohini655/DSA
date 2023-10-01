#include<iostream>
using namespace std;
void loop_sorting(int arr[] ,int n){
    for(int i = 1;i<n;i++){
        int value = arr[i];
        int j = i-1;
        while(j>=0){
            if(value < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = value;
    }
}
void recursion_sorting(int arr[] , int n){
    if(n <=1){
        return;
    }
    recursion_sorting(arr, n-1);
    int last = arr[n-1];
    int j = n-2;
    while(j>=0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}
void print_arr(int arr[] ,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    // insertion sort using loop
    int n = 7;
    int arr[n] = {3,1,5,36,8,4,3};
    loop_sorting(arr,n);
    print_arr(arr,n);


    // insertion sort using recursion
    int m = 7;
    int array[m] = {3,1,5,36,8,4,3};
    recursion_sorting(array,m);
    print_arr(array,m);


}