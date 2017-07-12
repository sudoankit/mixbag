#include<bits/stdc++.h>

using namespace std;

int main()
{
int t=0;
long long n;
cin>> t;
while(t--)
{
    int x;

    cin >> n;
    int* a[2];
    a[0]=new int[n*n];
    a[1]=new int[n*n];
    for(int j = 1; j <=n ; j++){

    for(int i = 1; i <=n ; i++){
      cin >> x;
     a[0][x] = j;
     a[1][x] = i;

    }
}
int sum=0;
for(int j = 1; j <n*n ; j++){
    sum+=abs(a[0][j+1]-a[0][j])+abs(a[1][j+1]-a[1][j]);
}
cout <<sum<<'\n';
delete[] a[0];
delete[] a[1];

/*for(int j = 1; j <=n*n ; j++){
    cout << a[0][j]<<" " ;
}
cout <<endl;
for(int j = 1; j <=n*n ; j++){
    cout << a[1][j]<<" " ;
}
cout <<'\n';*/
}
return 0;
}
