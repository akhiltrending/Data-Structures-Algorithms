#include<iostream>
using namespace std;
int main(){
    int left=5<<1;
    cout<<left<<endl;
    int left2 =5<<4;
    cout<<left2<<endl;
    //generally left means padding 0 at the end
    //and multiply of 2 (ex: left2=5*2*2*2*2)
    int right=5>>1;
    cout<<right<<endl;
    int right2=5>>6;
    cout<<right2<<endl;
    //genearlly right means padding 0 at the start
    //and divison of 2 (ex: right=5/2(ans is in int ))
}