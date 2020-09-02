#include<iostream>
using namespace std;

class Complex{
    public: 
   Complex(int r=0 ,int i =0){
       real = r;
       img = i;
       
   }
   Complex operator+(Complex const &obj){
       Complex result ;
       result.real = real + obj.real;
      result.img = img + obj.img;
      return result; 
       
   }
friend ostream& operator<<(ostream& out, const Complex&c) 
{ 
    out << c.real; 
    out << "+i" << c.img << endl; 
    return out; 
} 
  
friend istream& operator>>(istream& in, Complex&c) 
{ 
    cout << "Enter Real Part "; 
    in >> c.real; 
    cout << "Enter Imaginary Part "; 
    in >> c.img; 
    return in; 
} 
Complex operator*(Complex const&c){
	Complex ans;
	ans.real = real*c.real-img*c.img;
	ans.img = real*c.img + img*c.real;
	return ans; 
}
   
   
   private: 
   int real ,img ;
};

int main(){
    Complex c1,c2,c3;
   cin>>c1;
   cin>>c2;
   c3 = c1+c2;
   cout<<c3;
   cout<<"\n";
   cout<<c1*c2;


}
