/*Never Give up*/
/*
Problem  :http://lightoj.com/volume_showproblem.php?problem=1043
Verdict     :AC
Time         :0.001
Memory  :2240
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
double ab,bc,ac,r;
double AreaTri;
double area(double a,double b,double c)
{
    double s=(a+b+c)/2.0;
    double ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}

double cal_ratio(double ad)
{
    double ae=(ad/ab)*ac;
    double de=(ad/ab)*bc;
    double areaADE=area(ad,ae,de);
    double areaTrap=AreaTri-areaADE;
    return areaADE/areaTrap;
}


double binarySearch()
{
    double low=0.0;
    double high=ab;
    double result;

    for(int i=0; i<100; i++)
    {
        double mid=(low+high)/2.0;
        result=mid;

        double Ratio=cal_ratio(mid);
        if(Ratio==r)
        {
            result=mid;
            break;
        }
        else if(Ratio>r)
            high=mid;
        else
            low=mid;

    }
    return result;

}


int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        cin>>ab>>bc>>ac>>r;
        AreaTri=area(ab,bc,ac);
        double result=binarySearch();
       cout<<fixed;cout<<setprecision(10);
        cout<<"Case "<<ck++<<": "<<result<<endl;


    }


    return 0;
}
/*
Ref:
*/
