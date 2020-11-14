/* 02-PROJECT EULER
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fibo(int n)
{
  int a = 1;
  int b = 1;
  int sum{0};
  while (1)
  {
    int c = a+b;
    if (c>=n)
    {
      return sum;
    }
    if (c%2==0)
    {
      sum+=c;
    }
    a = b;
    b = c;
    c = a;
  }
  return sum;
}

main()
{
  int n; cin >> n;
  cout << fibo(n);
  return 0;
}
