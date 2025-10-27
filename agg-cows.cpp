#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &arr,int n,int c,int maxalloweddis);
int func(vector<int> &arr,int n,int c,int st,int end);
int main(){
    vector<int> stalls={1,2,8,4,9};
    int n=stalls.size(),c=3;
    int end=stalls[0],st=1;
    for(int i=0;i<n;i++){
        int temp=stalls[i];
        end=max(end,temp);
        for(int j=i+1;j<n;j++){
            if(temp>stalls[j]){
                stalls[i]=stalls[j];
                stalls[j]=temp;
            }
        }
    }
    if(c>n) cout<<"The number of cows are more than the stalls.";
    else cout<<"The largest min distance between the talls is:"<<func(stalls,n,c,st,end)<<endl;
    return 0;
}

bool isvalid(vector<int> &arr,int n,int c,int maxalloweddis){
    int cows=1,laspos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-laspos>=maxalloweddis){
            laspos=arr[i];
            cows++;
        }
        if(cows==c) return true;
    }
    return false;
}

int func(vector<int> &arr,int n,int c,int st,int end){
    int ans;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,c,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
