#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" "<<" ";
        } for(int k=1;k<=i;k++){
            cout<<i+k-1<<" ";
            
        }for(int x=i; x>1; x--){
            cout<<i+x-2 <<" ";

        }
        cout<<endl;
    
    }



}
/*
       1
     2 3 2
   3 4 5 4 3
 4 5 6 7 6 5 4 
     

*/