#include<iostream>
#include<vector>
using namespace std;
void phone(string digit, vector<string> &ans, string output, string mapping[], int index){
    if(index == digit.length()){
        ans.push_back(output);
        return;
    }
    int num = digit[index] - '0';
    string value = mapping[num];
    for(int i = 0; i < value.length();i++){
        output.push_back(value[i]);
        phone(digit, ans, output, mapping , index+1);
        output.pop_back();
    }
}
int main(){
    string digits;
    cout<<"enter numbers"<<endl;
    cin>>digits;
    vector<string> ans;
    string output;
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno" ,"pqrs", "tuv", "wxyz"};
    int index = 0;
    phone(digits, ans, output, mapping ,index);
    for(int i= 0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }


}