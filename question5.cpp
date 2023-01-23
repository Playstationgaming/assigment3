#include<iostream>
using namespace std;
int main(){
    char y;
    int a,b;
    cout<<"Enter an operator(+,-,*,/):";

    cin>>y;
    cout<<"Enter two numbers:"<<endl;
    cout<<"enter number ";
    cin>>a>>b;
switch(y){
    case ('+'):
    cout<< a << " + " << b << " = "<<a+b<<endl;
    break;

    
     case ('-'):
cout<< a << " - " << b << " = "<<a-b<<endl;
 break;
     case ('*'):
     cout<< a << " * " << b << " = "<<a*b<<endl;
      break;
     case ('/'):
     cout<< a << " / " << b << " = "<<a/b<<endl;
      break;
    
}

return 0;
}