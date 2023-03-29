#include<bits/stdc++.h>
using namespace std;
void firstfit(int process_size[], int m, int blocksize[], int n){
 int allocation[m]={-1};
 for(int i=0; i<m; i++){
for(int j=0; j<n; j++){
    if(blocksize[j]>=process_size[i]){
        allocation[i]=j;
        blocksize[j]=blocksize[j]-process_size[i];
    }
    else
    cout<<"Not Allocated";
}


 }
 }
 int main(){
   int process_size[]={200,365,220,296,318};
int blocksize[]={400,500,600,200,100};
int m= sizeof(process_size)/sizeof(process_size[0]);
int n=sizeof(blocksize)/sizeof(blocksize[0]);

 }