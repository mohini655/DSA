#include<iostream>
using namespace std;
void printpoly(int a[], int n){
    cout<<a[0];
    for(int i = 1;i<n; i++){
        if(a[i] == 0){
            continue;
        }
        cout<<" + "<<a[i]<<"n^"<<i;
    }cout<<endl;
}
int* add(int a1[], int a2[], int n, int m){
    int maxsize = max(n,m);
    int * sum = new int[maxsize];
    for(int i = 0 ;i< n; i++){
        sum[i] = a1[i];
    }
    for(int i = 0;i < m;i++){
        sum[i] = sum[i] + a2[i];
    }
    return sum;
}
int main(){
    int m , n ;

    int a1[] = {0,3,4,5,7,1};
    n = 6;
    cout<<"first polynomial"<<endl;
    printpoly(a1,n);

    cout<<"second polynomial"<<endl;
    m = 7;
    int a2[] = {3,8,1,8,3,7,1};
    printpoly(a2,m);

    int *sum = add(a1, a2, 6, 7);
    int maxi = max(m ,n);
    printpoly(sum, maxi);
}