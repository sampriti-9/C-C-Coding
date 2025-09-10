#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num) {
    if(num<=1) return false;
    for(int i =2; i<=sqrt(num); i++){
    if(num%i==0) return false;
}
return true;
}
int main(){
    int n;
    cout<<" enter the number";
    cin>>n;
    int sum=0;
    for(int i=2; i<=n;i++)
    {
        if(isprime(i)){
            sum=sum+i;

        }

    }
    cout<<" sum of all prime number is"<<n<<"is"<< sum << endl;
    return 0;


}

