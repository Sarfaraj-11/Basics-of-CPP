#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the number :";
    cin>>a;
cout<<"Enter the another number :";
    cin>>b;

char op;
cout<<"Enter the oparatot :";
cin>>op;

switch(op){
    case 'a':
    cout<<a+b;
    break;
     case 'b':
    cout<<a-b;
    break;
     case 'c':
    cout<<a/b;
    break;
     case 'd':
    cout<<a*b;
    break;
default:
cout<<"Still working :";
break;
}

return 0;
    
}
