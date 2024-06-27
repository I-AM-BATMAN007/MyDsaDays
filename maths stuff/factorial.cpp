#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    long long fact=1;
    // while(n>0){
    //     fact=fact*n;
    //     n=n-1;
    // }
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}

//using recursion

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
  cout<<fact(n);
}