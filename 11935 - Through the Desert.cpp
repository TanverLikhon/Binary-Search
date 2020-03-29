/*Never Give up*/
/*
Problem  :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3086
Verdict     :AC
Time         :0.00sec 543sec
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

double rate,dist=0,mx=-1;
int leak=0;
int ck=1;
double cost=0;
int main()
{
    faster
    while(1)
    {
        //cout<<"\n\astarting loop\n"<<endl;
        double first,last;
        string str,str1="";
        cin>>first>>str;
        //   cout<<str<<endl;

        if(str[0]!='L'&&str[0]!='G'&&str[0]!='M')
        {
            cin>>str1;
            cin>>last;
            if(last==0)
                break;
            if(first==0.0)
                cost=0,leak=0,dist=0,mx=-1,leak=0,rate=last/100.0;
            cost+=(first-dist)*(leak+rate);
            dist=first;
            rate=last/100.0;
            // cout<<"\nCost at fuel "<<cost<<endl;
        }
        else
        {
            if(str[0]=='G')
            {
                //     cout<<"leak rate"<<first<<sp<<dist<<endl;
                // cout<<leak<<sp<<rate<<endl;
                cost+=(first-dist)*(leak+rate);
                //    cout<<"COST G"<<cost<<endl;
                mx=max(mx,cost);
                cost=0;
                dist=first;
                //cout<<"entered G"<<endl;

                if(str[1]=='o')
                {
                    //  cout<<"goal"<<endl;
                    //   cost+=()
                    //    cout<<"\nending CASE "<<ck++<<endl;
                    cout<<fixed;
                    cout<<setprecision(3);
                    cout<<mx<<endl;
                    // pf("%.3lf\n",mx);
                    //   cout<<"\ncost at goal "<<cost<<"  mx  "<<mx<<endl;
                    rate=0,dist=0,mx=-1,cost=0;
                    // cout<<str[1]<<"sdfsdf"<<endl;
                }
                else
                {
                    cin>>str1;
                    //  cout<<"\ncost at gas station "<<cost<<"  mx  "<<mx<<endl;
                }
            }
            else if(str[0]=='L')
            {
                cost+=(first-dist)*(leak+rate);
                dist=first;
                leak++;
                //   cout<<"\ncost at leak "<<cost<<"  mx  "<<mx<<endl;
            }
            else if(str[0]=='M')
            {
                cost+=(first-dist)*(leak+rate);
                //  cout<<"\ncost at Mechanic "<<cost<<"  mx  "<<mx<<endl;
                leak=0;

                dist=first;
            }
        }
        // cout<<"ending command\n\n";
    }

    return 0;
}
/*
Ref:

0 Fuel consumption 10
100 Goal
0 Fuel consumption 5
100 Fuel consumption 30
200 Goal
0 Fuel consumption 20
10 Leak
25 Leak
25 Fuel consumption 30
50 Gas station
70 Mechanic
100 Leak
120 Goal
0 Fuel consumption 0
*/
