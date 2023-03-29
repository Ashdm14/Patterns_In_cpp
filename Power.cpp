#include<iostream>
using namespace std;

int main() {
int n;
int x;
cin>>n>>x;
int result = 1;
for(int i = 0; i < x; ++i)
{
    result *= n;
}

cout << result << endl;
}

