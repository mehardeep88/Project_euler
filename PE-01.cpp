/* 01-PROJECT EULER
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
  ll n,three,five,fif;
  cin >> n;
  for (ll int i=0;i<n;i++)
  {
    ll sum{0};
    three=(n-1)/3;
    five=(n-1)/5;
    fif = (n-1)/15;
  }
  cout << 3*((three*(three+1))/2)+5*((five*(five+1)/2))-15*(fif*(fif+1)/2);
  return 0;
}
