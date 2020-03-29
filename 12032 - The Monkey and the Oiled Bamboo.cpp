/*Never Give up*/
/*
Problem  :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3183
Verdict     :AC
Time         :0.030sec 213th
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


int ck=1;

int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int mx=-1;
        int n;
        cin>>n;
        int tmp=0;
        int arr[n];
        int arr1[n];
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            arr[i]=x;
            arr1[i]=x-tmp;
            mx=max(mx,x-tmp);
            tmp=x;

        }


        int result;

        int low=mx,high=1e9;

        while(low<=high)
        {

            int mid=(low+high)/2;
            tmp=mid;
            for(int i=0; i<n; i++)
            {
                if(arr1[i]==tmp)
                    tmp--;
                else if(arr1[i]>tmp)
                {
                    tmp=-1;
                    break;
                }

            }

            if(tmp<0)
                low=mid+1;
            else
                high=mid-1,result=mid;
        }
        cout<<"Case "<<ck++<<": "<<result<<endl;

    }

    return 0;
}
/*
Ref:

2
15
69 137 179 275 317 343 382 414 460 516 611 706 739 758 841
31
10 99 172 227 319 326 360 426 431 446 484 511 525 585 656 704 711 717 767 797 844 845 899 918 1007 1100 1192 1270 1361 1452 1460

*/
