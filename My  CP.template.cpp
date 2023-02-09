#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define nline "\n"
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define loop(i,n) for(int i = 0; i < n; i++)
#define rloop(i,m,n) for(int i = m; i >= n;i--)
#define er erase
#define mem memset(a,(b),sizeof(a))
#define fbo(x) find_by_order(x)
#define sz(x)   ((int)(x).size())
#define ll long long
#define oby(x) order_of_key(x)
#define lld long  double
#define ull unsigned long long 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(),(x).end()
#define set_bits __builtin_popcountll


 const lld pi = 3.141592653589793238;
 const ll INF = 1e18;
 const ll mod = 1e9 + 7;


typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<string> vst;
typedef vector<char> vc;
typedef vector<pair<string,char>> vpsc;
typedef vector<pair<char,string>> vpcs;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;
typedef set<ll> sll;
typedef unordered_set<ll,ll> usll;
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

template <typename T>
void _print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){loop(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();loop(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;loop(i,n)s+=v[i];return s;}


template<typename T1, typename T2> 
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> 
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> 
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> 
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }


template<class T>void print(T x) {cerr << x << " ";}
template<class T, class V> void print(pair<T , V> x)
{print(x.ff); cerr << ':'; print(x.ss);}
template<class T>void print(vector<T> &a) {cerr << '[' << ' ';for(auto x : a){print(x);cerr << ' ';}cerr << ']';}
template<class T>void print(set<T> &a){cerr << '[' << ' ';for(auto x : a){print(x);cerr << ' ';}cerr << ']';}
template<class T>void print(set<T,greater<T>> &a){cerr << '[' << ' ';for(auto x : a){print(x);cerr << ' ';}cerr << ']';}
template<class T>void print(multiset<T> &a){cerr << '[' << ' ';for(auto x : a){print(x);cerr << ' ';}cerr << ']';}
template<class T>void print(multiset<T,greater<T>> &a){cerr << '[' << ' ';for(auto x : a){print(x);cerr << ' ';}cerr << ']';}
template<class T> void print(unordered_set<T> &a){cerr << '[' << ' ';for(auto x : a){ print(x);cerr << ' ';}cerr << ']';}
template<class T, class V>void print(vector<pair<T, V>> &a){cerr << '[' << ' ';for(auto x : a){cerr << ":";print(x.ss); cerr << ' ';}cerr << ']';}
template <class T, class V>void print(map <T, V> &a){cerr << "[ ";for (auto i : a){print(i);cerr << " "; }cerr << "]";}
template <class T, class V>void print(unordered_map <T, V> &a){cerr << "[ ";for (auto i : a){print(i);cerr << " ";}cerr << "]";}
template <class T>void print(vector<vector<T>> &a){ cerr << "[ ";for (auto i : a){print(i);cerr << " ";}cerr << "]";}


void judge()
{
  #ifndef ONLINE_JUDGE
  freopen("error.txt", "w", stderr);
  #endif
 
  #ifndef ONLINE_JUDGE
  #define debug(x)  cerr << #x << " = ";  print(x);  cerr << nline;
  #define debug2(x,y) cerr << #x << " = "; print(x); cerr << #y << " = "; print(y); cerr << nline; 
  #else
  #define debug(x) 
  #endif
}

 

void Mayank() 
{
 
}

int main()
{
    judge();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   

    int te;
    cin >> te;
    while(te--)
    {
    Mayank();
    }

  return 0;
}
