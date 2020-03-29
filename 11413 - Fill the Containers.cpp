/*Never Give up*/
/*
Problem  :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2408
Verdict     :AC
Time         :.00sec  1462th
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define sz(a)              a.size()
#define ff first
#define ss second
#define all(a)          a.begin(), a.end()
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define pf1(a)        pf("%d\n",a);
#define PI  acos(-1)
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li            list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
#define en1      pf("Entered 2\n")
#define gcd(a,b) __gcd(a,b)
#define sp  ' '
// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    100000

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48



int main()
{
    faster
    int n,mm;
    while(cin>>n)
    {
        cin>>mm;
        int arr[n+1];
        ll arr1[n+1];
        cin>>arr[0];
        arr1[0]=arr[0];
        int mn=arr[0];
        for(int i=1; i<n; i++)
        {
            cin>>arr[i];
            mn=max(mn,arr[i]);
            arr1[i]=arr[i]+arr1[i-1];
           // cout<<"arr1 "<<arr1[i]<<endl;
        }

        int l=mn,r=arr1[n-1];
       // cout<<arr1[n-1]<<endl;
        int result=INT_MAX;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            int ck=0;
            bool flag=false;
            ll tmp=0;
           // cout<<l<<sp<<m<<sp<<r<<endl;
            for(int i=0; i<n; i++)
            {
          //  cout<<"\ni "<<i<<endl;
         //   cout<<"tmp "<<tmp<<endl;
         //   cout<<"arr1 "<<arr1[i]<<endl;
         //   cout<<"diff "<<arr1[i]-tmp<<endl;

            bool f=false;
                if(arr1[i]-tmp>m)
                {
               // cout<<"condition 1"<<endl;
                    tmp=arr1[i-1];
                    ck++;
                }
                else if(arr1[i]-tmp==m)
                {
                f=true;
              //  cout<<"condition 2"<<endl;
                    tmp=arr1[i];
                    ck++;
                }
                 if(i==n-1&&arr1[i]-tmp<=m&&!f)
                {
              //  cout<<"condition 3"<<endl;
                    ck++;
                    tmp=arr1[i];

                }
                if(ck>mm)
                {
                    flag=true;
                    break;
                }

            }
         //   cout<<"\nck"<<ck<<endl;

            if(flag)
            {
                l=m+1;
               // en;
            }
            else if(ck<=mm)
            {
                result=min(result,m);
                r=m-1;//en1;
            }
            /* if (arr[m] == x)
                 return m;
             if (arr[m] < x)
                 l = m + 1;
             else
                 r = m - 1;*/
        }
        cout<<result<<endl;





    }

    return 0;
}
/*
Ref:
*/
