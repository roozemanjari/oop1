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
bool operator==(Complex const&c){
	return(img==c.img&&real==c.real);
}
bool operator!=(Complex const&c){
	return(img!=c.img||real!=c.real);
}
   
   private: 
   int real ,img ;
};

int main(){
    Complex c1(1,1),c2(1,1),c3(1,2);
     if(c1==c2){
     	cout<<"c1 and c2 are equal\n";
	 }
	 else{
	 	cout<<"c1 and c2 are nott equal\n";
	 }
	   if(c1!=c3){
     	cout<<"c1 and c3 are not equal\n";
	 }
	 else{
	 	cout<<"c1 and c3 are equal\n";
	 }
   


}
