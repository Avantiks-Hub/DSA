#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1,2,3,4,7,3,2,1};
    int n=nums.size();
    int mid,st=1,end=n-2;
    while(st<=end){
        mid=st+(end-st)/2;
        if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]){
            cout<<nums[mid];
            break;
        }else if(nums[mid]>nums[mid-1]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
}