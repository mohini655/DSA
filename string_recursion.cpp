#include<iostream>
#include<string>
#include<vector>
using namespace std;
void reverse(string &s,int st,int e){
    if(st>e){
        return;
    }
    swap(s[st],s[e]);
    cout<<s<<endl;
    reverse(s,st +1,e-1);
}
bool check_palindrome(string s,int i){
    int n = s.size();
    if(i == n/2){
        return true;
    }
    if(s[i] != s[n-i-1]){
        return false;
    }
    return check_palindrome(s, i+1);
}
int power(int n , int r){
    if(r == 0){
        return 1;
    }
    if(r == 1){
        return n;
    }
    int ans = power(n, r/2);
    if(r%2 == 0){
        return ans * ans;
    }
    else{
        return n * ans * ans;
    }
}
int main(){
    // usind recursion in string
    string s = "mohini";
    int e = s.size()-1;
    reverse(s,0,e);
    cout<<s<<endl;
    int n = 8;
    string str = "nitin";
    if(check_palindrome(str,0)){
        cout<<"yes ,its a palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    int m, r;
    cout<<"enter numbers"<<endl;
    cin>>m>>r;
    cout<<power(m,r)<<endl;
             

}