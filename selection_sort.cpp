#include<iostream>
using namespace std;
void loop_sorting(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
void recursion_sorting(int arr[],int n,int i){
    if(i == n-1){
        return;
    }
    int min = i;
    for(int j = i+1;j<n;j++){
        if(arr[j] < arr[min]){
            min = j;
        }
    }
    swap(arr[i],arr[min]);
    recursion_sorting(arr,n,i+1);
}
void print_arr(int arr[] ,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    // selection sort using loops
    int n = 7;
    int arr[n] = {3,5,6,7,3,6,1};
    loop_sorting(arr, n);
    print_arr(arr, n);

    // selection sort using recursion
    int m = 7;
    int array[] = {2,14,6,30,86,3,4};
    recursion_sorting(array,m,0);
    print_arr(array,m);

}