#include <iostream>
#include <vector>
using namespace std;

int bookallocated(vector<int>& arr,int stu,int st,int end,int n);
bool isvalid(vector<int>& arr,int stu,int n,int maxallpages);
int main(){
    vector<int> book={1,2,3,4};
    int stu=2,n=book.size();
    int st=1,end=0;
    for (int i:book){
        end+=i;
    }
    if(stu>n){
        cout<<"The number of students are more than the number of books."<<endl;
    }else{
        cout<<"The min pages a student will get when each student gets max pages is:"<<bookallocated(book,stu,st,end,n)<<endl;
    }
    return 0;
}

bool isvalid(vector<int>& arr,int stu,int n,int maxallpages){
    int stut=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxallpages){
            return false;
        }
        if(pages+arr[i]<=maxallpages){
            pages+=arr[i];
        }else{
            pages=arr[i];
            stut++;
        }
    }
    if(stut<=stu){
        return true;
    }else{
        return false;
    }
}

int bookallocated(vector<int>& arr,int stu,int st,int end,int n){
    int ans;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,stu,n,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;

}