#include<bits/stdc++.h>
using namespace std;
 /* ------------------- Macros Begins ---------------*/
#define nline "\n"
#define ff first
#define ss second
#define pb push_back
#define er erase
#define sz(x)   ((int)(x).size())
#define ll long long
#define all(x) (x).begin(), (x).end()
#define set_bits __builtin_popcountll
 /* ------------------- Macros Ends ---------------*/

 /* ------------------- Debugging Begin ---------------*/

template<class T>void print(T x) {
  cerr << x;
}
template<class T, class V>
         void print(pair<T , V> x)
{
  print(x.ff);
  cerr << ':';
  print(x.ss);
}
template<class T>
         void print(vector<T> &a)
{
  cerr << '[' << ' ';
  for(auto x : a)
  {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template<class T>
         void print(set<T> &a)
{
  cerr << '[' << ' ';
  for(auto x : a)
  {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template<class T>
         void print(set<T,
                    greater<T>> &a)
{
  cerr << '[' << ' ';
  for(auto x : a)
  {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template<class T>
         void print(multiset<T> &a)
{
  cerr << '[' << ' ';
  for(auto x : a)
  {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template<class T>
         void print(multiset<T,
                    greater<T>> &a)
{
  cerr << '[' << ' ';
  for(auto x : a)
  {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template<class T>
         void print(unordered_set<T> &a)
{
  cerr << '[' << ' ';
  for(auto x : a)
  {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template<class T, class V>
         void print(vector<pair<T, V>> &a)
{
  cerr << '[' << ' ';
  for(auto x : a)
  {
    print(x.ff);
    cerr << ":";
    print(x.ss);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T, class V>
          void print(map <T, V> &a)
{
  cerr << "[ ";
  for (auto i : a)
  {
    print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
          void print(unordered_map <T, V> &a)
{
  cerr << "[ ";
  for (auto i : a)
  {
    print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
          void print(vector<vector<T>> &a)
{
  cerr << "[ ";
  for (auto i : a)
  {
    print(i);
    cerr << " ";
  }
  cerr << "]";
}

 /* ------------------- Debugging Ends---------------*/

 /* ------------------- Online Judge Begins---------------*/

void judge()
{
  #ifndef ONLINE_JUDGE
  freopen("error.txt", "w", stderr);
  #endif
 
  #ifndef ONLINE_JUDGE
  #define debug(x)  cerr << #x << " = ";  print(x);  cerr << '\n';
  #else
  #define debug(x) 
  #endif
}

 /* ------------------- Online Judge Ends ---------------*/

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
