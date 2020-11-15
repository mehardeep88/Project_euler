/* 04-PROJECT EULER
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool palin(int n)
{
  int rev{0};
  int nr = n;
  while (nr>0)
  {
    rev = rev*10+nr%10;
    nr=nr/10;
  }
  return n==rev;
}
main()
{
  int max{-1};
  for (int i=999;i>=100;i--)
  {
    for (int j=999;j>=100;j--)
    {
      int product = i*j;
      if (max<product && palin(product))
      {
        max = product;
      }
    }
  }
  cout << max;
  return 0;
}
