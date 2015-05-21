//Amalgamated Artichokes - Manuel Sousa - C++ - PORTUGAL
#include <iostream>
#include <tgmath.h>
#include <iomanip>
#include <stdio.h>
 
using namespace std;
 
int a=0,b=0,c=0,d=0,p=0,n=0;
 
float price(int k)
{
    return p*(sin(a*k+b)+cos(c*k+d)+2);
}
 
int main() {
  double m=0,t=0,cur=0;
  cin >> p >> a >> b >> c >> d >> n;
  t=price(1);
  for(int k=2;k<=n;k++)
  {
      cur=price(k);
      if(cur>t)
      t=cur;
      else
      {
            if(m<(t-cur))
            m=t-cur;
      }
 
  }
  printf("%.9f",m);
  return 0;
}
 
