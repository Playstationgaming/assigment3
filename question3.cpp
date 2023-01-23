#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enetr selling price: ";

    cin>>sp;
    cout<<"enter cost price:";
    cin>>cp;
    if(sp>=cp){
        cout<<"profit="<<sp-cp;
    }
    else{
        cout<<"Loss="<<cp-sp;
    }

return 0;
}