#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        cout<<"The number is negative and skipped"<<endl;
    }
return 0;
}