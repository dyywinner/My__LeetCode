#include<stdio.h>
#include<iostream>
#include<stack>
/*
输入合法的括号对，输出每对括号的下标
*/
using namespace std;
void cout_parent(string s){
    int str_par = s.size()/2;
    int s_cout[str_par][2];
    stack<int> st;
    int n=0,m=0;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='('){//a legal char
            st.push(i);
            s_cout[n++][0] = i+1;
            m=n;
        }
        else{
            s_cout[--m][1] = i+1;
            st.pop();
        }
    }
    for(int i=0;i<str_par;i++){
        for(int j=0;j<2;j++)
            cout<<s_cout[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    while(true){
        string p;
        cin>>p;
        cout_parent(p);
        //free(p);
    }
    return 0;
}
