#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter the value to start from it :";
    cin>>n;
   
    for( n=n; n<100;n++){
       
        if(n%3==0){
            continue;
        }
          cout<<n<<endl;
    }
    

    return 0;
}