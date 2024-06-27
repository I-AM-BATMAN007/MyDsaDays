// NAIVE way
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"number :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
//-----------------------------( effecient way )----------------------------------
/*
*we noticed that divisors always appeared in pairs like 30=(1,30),(2,15),(3,10),(5,6).
*if (x,y) is a pair (i.e x*y=n)
* and if x<=y
! then we observed that x*x<=n (x<=sqrt(n))
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"number :"<<endl;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        
        if(i != n/i){ // other half of pair jo nahi aapaye unko aise print karenge
            cout<<n/i<<" ";
        }
    }    
    }

}
//--------------------------( effecient way with sorted order )------------------------------------------

#include <iostream>
using namespace std;
void divisors(int n)
{
    int i;
    for( i=1;i*i<n;i++)/* make sure it is NOT less than or EQUAL TO n  */
    {//for divisors from  1 to sqrt(n)
        if(n%i==0)
        {
             cout<<i<<" ";
        }
    }        
    while(i>=1)
    {//for divisors from sqrt(n) to n
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
        i--;
    }
    //instead of while could have used for(;i>=1;i--)
}                       
int main(){
    int n;
    cout<<"number :"<<endl;
    cin>>n;
    divisors(n);
    }
    