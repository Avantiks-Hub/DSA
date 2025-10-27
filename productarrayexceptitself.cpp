#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    vector<int>ans(n,1);
    int suf=1,pref=1;
    //prefix
    for(int i=0;i<n;i++){//[1,1,2,6]
        ans[i]*=pref;
        pref*=arr[i];
    }
    //suffix
    for(int i=n-1;i>=0;i--){
        ans[i]*=suf;
        suf*=arr[i];
    }

    cout<<"[";
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<"]"<<endl;
}