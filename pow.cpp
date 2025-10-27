#include <iostream>
using namespace std;
//we should convert power into binary form 
int main(){
    double x;
    long n,bf;
    double ans=1;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"Enter the power to which it is raised:";
    cin>>n;
    bf=n;
    if(x==1||x==0||n==1||n==0){
        if(x==0) cout<<0;
        if(x==1) cout<<1;
        if(n==0) cout<<1;
        if(n==1) cout<<x;
    }else{
        while(bf>0){
            if(bf%2==1){
                ans*=x;
            }
            x=x*x;
            bf/=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}