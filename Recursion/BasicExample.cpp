#include <iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
    return;
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}
int main(){
    fun(3);
    return 0;
}
//isme f3 chalega pehele then while f3 is halfway-done f2 starts then while f2 also comes halfway(line7)
//f1 starts then while f1 also comes halfway(line7) f0 starts but due to line 6,f0 ends,then
//control back to f1 and f1 contiunes by executing line 8 and ends,then f2 continues...so on..