// NAIVE APPROACH

#include <iostream>
#include<algorithm> // this i am using to get max()/min() function
using namespace std;

int main(){
    int m,n;
    cout<<"enter m and n respectively"<<endl;
    cin>>m>>n;
    for(int i=min(m,n);i>=1;i--){
        if(m%i==0 && n%i==0){
            cout<<i<<endl;
            break;
       }
}
}

//---------------------------------( OR )----------------------------------------------------

//USING EUCLID'S ALGORITHM:- divisor = divident*quetient + remainder
//gcd of a and b is same of gcd of b and remainder of a/b.
/*example = 
gcd of 56 and 42=
56/42=1(quetient),so,remainder =56-42*1=14
replace 56 and 42 with 42 and 14. repeat.
42/14=3(que),so remainder =42-14*3=0
so 14 is rem.*/

#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;// waise by C.M a is bigger than b, but user agar chutiya hai toh code likh sakte hai "invalid format" bolke
    cout<<"enter a and b respectively"<<endl;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}