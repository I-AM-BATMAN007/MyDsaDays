#include <iostream>
using  namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int n2=n;
    int m=0;
    while(n>0){
        m= m*10+n%10;
        n=n/10;
    }
    // cout<<m<<endl;
    if(m==n2){
        cout<<"palindrome"<<endl;
    }
    else{
    cout<<"not a palindrome"<<endl;
    }
}

//------------( purely bhakchodi ke liye )---------------------------------

#include<iostream>
using namespace std;

int countDigits(int n){
    int count=0;
    if( n==0 ){
        return 1;
    }
    while(n>0){
        count++;
        n=n/10;
    }
     return count;

}

int palindrome(int n){
    int n2=n;
    int m=0;
    while(n>0){
        m=m*10+n%10;
        n=n/10;
    }
    if(m==n2){
        return 1;
    }
    else 
    return 0;
}

int main(){
    int n;
    int x=0;
    cout<<"Enter the number equal to or less than 3 digits."<<endl;
    cin>>n;

    if(countDigits(n)==1){
        cout<<"palindrome hie hota hai 1 digit ka numberr!!!!!!!"<<endl;
        x=1;
    }
    else if(countDigits(n)==2||countDigits(n)==3){
        if(countDigits(n)==2&&palindrome(n)==1){
            cout<<"hai bhai palindrome tera 2 digit wala number, hai palindrome."<<endl;
            x=1;
        }
        else if(countDigits(n)==3&&palindrome(n)==1){
            cout<<"hai bhai palindrome tera 3 digit wala number, hai palindrome."<<endl;
            x=1;
        }
        else if(countDigits(n)==3&&palindrome(n)==0){
            cout<<" nahi hai bhai palindrome tera 3 digit wala number, nhi hai palindrome."<<endl;
            x=1;
        }
        else if(countDigits(n)==2&&palindrome(n)==0){
            cout<<" nahi hai bhai palindrome tera 2 digit wala number, nhi hai palindrome."<<endl;
            x=1;
        }
    }
    else{
        cout<<"bola haina less than or equal to 3 digit number hie deneko."<<endl;
        x=0;
    }

    if(x==1){
        cout<<"badhiya chal bana toh paya koi palindrome number.\n AGAR FIRSE TRY KARNA HAI TOH ENTER 'YES' "<<endl;
        string s;
        cin>>s;
        if(s=="yes"||s=="YES"){
            main();
        }
        else{
            cout<<"kya likha hai smjha nahi"<<endl;
        }
    }
    else if(x==0){
        cout<<"wapis try kar chal jabtak nahi bana pata palindrome."<<endl;
        main();
    }

}
