#include<iostream>
using namespace std;
void print_odd(int start,int end){
    for(int i=start;i<end;i++){
        if(i%2!=0){
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
    print_odd(a,b);
}