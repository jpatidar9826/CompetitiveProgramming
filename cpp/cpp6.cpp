#include <bits/stdc++.h> 
using namespace std; 
class Polar 
{ 
public: 
 float r,th,X,Y; 
 void setvalue() 
 { 
 cout<<"Enter Polar Coordinates: "<<endl<<"r= "; 
 cin>>r; 
 cout<<"theta(in radians)= "; 
 cin>>th; 
 } 
 void show() 
 { 
 cout<<"Polar form:"<<endl<< "r= "<<r<<" and theta="<<th<<endl; 
 
 } 
 void convert() 
 { 
 X=r*cos(th); 
 Y=r*sin(th); 
 } 
 
}; 
class cartesian : public Polar 
{ 
float x,y; 
public: 
cartesian(); 
cartesian(Polar p) 
{ 
 x=p.X; 
 y=p.Y; 
} 
void show() 
 { 
 cout<<"Cartesian form:"<<endl<< "x = "<<x<<" and y ="<<y<<endl; 
 } 
}; 
int main() 
{ 
 Polar p; 
 p.setvalue(); 
 p.show(); 
 p.convert(); 
 cartesian c(p); 
 c.show(); 
} 
