#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height);
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int maxwater=maxArea(height);
    cout<<maxwater;
    return 0;
}
int maxArea(vector<int>& height) {
    int rp=0,lp=height.size()-1;
    int width,high,maxwater=0;
    while(rp<lp){
        width=lp-rp;
        high=min(height[rp],height[lp]);
        maxwater=max(maxwater,width*high);
        (height[rp]<height[lp])?rp++:lp--;
    }
    return maxwater;
}