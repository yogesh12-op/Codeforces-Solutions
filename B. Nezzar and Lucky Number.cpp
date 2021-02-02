#include <bits/stdc++.h>
using namespace std;
//to run in sublime text press: ctrl + shift + b

/*************** MACROS *******************/
#define fastio            ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod               1000000000007
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define endl              "\n"
/************** CONSTS ***************/
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

const int N=1e6+5;
 
bool possible[N];

int divisor(int n)
{
  int result=0;
  for (int i=1; i<=sqrt(n); i++) 
  {  
        if (n%i==0) 
        { 
            
            if (i==(n/i)) 
                 result= i;
            else
            {    
                 result= n/i;
            }   
        } 
  } 
  
  return result;
}

bool checkprime(int n)
{
  for(int i=2;i*i<=n;i++){
 
    if(n%i==0)
      return false;
  }

  return true;
}

string convertToCapital(string s)
{
  for(int i=0;i<s.length();i++)
  {
    if(s[i]>=97 && s[i]<=123)
        s[i]-=32;
  }
  
  return s;
}

void solve()
{ 
   int n,d,x;
   cin>>n>>d;

   rep(i,0,n)
   {
       cin>>x;

       bool ans = false;

       if(x>= d*10)
        ans = true;
       else
       {
          while(x>=d)
          {
              if(x%d==0)
              {
                ans = true;
                break;
              }
              x-=10;
          }
       }

       if(ans)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
}
 
signed main()
{   
    fastio

    #ifndef ONLINE JUDGE
 //    freopen("input.txt", "r", stdin);
   //  freopen("output.txt", "w", stdout);
    #endif 
    
  
    int t;
    cin>>t;

    while(t--){
   
    solve();
    
    }
    
    return 0;
}
