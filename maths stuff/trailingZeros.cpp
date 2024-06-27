// using naive approach
#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  long x = fact(n);

  // beauty starts from below this line
  int count=0;
  while(x%10==0){
    count++;
    x=x/10;
  }
  cout<<count;
}




/*
*using sigma appraoch i.e effecient approach
! we observe that the trailing zero are equal to the number of 5s in  prime factor of n
?formula came out to be:- n/5 + n/25 + n/125 + ....
 */

#include <iostream>
using  namespace std;

int trailingZero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
    res = res + n/i;
    }
    return res;
}

int main(){

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<trailingZero(n);
}

