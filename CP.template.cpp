// not final yes
// #include<bits/stdc++.h>
// using namespace std;

// #define nline "\n"
// #define ff first
// #define ss second
// #define pb push_back
// #define er erase
// #define sz(x) 	((int)(x).size())
// #define ll long long
// #define all(x) (x).begin(), (x).end()
// #define set_bits __builtin_popcountll

// void solve() 
// {
	
// }

// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
	

// 	int t;
// 	cin >> t;
// 	while(t--)
// 	{
// 		solve();
// 	}

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
#define ff first
#define ss second
#define pb push_back
#define debug(x) cerr << #x << "="; print(x); cerr << nline;
#define er erase
#define sz(x)   ((int)(x).size())
#define ll long long
#define all(x) (x).begin(), (x).end()
#define set_bits __builtin_popcountll
template <typename T> void print(T x) { cerr << x; }
template <typename T> void print(vector<T> &a) {cerr << '[' << ' ';   for (auto x : a) {print(x);cerr << ' ';}cerr << ']';}
template <typename T> void print(set<T>& a) {cerr << '[' << ' ';for (auto x : a){print(x);cerr << ' ';}cerr << ']';}
template <typename T>void print(set<T, greater<T> >& a){cerr << '[' << ' ';for (auto x : a){print(x);cerr << ' ';}cerr << ']';}
template <typename T, typename V>void print(map<T, V>& a){cerr << "[ ";for (auto i : a){print(i); cerr << " ";}cerr << "]";}
template <typename T, typename V> void print(unordered_map<T, V>& a){cerr << "[ ";for (auto i : a){print(i); cerr << " ";}  cerr << "]";}
// template <typename T, typename V>
 
//Function to print unordered map elements
// void print(unordered_map<T, V>& a)
// {
//   cerr << "[ ";
//   for (auto i : a)
//   {
//     // Same as variable using the
//     // concept of function overloading
//     print(i);
     
//     cerr << " ";
//   }
//   cerr << "]";
// }
template <typename T>void print(multiset<T>& a){cerr << '[' << ' ';for (auto x : a){print(x);cerr << ' ';}cerr << ']';}
template <typename T>void print(multiset<T, greater<T> >& a){cerr << '[' << ' ';for (auto x : a){print(x);cerr << ' ';}cerr << ']';}
template <typename T>void print(unordered_set<T>& a){cerr << '[' << ' ';for (auto x : a){print(x);cerr << ' ';}cerr << ']';}
template <typename T>void print(vector<vector<T> >& a){cerr << "[ ";for (auto i : a){print(i);cerr << " ";}cerr << "]";}
template <typename T, typename V>void print(pair<T, V> x){print(x.ff); cerr << ':'; print(x.ss);}
template <typename T, typename V>
void print(vector<pair<T, V> >& a){cerr << '[' << ' ';for (auto x : a){print(x.ff);cerr << ":";print(x.ss);cerr << ' ';}cerr << ']';}

void solve() 
{
 
   unordered_map<int,int> m;
   m[10] = 20;
   m[20] = 30;
   m.insert({30,25});
   
   debug(m); 

   for(auto &x : m)
   {
    cout << x.ff << " " << x.ss << nline;
   }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  

  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }

  return 0;
}

