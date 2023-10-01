#include<iostream>
using namespace std;
#define array 4,\
              3,\
              2
        
int main(){
    // jaggered array - 
    // in stack memory
    int row1[] = {5,7,2};
    int row2[] = {2,4};
    int row3[] = {5,7,9,3,3};

    int *jag[] = {row1,row2,row3};

    int size[] = {3,2,5};

    for(int i = 0;i<3;i++){
        int *ptr = jag[i];
        for(int j = 0;j<size[i];j++){
            cout<<*(ptr + j)<<" ";
        }cout<<endl;
    }

    // dynamic jaggered array
    int row;
    cout<<"enter the number of rows"<<endl;
    cin>>row;
    cout<<"enter the sizes of columns"<<endl;
    int *siz = new int[row];
    for(int i = 0;i<row;i++){
        cin>>siz[i];
    }
    int **arr = new int*[row];
    int i = 0;
    while(i<row){
        arr[i] = new int[siz[i]];
        i++;
    }

    // taking input
    cout<<"enter elements"<<endl;
    for(int i= 0;i<row;i++){
        int c= siz[i];
        for(int j = 0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    // output
    cout<<"jaggered array is as follows:"<<endl;
    for(int i= 0;i<row;i++){
        int c= siz[i];
        for(int j = 0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // multi line macro
    int rrr[] = {array};
    for(int i = 0;i<3;i++){
        cout<<rrr[i]<<" ";
    }cout<<endl;


}