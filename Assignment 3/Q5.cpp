#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

float calculateCharges(float f){
	float ans;
	if(f<24){
		if(f>3){
		ans = 0.5*(f-3);	
		}
		ans += 2;	
	}
	else{
	ans = 10;	
	}
return(ans);	
}
int main(){
	int j=0;
	float a,sumh=0,suma=0;
   vector<float> b;
   cout<<"Enter the hour : ";
   cin>>a;
   b.push_back(a);
   j++;
	while(a>0){
		cout<<"Enter the hour or press 0 for table : ";
		cin>>a;
		b.push_back(a);
		j++;
	}
	j--;
	cout<<"Car		"<<"Hours		"<<"Charge		"<<"\n";
	for(int i=1;i<=j;i++){
	cout<<fixed<<setprecision(2)<<i<<"		"<<b[i-1]<<"		"<<calculateCharges(b[i-1])<<"\n";	
		sumh += b[i-1];
		suma += calculateCharges(b[i-1]);
	}
	cout<<"Total		"<<sumh<<"		"<<suma;
}
