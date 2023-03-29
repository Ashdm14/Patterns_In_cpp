#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int k=0;
        int number=1;
        int j=n-1;
        int arr[100];
        while(k<j){
             arr[k]=number;
             k++;
            number++;
            arr[j]=number;
            j--;
            if(arr[k]==arr[j]){
                arr[k]=number;
            }

        }
        for(int m=0; m<n; m++){
            cout<<arr[m]<<" ";
        }
    }
}


/*You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.*/