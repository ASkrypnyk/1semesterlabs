#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
return pow(x,3)-2*x-4;
}
double g(double y){
return sin(y)- 2*y-5;
}
double l(double z){
return z-log(z)-2;
}
int main(){
    double (*pFunc)(double px);
    double a,b,f1,f2,shag=pow(10,-7),px,eps=0.001;
    int nomerfynkcii;
    cin>>nomerfynkcii>>a>>b;
    switch (nomerfynkcii){
case 1:
    pFunc=f;
    break;
   case 2:
        pFunc=g;
    break;
    case 3:
 pFunc=l;
    break;
    }
f2 = (pFunc(a + shag) - 2 * pFunc(a) + pFunc(a - shag)) / (shag * shag);
if (pFunc(a)*f2<0)
{
    px=a;
}
else
{
    px=b;
}

while(pFunc(px)!=eps){
f1=(pFunc(px+shag) - pFunc(px - shag)) / (2 *shag);
px=px-(pFunc(px)/f1);
}
cout<<px;
    return 0;

}
