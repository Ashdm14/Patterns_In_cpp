#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double basic,hra,da,pf;
    double total;
	char grade;
    cin>> basic>>grade;
    hra=(20.00/100.00)*basic;
    da=(50.00/100.00)*basic;
    pf=(11.00/100.00)*basic;
    int allow;
    switch(grade){
    case('A'):
    	allow=1700;
    	break;
    case('B'):
    	allow=1500;
    	break;
    default:
        allow=1300;
    	break;
    }
    total=basic + hra + da + allow - pf;
    int ans = round(total);
    cout<<ans<<endl;
    //cout<<"Total Salary "<<total
}