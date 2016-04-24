#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
    double x1,x2,y1,y2,dis;
    cin>>x1>>y1>>x2>>y2;
    dis=pow(pow(x2-x1,2)+pow(y2-y1,2),0.5);
    cout<<fixed<<setprecision(4)<<dis<<endl;
    return 0;

}

