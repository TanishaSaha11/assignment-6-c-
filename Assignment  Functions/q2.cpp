#include<iostream>
using namespace std;
float area_of_circle(float radius){
    return 3.14*radius*radius;
}
float circumference_of_circle(float radius){
    return 2*3.14*radius;
}

int main(){
    float r;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Area="<<area_of_circle(r)<<endl;
    cout<<"Cirmuference="<<circumference_of_circle(r)<<endl;

}