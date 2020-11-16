/* 06-PROJECT EULER
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
  int sum{0},sum1{0};
  int n=10;
  //for (int i=1;i<=100;i++)
  //{
  sum = (n*((2*n)+1)*(n+1))/6;
  //}
  //for (int i=1;i<=100;i++)
  //{
  sum1=(n/2)*(n+1);
  //}
  cout << (sum1*sum1)-sum;
  return 0;
}
