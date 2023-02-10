// ******************************* Header Files ***************************//
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// ****************************** Macros **************************
#define nline "\n"
#define ff first
#define ss second
#define pb push_back
#define arrs(arr) sizeof(arr)/sizeof(arr[0]);
#define ppb pop_back
#define mp make_pair
#define p push
#define re reverse
#define maxele max_element
#define minele min_element
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#define loop(i,n) for(int i = 0; i < n; i++)
#define rloop(i,m,n) for(int i = m; i >= n;i--)
#define er erase
#define mem memset(a,(b),sizeof(a))
#define acc accumulate
#define fbo(x) find_by_order(x)
#define sz(x)   ((int)(x).size())
#define ll long long
#define get(i,m) get<i>(m)
#define oby(x) order_of_key(x)
#define lld long  double
#define ull unsigned long long 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(),(x).end()
#define set_bits __builtin_popcountll


//**************************** Constants ***********************************//

 const lld pi = 3.141592653589793238;
 const ll INF = 1e18;
 const ll mod = 1e9 + 7;

// ********************************* Typedef ********************************//

 typedef pair<ll,ll> pll;
 typedef vector<ll> vll;
 typedef vector<string> vst;
 typedef vector<char> vc;
 typedef priority_queue<int> pq;
 typedef priority_queue<ll> pqll;
 typedef priority_queue<int,vector<int>,greater<int>> pqm;
 typedef priority_queue<ll,vector<ll>,greater<ll>> pqmll;
 typedef vector<pair<string,char>> vpsc;
 typedef vector<pair<char,string>> vpcs;
 typedef vector<pll> vpll;
 typedef vector<string> vs;
 typedef deque<int> dq;
 typedef multiset<int> ms;
 typedef multiset<ll> msll;
 typedef multimap<int,int> mp;
 typedef multimap<ll,ll> mpll;
 typedef deque<ll> dqll;
 typedef stack<int> st;
 typedef stack<ll> stll;
 typedef unordered_map<ll,ll> umll;
 typedef map<ll,ll> mll;
 typedef set<ll> sll;
 typedef unordered_set<ll,ll> usll;
 
 // ******************************* Policy Based DS ********************************** //
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
template<typename T> 
using ordered_multiset = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;

// ********************** Some Utility Functions ********************************//
template<typename T>
void _print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){loop(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();loop(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;loop(i,n)s+=v[i];return s;}

// ***************************  Operators Overloading **********************************//
template<typename T1, typename T2> 
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> 
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> 
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> 
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// *************************************** Debugging **************************************** //
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
// ********************************** Some Commmonly Used Functions ********************************* //
ll GCD(ll a, ll b){while (b) { a %= b;swap(a, b);} return a;}
ll LCM(ll a,ll b) {return ((ll) a * b) / GCD(a,b);}

// ************************************* Online Judge **************************** //
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
  #define debug2(x,y)
  #endif
}

 // ******************************** Main Solve Function ******************************* //

void Mayank() 
{
 



}

// *********************************  Main Function **************************************//
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
