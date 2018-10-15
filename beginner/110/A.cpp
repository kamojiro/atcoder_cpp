#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  int ans;
  int d[3];
  scanf("%d%d%d", &d[0], &d[1], &d[2]);
  sort(d,d+3);
  ans = d[2]*10+d[0]+d[1];
  cout << ans << "\n";
  return 0;
}
