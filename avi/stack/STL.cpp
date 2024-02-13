//impementation using stack

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(6);
    st.push(3);
    st.push(2);
    st.push(1);
    // cout<<st.size();
    for(int i=st.size()-1;i>=0;i--){
        cout<<st.top()<<" ";
         st.pop();
          
        
    }
}