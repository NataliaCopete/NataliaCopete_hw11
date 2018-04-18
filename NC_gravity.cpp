#include <iostream>

using std::cout;
using std::endl;


double G;
double M;


/* 
x posicion, v velocidad y t tiempo

*/
double f(double t,double x, double v ){
return -G*M/(x*x);

}

double g(double t, double x, double v)
{
 return v;

}

/*
h es el paso
kxi pendiente i con  respecto a x
kvi pendiente i con respecto a v

*/
int main(){

float h;
float x;
float kx1;
float kx2;
float kx3;
float kx4;
float kv1;
float kv2;
float kv3;
float kv4;
float v;
float t;
float xo=1000;
float vo=7;


h=0.0001;
G=100;
M=1000;
t=0;
x=xo;
v=vo;

while(x>0.01*xo){

kv1= f(t,x,v);
kv2= f(t,x,v+kv1*h/2);
kv3=f(t,x,v+kv2*h/2);
kv4=f(t,x,v+kv3*h);

kx1=g(t,x,v);
kx2= g(t,x+kx1*h/2,v);
kx3=g(t,x+kx2*h/2,v);
kx4=g(t,x+kx3*h,v);

x=x+h*1/6*(kx1+2*kx2+2*kx3+kx4);
v=v+h*1/6*(kv1+2*kv2+2*kv3+kv4);
t=t+h;

cout<<x<<" "<<v<<" "<<t<<endl;
}


return 0;
}
