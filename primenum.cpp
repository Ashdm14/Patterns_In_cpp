#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the numberr : ";
cin>>n;
for(int i=2; i<=n; i++){
    for(int k=2; k<=i; k++){
        if(i%k==0)
        {
            break;
        }
if(i==k){
 cout<<i;
        }
    }
}
}
