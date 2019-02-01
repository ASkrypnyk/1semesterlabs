#include <iostream>

using namespace std;
struct Point{
int x;
int y;
 };
int main()
{
    setlocale(LC_ALL, "Russian");
    int x,y,k1,k2,dx1, dx2, dy1, dy2;
Point p1, p2, p3 ,p4;
cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>p4.x>>p4.y;
dx1=p2.x-p1.x;
dx2=p4.x-p3.x;
dy1=p2.y-p1.y;
dy2=p4.y-p3.y;
x=((p1.x*p2.y-p2.x*p1.y)*dx2-( p3.x*p4.y-p4.x*p3.y)*dx1)/((p1.y-p2.y)*dy2-(p3.y-p4.y)*dx1);
y=((p3.y-p4.y)*x-(p3.x*p4.y-p4.x*p3.y))/dy2;
k1=dx1/dy1;
k2=dx2/dy2;
if (!(((p1.x<=x)&&(p2.x>=x)&&(p3.x<=x)&& (p4.x>=x))||((p1.y<=y)&&(p2.y>=y)&&(p3.y<=y)&&(p4.y>=y)))
    {
      cout<<"Отрезки не персекаются"<<endl;
    }

    if (k1==k2)
    {
       cout<<"Отрезки паралельны"<<endl;
    }
    if (((p1.x<=x)&&(p2.x>=x)&&(p3.x<=x)&& (p4.x>=x))||((p1.y<=y)&&(p2.y>=y)&&(p3.y<=y)&&(p4.y>=y))&& (k1!=k2))
    {
         cout<<x*(-1)<<" "<<y<<endl;
    }
    return 0;


}
