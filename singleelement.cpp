#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1,1,2,2,3,3,7,8,8};
    int n=nums.size();
    int st=0,end=n-1;
    int mid;
    if(n==1){
        cout<<"The single element presnt in the array is:"<<nums[n-1]<<endl;
    }else{
        while(st<=end){
            mid=st+(end-st)/2;
            if(mid==0 && nums[0]!=nums[1]){
                cout<<"The single element presnt in the array is:"<<nums[mid]<<endl;
            }
            if(mid ==0 && nums[n-1]!=nums[n-2]){
                cout<<"The single element presnt in the array is:"<<nums[mid]<<endl;
            }
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                cout<<"The single element presnt in the array is:"<<nums[mid]<<endl;
            }
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }else{
                if(nums[mid]==nums[mid-1]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
    }
}
