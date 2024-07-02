//The cost of a stock on each day is given in an array. Find the maximum profit that
// you can make by buying and selling on those days. If the given array of prices is
// sorted in decreasing order, then profit cannot be earned at all.

#include <iostream>
using namespace std;

int stock(int price[], int n){//logic here is we buy at bottom and sell at peak,again and again and add the sum as total profit
//this way we can maximize out profit
    int profit=0;
    for(int i=0;i<n-1;i++){
        if(price[i]<price[i+1]){
            profit+=price[i+1]-price[i];

        }
    }
    cout<<profit;
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    stock(price,n);
}