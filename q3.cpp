#include <iostream>
using namespace std;
class Drinks
{
int n,a,b,c,i,j,rem,ans;
public:void Shop()
{ cin>>n>>a>>b>>c;
for (i = 0; i <= b; ++i)
{
for (j = 0; j <= c; ++j)
{
rem = n-i-j-j;
ans += (rem >= 0 && rem * 2 <= a);
}
}
cout << ans;
}
};
int main()
{
Drinks Buy;
Buy.Shop();
return 0;
}
