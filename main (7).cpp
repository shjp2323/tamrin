#include <iostream>
#define pi 3.14
using namespace std;
float shadi(int t)
{
    return pi*t*t;
}
float jp(int o)
{
    return pi*o*2;
}
int main()
{
    int r;
    cout<<"enter Radius:";
    cin>>r;
    cout<<"Area of circle is:"<<shadi(r)<<endl;
    cout<<"perimeter of circle is :"<<jp(r);
    return 0;
}