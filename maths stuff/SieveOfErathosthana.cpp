//no of prime numbers less than or equal to the given number

// normal method-----------------------------------------------------------------
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }

    if (n == 2 || n == 3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
        return true;//means i is prime number
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}

//----------------------------------------------------------------------------
// sieve method= ak array banayenge jisme saare number honge;unko hum initailly true rakhenge mtlb woh sab prime no hai;
//then we choose each prime number sequentially(btw at first all are prime cuz we marked true) i.e 2 and mark all multiples of it as false(i.e non-prime)
//Find the next number in the list that is still marked as prime. i.e 3 and mark all multiples of it as false. and goes on.
//in the end print the remaining prime number. cuz they are real prime no.



/* kuch basics hojaye:-
? In C++, a vector is a dynamic array that can grow and shrink in size.
? use vector library . vector<bool> boolVector; // Add some boolean values:- boolVector.push_back(true);
!You can access elements in a vector<bool> using the [] operator or the at()
*/
#include <iostream>
#include <vector>
using namespace std;

void sieve(int n)
// Since the function’s goal is to output the prime numbers directly to the console rather
//  than returning a result to the caller, it is appropriate to use void as the return type.
{
    vector<bool> boolVector(n+1, true);// Create a boolean vector and initialize all entries as true cuz at first we consider them all as prime numbers.
    //size given as n + 1 to ensure that we can represent all numbers from 0 to n inclusive.
    boolVector[0]=boolVector[1]=false;// 0 and 1 are not prime numbers.
    for(int i=2;i*i<=n;i++)
    {
        if(boolVector[i]==true)
        {
            for(int j=2*i;j<=n;j=j+i)//remember humko no ke multiple ko choose karke false karna hai;not the number itself
            {
                boolVector[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(boolVector[i]==true)
        {
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    sieve(n);
}

