// number of digits
#include <iostream>
#include <cmath> // for floor = i.e floor(10.5) = 10; as it returns nearest less integer value
using namespace std;


    int count(double n){
        if ( n==0 ){
            return 1;
        }
        return floor(log10(abs(n)))+1; /*
        ! important; remember log10(100) returns 2, because 10^2 equals 100; and log takes only positive values*/
    }
int main(){
    double n;
    cout<<"value daal:"<<endl;
    cin>>n;
    cout<<count(n);
}
//-------------------------------(OR)-----------------------------

#include <iostream>
using namespace  std;
int CountNoOfDigits(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count;
}
int main(){
    CountNoOfDigits();
}
