//  1 is neither prime nor compostie number
// fun fact:- 2 in the only even prime numebr
#include <iostream>
using namespace std;

 bool prime(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if (n==1)
    return false;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
        return false;
    return true;
 }
 int main(){
    if(prime()==true)
    cout<<"Prime number"<<endl;
    else
    cout<<"Not Prime number"<<endl;
 }

 //-------------------(acha treeka)---------------------------------------
/* we observed while traversing the loop above that the division always appear in pairs like (30,1)(==(1,30)),(2,15) etc
*if (x,y) is a pair (i.e x*y=n)
* and if x<=y
! then we observed that x*x<=n (x<=sqrt(n))
?so the idea is not to check from 2 to n-1 but to check from 2 to sqrt(n). cuz if i find any no btw them there is a number on the other side to form its pair.
*/
#include <iostream>
using namespace std;

 bool prime(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if (n==1)
    return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
    return true;
 }
 int main(){
    if(prime()==true)
    cout<<"Prime number"<<endl;
    else
    cout<<"Not Prime number"<<endl;
 }

//------------(time for more fokin optimization)------------------------
/* as we also know a number not divisible by 2 & 3 are also not divisible by its multiples.
* so now the leftover numbers become 5,7,11,13,17...sqrt(n)
*/
#include <iostream>
using namespace std;
bool prime(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if (n==1)
    return false;
    if(n==2 || n==3)// we mentioning exclusively cuz of line 66.
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5;i*i<=n;i+6)//very smart move as in req pattern 5,7,11.. it was difficult to implement cuz one time it is +2 other time it was +4.
        if(n%i==0 || n%(i+2)==0)// so humne +2 wala part yaha nipta liya hai.
        return false;
    return true;
 }
 int main(){
    if(prime()==true)
    cout<<"Prime number"<<endl;
    else
    cout<<"Not Prime number"<<endl;
 }
