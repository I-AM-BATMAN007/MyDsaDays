//lcm(a,b)= (a*b)/gcd(a,b)
//or
//(a*b)=lcm(a,b)*gcd(a,b)

//naive way
// we observed lcm is always equal or greater than max(a,b). and is the first multiple of both
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int rev = max(a,b);
     while(true){
         if(rev%a==0 && rev%b==0){
             cout<<"LCM of "<<a<<" and "<<b<<" is "<<rev<<endl;
             break;
             }
         rev++;
     }
}

//--------------------------------( my way )-------------------------------------------

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else
     return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b)<<endl;
}