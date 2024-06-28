/*
* lets learn tower of hanoi 
!yahape move the rods mtlb ye nahi ki koi variables banane hai aur unme reassign karke shifting karni hai!!!
?here we just need to show in console that  how to do it,in theory language,like which disk should be moved att what time.
*/

/*
You have three rods and n disks of different sizes. The objective is to move all the disks from the source rod to the destination rod using the auxiliary rod, following these rules:

Only one disk can be moved at a time.
A disk can only be moved if it is the uppermost disk on a rod.
No disk may be placed on top of a smaller disk.
Steps to Solve the Problem
Move n-1 disks from the source rod to the auxiliary rod.
Move the nth disk from the source rod to the destination rod.
Move the n-1 disks from the auxiliary rod to the destination rod.
*/
#include <iostream>
using namespace std;
void Toi(int n,char source,char destination, char auxilary)//---1
{
    if(n==1){// base case
        cout<<"move disk 1 from rod"<<source<<"to rod"<<destination<<endl;
        return;//means ab previous open recursive functions will continue/(complete their cycle)
    }
    Toi(n-1,source,auxilary,destination);//notice that here auxilary is treated as destination. as default second position ie of destination
    cout<<"move disk"<<n<<"disk from rod"<<source<<"to rod"<<destination<<endl;
    
    Toi(n-1,auxilary,destination,source);
}
int main() {
    int n; // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;
    Toi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}

/*
Explanation
Function towerOfHanoi: This is the recursive function that solves the Tower of Hanoi problem.
Parameters:
n: Number of disks to move.
source: The rod from which to move the disks.
destination: The rod to which the disks should be moved.
auxiliary: The auxiliary rod used for temporary storage.
Base Case: If there is only one disk (n == 1), simply move it from the source to the destination.
Recursive Case:
Move n-1 disks from the source rod to the auxiliary rod using the destination rod as a temporary storage.
Move the nth disk from the source rod to the destination rod.
Move the n-1 disks from the auxiliary rod to the destination rod using the source rod as a temporary storage.
*/