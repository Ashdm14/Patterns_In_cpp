/* 
E
D E
C D E
B C D E
A B C D E

*/







#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1; i<=n; i++){
    for (int j = 1; j<=i; j++)
    {
     char start='A'+n-1;
     char c= start-i+j;
     cout<<c;
        
    }cout<<endl;
    
}

}

