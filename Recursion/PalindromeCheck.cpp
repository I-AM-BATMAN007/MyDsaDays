#include<iostream>
#include <string>
using namespace std;

bool isPalindrome(string s,int start,int end){//include string library

    if(start>=end)//initially ye false hie rahega,jabtak start and end equal na hojaye, aur btw agar woh equal hogaye mtlb, yahatak palindrome hoggaya,to usko automatticly true bolke return kardeenge
    return true;
    if(s[start]!=s[end])
    return false;
    return isPalindrome(s,start+1,end-1);

}

int main(){
    string s;
    cin>>s;
    int start=0;
    int end=s.length()-1;
    if(isPalindrome(s,start,end))
    cout<<"true";
    else
    cout<<"false";
}
//FOR CPP!!!!!
// Base Case:

// if (start >= end):
// If the start index is greater than or equal to the end index, the string (or substring) is a palindrome.
// Recursive Case:

// if (s[start] != s[end]):
// If the characters at the start and end indexes are different, the string is not a palindrome.
// return isPalindrome(s, start + 1, end - 1):
// Recursively check the substring that excludes the first and last characters.


/* beautiful concept
?wrapper function:jagha jagha parameter bharne se acha ak parent function banado jo main fn call karega required parameter bharke
!A wrapper function is a function that encapsulates another function to provide a more 
!convenient or simplified interface. It often handles setup, cleanup, or parameter
! conversion before calling the underlying function. Wrapper functions can also add 
!additional functionality or modify the behavior of the original function. 
*/
