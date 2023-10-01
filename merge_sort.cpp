#include<iostream>
using namespace std;
void merge(int arr[] , int s, int e,int mid){
    int newarr[e+1];
    int index1 = s ,index2 = mid+1;
    int mainindex = s;
    while(index1 <= mid && index2 <= e){
        if(arr[index1] <= arr[index2]){
            newarr[mainindex++] = arr[index1++];
        }
        else{
            newarr[mainindex++] = arr[index2++];
        }
    }
    while(index1 <= mid){
        newarr[mainindex++] = arr[index1++];
    }
    while(index2 <= e){
        newarr[mainindex++] = arr[index2++];
    }
    for(int i = s;i <= e;i++){
        arr[i] = newarr[i];
    }
}
void merge_sort(int arr[] ,int s, int e){
    if(s >= e){
        return ;
    }
    int mid = (s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid + 1,e);
    merge(arr,s,e, mid);
}
int main(){
    // merge sort using recursion
    int n = 5;
    int arr[n] = {2,4,1,3,5};
    merge_sort(arr, 0, n-1);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}