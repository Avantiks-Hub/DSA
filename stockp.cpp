#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>prices={7,1,5,3,6,4};
    int maxprofit=0,bestbuy=prices[0];

    for(int i=0;i<prices.size();i++){
        if(prices[i]>bestbuy){
            maxprofit=max(maxprofit,prices[i]-bestbuy);    
        }
        bestbuy=min(bestbuy,prices[i]);
    }
    if(maxprofit<=0){
        cout<<"The maxprofit we attained from this data is: 0"<<endl;
    }else{
        cout<<"The maxprofit we attained from this data is:"<<maxprofit<<endl;
    }
}