#include <iostream>
using namespace std;

int Sum(int n){
    if(n==0)
    return;
    return n%10+ Sum(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
}
//-------------------------------

#include<iostream>
using namespace std;

int Sum(int n){
    if(n<=9)// agar n kat-katke single digit  banjata hai to seedha n ko bhejdo.
    return n;
    return n%10+ Sum(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
}


//for sum of digits we prefer iterative way and not these recursive way bcuz of space complexity
//which is aux(d) here but aux(1 ) in iterative
