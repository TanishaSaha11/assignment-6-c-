#include<iostream>
using namespace std;
bool isprime(int num){
    if (num<=1) return false;
    if(num==2) return true;
    if(num%2==0) return false;
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0) return false;
    }
}
void print_prime(int start,int end){
    for(int i=start;i<end;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    print_prime(a,b);
}