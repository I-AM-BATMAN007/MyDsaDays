//general subset
//we can generate all subset for length n string using subsets for length n-1 string. 
// ex if for AB subset is " ","b","a","ab".so subset for ABC ,then for that " b"of ab, 
//we can add c(cuz iit is newly added) with b or dont(so,2 possibility(sbset)ie bc or simple
// b alone)

/*

The idea is to consider two cases for every character.

(i) Consider current character as part of the current subset
(ii) Do not consider current character as part of the current subset.
Let us understand the recursion with an example "abc". Every node in the below tree represents the string curr.
 

           ""
        /      \
       a        ""
     /   \      /  \
    ab    a     b    ""
  /  \   / \   / \   / \
 abc ab ac  a bc  b c

At root, index = 0.
At next level of tree index = 1
At third level, index = 2
At fourth level index = 3 (becomes equal to string length), so we print the subset.

*/

#include <bits/stdc++.h>
using namespace std;

// str : Stores input string
// curr : Stores current subset
// index : Index in current subset, curr
void powerSet(string str, int index = 0, string curr = "")
{
    int n = str.length();

    // base case
    if (index == n) {
        cout << curr << endl;
        return;
    }

    // Two cases for every character
    // (i) We consider the character
    // as part of current subset
    // (ii) We do not consider current
    // character as part of current
    // subset
    powerSet(str, index + 1, curr + str[index]);
    powerSet(str, index + 1, curr);
}

// Driver code
int main()
{
    string str = "abc";
    powerSet(str);
    return 0;
}
