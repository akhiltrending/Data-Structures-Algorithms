#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout<<"value of a is "<< a <<endl;
    float b=1.24;
    cout<< "value of  b is "<< b<<endl;
    bool c=false;
    //here in c it will print 0 beacuse 0 mean flase in bool..
    cout <<" value of c is "<< c << endl;
    bool d =true;
    //here in d it will print 1 beacuse 1 mean true in bool...
    cout <<"value of d is "<< d << endl;
    double e =1.234;
    cout<<"value of e is "<<e <<endl;
    char ch='a';
    cout <<"the value of ch is "<< ch <<endl;

    
    //for getting the size of the respective data type
    cout<<"the size of int is "<< sizeof(a)<<endl;
    cout<<"the size of float is "<<sizeof(b)<<endl;
    cout<<"the size of bool is "<<sizeof(c)<<endl;
    cout<<"the size of double is "<<sizeof(e)<<endl;
    cout<<"the size of char is "<<sizeof(ch)<<endl;
}