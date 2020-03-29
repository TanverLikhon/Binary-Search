/*Never Give up*/
/*
Problem  :https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1552&mosmsg=Submission+received+with+ID+24722670
Verdict     :AC
Time         :.02S
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
int arr[50005];
int l,r,n;
int low;
int binarySearch(int x)
{
    //  en;
    while (l<=r)
    {
        int m=l+(r-l)/2;
        if (arr[m] == x)
            return m;
        if (arr[m]<x)
            l=m+1;
        else
            r= m-1;

      //  cout<<"l  "<<l<<"  mid  "<<m<<"  right  "<<r<<endl;
    }
    low=l;
    return -1;
}

int main()
{
    faster
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        l=0,r=n-1;

        int res=binarySearch(x);
        if(res>-1)
        {

            if(n==1)
                cout<<"X X"<<endl;
            else if(res==0&&n>1)
            {

                cout<<"X "<<arr[res+1]<<endl;
            }

            else if(res==n-1)
            {
                cout<<arr[res-1]<<" X\n";
            }


            else
            {

                int tmp=arr[res];

              //  cout<<"tmp "<<tmp<<endl;

                int i=res+1;

                while(i<n&&arr[i]==tmp)
                    i++;//,en;

               // cout<<"arr i "<<arr[i]<<endl;

                int j=res-1;

                while(j>=0&&arr[j]==tmp)
                    j--;//,en;
                //cout<<"arr j "<<arr[j]<<endl;


                if(arr[j]!=tmp&&arr[j]!=0)
                    cout<<arr[j]<<" ";
                else
                    cout<<"X ";
                if(arr[i]!=tmp&&arr[i]>0)
                    cout<<arr[i]<<endl;
                else
                    cout<<"X"<<endl;

                //cout<<arr[res-1]<<" "<<arr[res+1]<<endl;
            }
        }
        else
        {
            if(low==n)
            {
                cout<<arr[n-1]<<" X"<<endl;
            }

            else if(low>0)
            {
                //if(arr[low-1]==arr[low]){

                //}
                cout<<arr[low-1]<<' '<<arr[low]<<endl;
            }
            else
            {

                cout<<"X "<<arr[low]<<endl;
            }
        }
        //  cout<<"res "<<res<<endl;
    }

    return 0;
}
/*
Ref:

7
1 2 3 3 3 5 6


*/
