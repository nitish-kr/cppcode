#include <iostream>
using namespace std;

int main()
{

    int d[] = {100, 50, 20, 10, 5, 2, 1};
    int n,t=0;
    cin>>n;
    cout<<n<<endl;
    do
    {
      cout<<n/d[t]<<" note(s) of R$ "<<d[t]<<",00"<<endl;
      if (n >= d[t])
      n -= d[t] * (n / d[t]);
    }
    while(d[t++] != 1);
    return 0;
}


