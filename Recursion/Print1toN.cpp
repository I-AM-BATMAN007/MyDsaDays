#include <iostream>
using namespace std;
void fun(int n){
    if(n==0)
    return;
    fun(n-1);
    cout<<n<<endl;
}//this is non-tail recursive fn as fn(n-1) is not in the end. in tail recursive it is in 
//end. if tail recursive is possible then we choose it as it saves time.
int main(){
    int n;
    cin>>n;
    fun(n);
}

//lets make this tail recursive(if possible)----------------------------------
#include <iostream>
using namespace std;

void fun1(int n,int k){
    if(n==0)
    return ;
    cout<<k<<endl;
    fun1(n-1,k+1);

}
int main(){
    int n;
    int k=1;
    cout<<"enter n"<<endl;
    cin>>n;
    fun1(n,k);
}
