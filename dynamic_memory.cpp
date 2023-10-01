#include<iostream>
using namespace std;
int main(){
    // macros -the global variable
    #define pi 3.14

    cout<<pi + 2<<endl;

    // dyanamic memory allocation
    int *i = new int;
    *i = 9;
    cout<<*i<<endl;

    // releasing heap memory location 
    delete i;

    // dynamic memory allocation of an array
    int p;
    cout<<"enter the length of array"<<endl;
    cin>>p;
    int *arr = new int[p];
    for(int i = 0;i<p;i++){
        int a;
        cin>>a;
        arr[i] = a;
    }
    for(int i = 0;i<p;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    // releasing memory of array
    delete []arr;


    // dynamic memmory allocation of 2D array

    // creation
    int row,col;
    cout<<"enter length of row "<<endl;
    cin>>row;
    cout<<"enter length of col"<<endl;
    cin>>col;
    int **ar = new int*[row];
    for(int i = 0;i<row;i++){
        ar[i] = new int[col];
    }

    // taking input
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>ar[i][j];
        }
    }

    // output
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<ar[i][j]<<" ";
        }cout<<endl;
    }

    // releasing memory
    for(int i = 0;i<row;i++){
        delete [] ar[i];
    }
    delete [] ar;
}