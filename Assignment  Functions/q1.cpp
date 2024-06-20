#include<iostream>
using namespace std;
void square(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number of numbers:";
    cin>>n;
    square(n);
}
