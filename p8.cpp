#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n; i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<n-j+1;
    }cout<<endl;
}

}
/*n=4
4 3 2 1
4 3 2
4 3
4*/