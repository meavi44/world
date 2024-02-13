//find the last occurence of an element x in a given array
#include<bits\stdc++.h>
using namespace std;
int main(){
    int x,count=0;
    cin>>x;
    vector<int>v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    for(int i=0;i<7;i++){
        if(v[i]==x){
            count=i;
        }
    }
    cout<<count;
}