#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[] , int s, int e){
    int p = s;
    int count = 0; 
    for(int i = s+1; i<=e; i++){
        if(arr[i] < arr[p]){
            count++;
        }
    }
    int k = s + count;
    swap(arr[k], arr[p]);
    int i = s,j = e;
    while(i<k && j>k){
        while(arr[i] < arr[k]){
            i++;
        }
        while(arr[j] > arr[k]){
            j--;
        }
        if(i<k && j>k){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    return k;
}
void quick_sort(int arr[] ,int s, int e){
    if(s >= e){
        return;
    }
    int p = partition(arr, s, e);
    quick_sort(arr, s, p-1);
    quick_sort(arr, p+1, e);
}
int fibb(int n, vector<long long> &final){
    if(n == 1 || n == 2){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    int a = fibb(n-1, final);
    int b = fibb(n-2, final);
    cout<<"a "<<a<<" b "<<b<<endl;
    int ans = a + b;
    cout<<"ans "<<ans<<endl;
    final.push_back(ans);
}
int main(){
    int n = 12;
    int arr[] = {3,6,8,9,6,2,2,9,3,5,8,10};
    quick_sort(arr , 0, n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    vector<long long> final;
    int a = 5;
    int ans = fibb(a, final);
    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<" ";
    }cout<<endl;
}