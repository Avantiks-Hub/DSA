#include <iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mid,tar=0,st=0,end=n-1;

    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]>=arr[st]){
            if(arr[st]<=tar && tar <= arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(arr[mid]<=tar && tar<=arr[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return 0;
}