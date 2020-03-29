/*Never Give up*/
/*
Problem  :
Verdict     :WA udebug passed
Time         :
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

int track[26],track1[26];
vi small[26],capital[26];

int main()
{
    faster
    string str,str1;
    int t;
    cin>>str;
    cin>>t;





    for(int i=0; str[i]!='\0'; i++)
    {
        char ch=str[i];
        int idx;
        if(isupper(ch))
        {
            idx=ch-'A';
            capital[idx].pb(i);
        }
        else
        {
            idx=ch-'a';
            small[idx].pb(i);
        }

    }

    /*    cout<<"printig small "<<endl;
    for(int i=0; i<26; i++)
    {

        if(sz(small[i]))
        {
            cout<<i<<"---> ";
            for(int j=0; j<sz(small[i]); j++)
                cout<<small[i][j]<<", ";
            nl;
        }

    }*/

    while(t--)
    {
        int f=-1,l=-1;
        bool flag=true;
        cin>>str1;
        int tmp,idx,temp;
        char ch=str1[0];
        //cout<<"starting "<<ch<<"  "<<idx<<"  "<<tmp<<endl;


        if(isupper(ch))
        {
            idx=ch-'A';
            temp=track1[idx]++;

            if(sz(capital[idx])==0||sz(capital[idx])<=temp)
            {
                // en;
               // cout<<"entered 11"<<endl;
                flag=false;
                track[idx]=0;
                cout<<"Not matched"<<endl;
                continue;

            }


            tmp=capital[idx][temp];

        }
        else
        {
            idx=ch-'a';
            temp=track[idx]++;
            if(sz(small[idx])==0||sz(small[idx])<=temp)
            {
                // en;

             //   cout<<"entered 22"<<endl;

                flag=false;
                track[idx]=0;
                cout<<"Not matched"<<endl;
                continue;

            }
            tmp=small[idx][temp];
        }

        f=tmp;

        for(int i=1; str1[i]!='\0'; i++)
        {


            ch=str1[i];
         //   cout<<tmp<<"    ch  "<<ch<<endl;
            int tmp1;
            if(isupper(ch))
            {
                idx=ch-'A';
                temp=track1[idx]++;


                while(sz(capital[idx])>temp&&capital[idx][temp]<=tmp)
                    temp=track[idx]++;


                if(sz(capital[idx])==0||sz(capital[idx])<=temp)
                {

                //    cout<<"entered 33"<<endl;

                    flag=false;
                    break;
                }
                tmp1=capital[idx][temp];

            }
            else
            {
                idx=ch-'a';

              //  cout<<"tmp "<<tmp<<endl;
                temp=track[idx]++;

                //if

               // cout<<track[idx]<<"---"<<small[idx][track[idx]]<<endl;
                // temp=track[idx];
                while(sz(small[idx])>temp&&small[idx][temp]<=tmp)
                    temp=track[idx]++;

                //  cout<<idx<<"   "<<temp<<endl;
                if(sz(small[idx])==0||sz(small[idx])<=temp)
                {
                  //  cout<<"entered 44"<<endl;

                    flag=false;
                    break;
                }
                tmp1=small[idx][temp];

              //  cout<<" last  "<<tmp1<<endl;
            }

            if(tmp1<=tmp)
            {
               // cout<<"last flag   "<<tmp1<<endl;
                flag=false;
                break;
            }
            tmp=tmp1;
           // cout<<"tmp1 "<<tmp1<<endl;

        }
        l=tmp;
        if(flag)
            cout<<"Matched "<<f<<" "<<l<<endl;
        else
            cout<<"Not matched"<<endl;

        for(int i=0; i<26; i++)
            track[i]=0,track1[i]=0;


    }

    return 0;
}
/*
Ref:

aaaaaaaaaaaaaabbbbbbbbbdddddddddddccccccccccccc
3
aaaaaaaaaaaaaaaaaaa
aaaaaaaaaaabbbbbbbbbbbc
abccc

aaaaaaaaaaaaaabbbbbbbbbdddddddddddccccccccccccc
3
abccc

tanverlllikhon
3
verlikhon

  /*  cout<<"printig capital "<<endl;
    for(int i=0; i<26; i++)
    {
        if(sz(capital[i]))
        {
            cout<<i<<"---> ";
            for(int j=0; j<sz(capital[i]); j++)
                cout<<capital[i][j]<<", ";
            nl;
        }

    }

    cout<<"printig small "<<endl;
    for(int i=0; i<26; i++)
    {

        if(sz(small[i]))
        {
            cout<<i<<"---> ";
            for(int j=0; j<sz(small[i]); j++)
                cout<<small[i][j]<<", ";
            nl;
        }

    }*/



