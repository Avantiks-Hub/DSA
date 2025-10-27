#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int>& arr,int n,int pat,int maxalltime);
int timetaken(vector<int>& arr,int n,int pat,int st,int end);

int main(){
    vector<int> board={40,30,10,20};
    int n=board.size(),pat=2;
    int st=board[0],end=0;
    for(int i=0;i<n;i++){
        st=max(st,board[i]);
        end+=board[i];
    }
    if(pat>n){
        cout<<"The number of the painters are more than the number of the boards. ";
    }else{
        cout<<"The min time to paint the board taken by painter:"<<timetaken(board,n,pat,st,end)<<endl;
    }
    return 0;
}

bool isvalid(vector<int>& arr,int n,int pat,int maxalltime){
    int painters=1,ttaken=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxalltime){
            return false;
        }

        if(ttaken+arr[i]<=maxalltime){
            ttaken+=arr[i];
        }else{
            ttaken=arr[i];
            painters++;
        }
    }
    return painters <= pat;
}

int timetaken(vector<int>& arr,int n,int pat,int st,int end){
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        cout<<mid<<endl;
        if(isvalid(arr,n,pat,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}