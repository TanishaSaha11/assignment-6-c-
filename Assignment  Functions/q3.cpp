#include<iostream>
using namespace std;
void eligibility(int age){
    if(age>=18){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    eligibility(age);
}