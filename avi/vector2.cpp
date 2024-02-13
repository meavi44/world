#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    
    v.insert(v.begin()+2,9);
    cout<<endl;
    for(int hw:v){
        cout<<hw<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);
    int kutta=0;
    while(kutta<v.size()){
        cout<<v[kutta++]<<" ";
    }
}
