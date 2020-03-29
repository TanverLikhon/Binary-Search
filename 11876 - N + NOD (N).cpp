/*Never Give up*/
/*
Problem  :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2987&mosmsg=Submission+received+with+ID+24738997
Verdict     :AC
Time         :0.870sec 1142th
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

#define MAX    1000005

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48
vi primes;
bool prime[MAX];
int divisor[MAX];
vi arr;
int countDivisors(int j)
{
    if(j==2)
        return 2;
    int n=j;
    int ck = 1,i=0;
    int divi=1;
    //for(int i=0; primes[i]<=j/2+100&&n>0; i++)
    while(n>=primes[i])
    {
        if(n%primes[i]==0)
        {
            int ck=1;
            //   en;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                ck++;
            }
            divi*=ck;
        }i++;
    }

    return divi;
}


void SieveOfEratosthenes()
{
    for (int p=2; p*p<=MAX; p++)
    {
        if (prime[p] == false)
        {
            for (int i=p*p; i<=MAX; i += p)
                prime[i] = true;
        }
    }
    for (int p=2; p<=MAX; p++)
        if (!prime[p])
            primes.pb(p);

}

int l=1,r;

int binarySearch(int x)
{
    //  en;
    //  cout<<"\nentering  "<<x<<endl;
//    cout<<"low "<<l<<" "<<r<<endl;
    while (l<=r)
    {

        int m=l+(r-l)/2;
        if (arr[m] == x)
            return m;
        else if(arr[m]>x&&arr[m-1]<=x)
            return m-1;
        if (arr[m]<x)
            l=m+1;
        else
            r= m-1;

        //  cout<<"l  "<<l<<"  mid  "<<m<<"  right  "<<r<<endl;
    }
//    low=l;
    // return -1;
}


int main()
{
    faster

    arr.pb(0);
    arr.pb(1);

    SieveOfEratosthenes();

    //  cout<<countDivisors(2)<<endl;


    for(int i=2; i<=MAX; i++)
    {
        //cout<<"\narr "<<arr[i-1]<<endl;

        int tmp=countDivisors(arr[i-1]);

        //  cout<<"tmp "<<tmp<<endl;
        tmp+=arr[i-1];
        //cout<<"tmp "<<tmp<<endl;
        arr.pb(tmp);
        if(tmp>=MAX)
            break;
    }
    int rr=sz(arr)-1;
   // for(int i=1; i<=100; i++)
      //  cout<<"i ->"<<i<<" "<<arr[i]<<endl;

    // cout<<binarySearch(1)<<endl;
    // cout<<binarySearch(18)<<endl;


    int n;
    cin>>n;
    int ck=1;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        l=1,r=rr;
        int tmp=binarySearch(a);
        while(arr[tmp]<a)
            tmp++;
        // while(arr[tmp])
        //   cout<<"first index "<<tmp<<endl;
        l=1,r=rr;
        int tmp1=binarySearch(b);
        while(arr[tmp1]>b)
            tmp1--;
        // if()

        //  cout<<"last index "<<tmp1<<endl;
        cout<<"Case "<<ck++<<": "<<tmp1-tmp+1<<endl;


    }


    return 0;
}
/*
Ref:
*/
