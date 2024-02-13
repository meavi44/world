// prefix expression evaluation


#include<bits/stdc++.h>
using namespace std;
double postfix(string s){
    stack<double> st;
    for(int i=s.size()-1;i>=0;i--){
        char ch=s[i];
        if(ch>='0'&&ch<='9'){
            double k=ch-'0';
            st.push(k);
        }
        else{
            double a=st.top();
            st.pop();
            double b=st.top();
            st.pop();
            if(ch=='*'){
                double result=b*a;
                st.push(result);
            }
            if(ch=='/'){
                double result=a/b;
                st.push(result);
            }
            if(ch=='+'){
                double result=b+a;
                st.push(result);
            }
            if(ch=='-'){
                double result=a-b;
                st.push(result);
            }
            if(ch=='^'){
                double result=pow(a,b);
                st.push(result);
            }
        }
    }
    return st.top();
}

int main(){
    string s;
    cin>>s;
    double result=postfix(s);
    cout<<result;
}