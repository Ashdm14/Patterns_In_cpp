#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" " << " ";
        }
        for(int k=1; k<=i;k++){
            cout<<k<<" ";

    }
    for(int m=2; m<=i;m++){    // for(int m=i-1; m>=1; m--){cout<<m;}//
        cout<<m-1<<" ";
    }
    cout<<endl;
    }
}
/*
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1


*/