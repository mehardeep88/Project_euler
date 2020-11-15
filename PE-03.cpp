/* 02-PROJECT EULER
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
  ll n,max{1}; cin >> n;
  for (ll i=2;n>1;i++)
  {
    while (n%i==0)
    {
      cout << i << ",";
      n=n/i;
      if (max<i)
      {
        max = i;
      }
    }
  }
  cout << max;
  return 0;
}
