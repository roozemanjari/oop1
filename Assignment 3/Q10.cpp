#include<iostream>
#include<string>
using namespace std;

bool testPalidrome(string s,int i,int f){	
		if(s[i]==s[f])
		{
		if(i==f||i==f-1) return(1);
		else{
			return(testPalidrome(s,i+1, f-1));
		}
		}
		else{
			return(0);
		}
}
int main(){
	string s;
	cin>>s;
	cout<<testPalidrome(s,0,s.length()-1);
	
}
