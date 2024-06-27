// naive way = check if number is repeatedly divisible by 2

// #include <iostream>
// using namespace std;

// bool isPow(int n){
//       if(n==0 || n==1){
//         return false;
//     }
//     while(n>=1){
//         if(n%2==0){
//             n=n/2;

//         }
//         break;
//         }
//     if(n==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// //or using another way
// bool isPow1(int n){
//     if(n==0){
//         return false;
//     }
//     while(n!=1){
//         if(n%2!=0){
//             return false;
//         }
//         n/=2;
//     }
//     return true;
// }
// int main(){
//      int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     if(isPow(n)){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
// }

//------------------------------------------------------------------------------
// if no of set bits is 1 then bingo! to count we will use brain ka treeka
#include <iostream>
using namespace std;

bool isPow(int n){
    if(n==0 || n==1){
        return false;
    }
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    if(count==1){
        return true;
    }
    else{
        return false;
    }   
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(isPow(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
    
    
    
    
 