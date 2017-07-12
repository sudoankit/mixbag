#include<bits/stdc++.h>
using namespace std;


int main(){
 vector<int> v;
 int n,x;
 cin >> n;
 for(int  i = 0 ; i < n ; i++){
 cin >> x;
  v.push_back(x);
 }

 int k;
 int e;
 k = n;
while(k--){
 e = 0;
for(int i = 0 ; i < n ; i++){
  if(i%2 == 0)
  v[i] += 1;

 else
    v[i] -= 1;


    if(v[i] < 0)
    v[i] = n-1;


    if(v[i] > n - 1)
    v[i] = 0;

    if(v[i] == i){
     e++;
    }
}
if(e == n)
{cout <<"Yes" <<'\n';
break;}
}

if(k<0)
cout <<"No" <<'\n';



}


/**********************************

Editorials

#include <bits/stdc++.h>

#define MOD (1000000007)
#define EPS (1e-9)
#define INF (2117117117)
#define LLINF (2117117117117117117LL)
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define sqr(a) ((a) * (a))
#define sz(a) ((int) (a).size())
const double PI = acos(-1.0);

#ifdef _WIN32
#define LLD "%I64d"
#else
#define LLD "%lld"
#endif

typedef unsigned int uint;
typedef long long llong;
typedef long double ldouble;
typedef unsigned long long ullong;

#define TASK "task"

using namespace std;

int n, a, rot;

int main()
{
#ifdef lordf
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen(TASK".in", "r", stdin);
    //freopen(TASK".out", "w", stdout);
#endif

    scanf("%d %d", &n, &a);
    rot = n - a;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a);
        (a += ((i & 1) ? n - rot : rot)) %= n;
        if (a != i)
        {
            printf("No\n");
            retu
        }
    }
    printf("Yes\n");

    return 0;
}
*********************************************************************/
