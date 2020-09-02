#include<iostream>
#include<cmath>
using namespace std;
const float pi = 3.14159;
inline float sphereVolume(){
	float r,ans;
	cout<<"Enter the radius of the Sphere ";
	cin>>r;
	ans = 4*pi*pow(r,3)/3;
	return(ans);
}
int main(){
	cout<<sphereVolume();
	return 0;
}
