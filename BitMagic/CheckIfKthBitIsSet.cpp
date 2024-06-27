// To check if the kth bit is set or not = by set we mean 1 .

/* to check the last bit.
? if(n&1 != 0)
? print("yes");
? else
? print("no");
*/

/* to check the kth bit.
*we can compare using & i.e n&(number which has kth bit as set(1) in binary form).
* shortcut formula for that is 2^(k-1).
*/

// naive way
#include <iostream>
using  namespace std;

int main(){
    int n,k;
    cout<<"enter n and k"<<endl;
    cin>>n>>k;
    int x=1;
    for(int i=1;i<=k;i++){
        x=x*2;
    }
    if(n&x){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}


// efficient way
//mtd 1.
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"enter n and k"<<endl;
    cin>>n>>k;
    int x=(1<<(k-1));// i.e 2^(k-1)
    if(n&x){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

// mtd 2.
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"n aur k dal"<<endl;
    int x=(n>>(k-1));
    if(x&1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
