#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[]{10,20,30,40};
    for(auto a:arr){
        cout<<a<<endl;
    }
    vector<int> vec{10,20,30,40,50};

    for(auto v:vec){
        cout<<v<<" ";
    }
    
    cout<<endl;
    string s="Srijan";
    for(auto c:s){
        cout<<c<<" ";
    }
    return 0;
}