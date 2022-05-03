#include<iostream>
using namespace std;
int main (){
    int a=3;
    float b=5;
    int ans=b/a;
    cout<<"ans is  "<<ans <<endl;
    //here ans is 1 because the ans that is stored in
    //int value
    cout<<"proper ans is "<<(5.0/3)<<endl;
    //here ans comes in float value because 
    //it is the float in numerator...
}