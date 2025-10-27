#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={3,3,4};
    // int mnum,freq,n=nums.size();
    // mnum=0;
    // brute force approach
    
    // for(int i:nums){
    //     freq=0;
    //     for(int j:nums){
    //         if(i==j){
    //             freq++;
    //         }     
    //     }
    //     if(freq>n/2){
    //         mnum=i;
    //     }
    // }
    // cout<<"The majority element is:"<<mnum<<endl;


    // optimize approach

    // int mnum,freq=1,n=nums.size();
    // // array sorting
    // for(int i=0;i<n;i++){
    //     int min=i;
    //     for(int j=i+1;j<n;j++){
    //         if(nums[j]<nums[min]){
    //             min=j;
    //         }
    //     }
    //     int temp=nums[i];
    //     nums[i]=nums[min];
    //     nums[min]=temp;
    // }

    // for(int i=1;i<n;i++){
    //     if(nums[i-1]==nums[i]){
    //         freq++;
    //     }else{
    //         freq=1;
    //     }

    //     if(freq>n/2){
    //         mnum=nums[i];
    //     }
    // }
    // cout<<"The majority element is:"<<mnum<<endl;

    // moore's approach

    int mnum,n=nums.size();
    int freq=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            mnum=nums[i];
        }
        if(nums[i]==mnum){
            freq++;
        }else{
            freq--;
        }
    }
    cout<<mnum;



    return 0;
}
