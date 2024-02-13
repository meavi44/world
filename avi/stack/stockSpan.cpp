// input
// 7
// 100 80 60 70 60 75 85
// output 
// 1 1 1 2 1 4 6

#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v){
    int k=v.size();
    for(int i=0;i<k/2;i++){
        int temp=v[i];
        v[i]=v[k-1-i];
        v[k-1-i]=temp;
    }
    
}
vector<int> stockSpan(vector<int>&v){
    int n=v.size();
    int k;
    reverse(v);
    stack<int>st;
    st.push(0);
    vector<int>output(n,-1);
    for(int i=1;i<n;i++){
        while(!st.empty()&& v[i]>v[st.top()]){
             k=st.top();
            // cout<<k;
            output[st.top()]=n-i-1;
            st.pop();
        }
        k=0;
        st.push(i);
    }
    reverse(output);
    return output;
}
int main(){
    int n,t;
    cin>>n;
    vector<int>v;
    while(n--){
        cin>>t;
        v.push_back(t);
    }
    vector<int> result=stockSpan(v);
    
    for(int j=0;j<result.size();j++){
        cout<<j-result[j]<<" ";
    }

}