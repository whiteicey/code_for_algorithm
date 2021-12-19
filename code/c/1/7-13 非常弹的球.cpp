#include<iostream>
using namespace std;
int main()
{
    double w,p,g=9.8;
    scanf("%lf%lf",&w,&p);
    //cin>>w>>p;
    w=w/100;
    p=p/100;
    double ans=0;
    double E=1000;
    double v=E*2/w;
    double s=v/(2*g);
    while(E>=1e-12)
    {
        ans+=2*s;
        E=E-E*p;
        v=E*2/w;
        s=v/(2*g);
    }
    printf("%.3f\n",ans);
    return 0;
}
