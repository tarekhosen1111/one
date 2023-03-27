#include<bits/stdc++.h>
using namespace std;
#define mod 10000007
int dp[10003];
int a,b,c,d,e,f;
int fn(int n)
{
   if(n==0)return a;
   if (n == 1) return b;
   if (n == 2) return c;
   if (n == 3) return d;
   if (n == 4) return e;
   if (n == 5) return f;
   if(dp[n]!=-1)return dp[n];
   int res=((fn(n-1)%mod) + (fn(n-2)%mod) + (fn(n-3)%mod) + (fn(n-4)%mod) + (fn(n-5)%mod) + (fn(n-6)%mod))%mod;
   dp[n]=res;
   return dp[n];
}
int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
