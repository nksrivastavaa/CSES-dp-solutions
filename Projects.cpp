/*☘️👀☘️🅽🅴🅴🅻🅰🅱🅷 🅺🆄🅼🅰🆁 🆂🆁🅸🆅🅰🆂🆃🅰🆅🅰☘️👀☘️*/
/*☘️👀☘️🅽🅴🅴🅻🅰🅱🅷 🅺🆄🅼🅰🆁 🆂🆁🅸🆅🅰🆂🆃🅰🆅🅰☘️👀☘️*/

#include <bits/stdc++.h>
using namespace std;
                    
/*☘️👀☘️🅳🅰 🅳🅴🅵🅸🅽🅴🆂☘️👀☘️*/
/*☘️👀☘️🅳🅰 🅳🅴🅵🅸🅽🅴🆂☘️👀☘️*/

#define rep(i, j) for(int i = 0; i<j; i++)
#define rrep(i, j) for(int i = j-1; i>=0; i--)
#define sq(a) (a)*(a)
#define pb push_back
#define pob pop_back
#define fs first
#define sn second
#define mp make_pair
#define nl '\n'
#define midd(l, r) (l + (r - l) / 2)
#define all(a) a.begin(), a.end()
#define remVal(v, a) v.erase(remove(all(v), a), v.end())
#define maxe(v) *max_element(v.begin(), v.end())
#define maxi(v) max_element(v.begin(), v.end()) - v.begin()
#define mine(v) *min_element(v.begin(), v.end())
#define mini(v) min_element(v.begin(), v.end()) - v.begin()
#define modulo(a, b) (a % b < 0 ? a % b + b : a % b)
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;
typedef long double dll;
typedef pair<ll,ll> pl;
typedef pair<int, int> pi;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<pl> vpl;
typedef vector<pi> vpi;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef map<ll, ll> mapll;
typedef map<char, ll> mapcl;
typedef set<ll> setl;
typedef set<pl> setpl;
typedef set<pi> setpi;

/*☘️👀☘️🅳🅴🅱🆄🅶🅶🅸🅽🅶☘️👀☘️*/
/*☘️👀☘️🅳🅴🅱🆄🅶🅶🅸🅽🅶☘️👀☘️*/

#ifndef ONLINE_JUDGE
#define dbg(a) cerr << endl; cerr << #a << ": "; _print(a); cerr << endl << endl;
#else
#define dbg(a)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T, class U, class V> void _print(tuple <T, U, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fs); cerr << ","; _print(p.sn); cerr << "}";}
template <class T, class U, class V> void _print(tuple <T, U, V> p) {cerr << "{"; _print(get<0>(p)); cerr << ","; _print(get<1>(p)); cerr << ","; _print(get<2>(p)); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> umap) {cerr << "{ "; for(auto i : umap) {cerr << "{";_print(i.fs); cerr << ", "; _print(i.sn); cerr << "} ";} cerr << "}";}
 
/*☘️👀☘️🅼🆈 🅵🆄🅽🅲🆃🅸🅾🅽🆂☘️👀☘️*/ 
/*☘️👀☘️🅼🆈 🅵🆄🅽🅲🆃🅸🅾🅽🆂☘️👀☘️*/ 

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
void primeSieve(vb& sieve, int n) {sieve.assign(n + 1, true); sieve[0] = false; sieve[1] = false; for(int i = 2; i * i <= n; i++){if(sieve[i] == true){ for (int j = i * i; j <= n; j += i) { sieve[j] = false;}}}}
int* decToBinary(int n) {int* binaryNum = new int[32]; for(int i = 0; i<32; i++){binaryNum[i] = 0;} int i = 0; while(n > 0){binaryNum[i] = n % 2; n = n / 2; i++;} return binaryNum;}//RETURNS 32 BIT BINARY ARRAY POINTER. DO int *temp = decToBinary(n)

/*☘️👀☘️🅲🅾🅽🆂🆃🅰🅽🆃🆂☘️👀☘️*/
/*☘️👀☘️🅲🅾🅽🆂🆃🅰🅽🆃🆂☘️👀☘️*/

const ll inf = 1e18;
const ll ninf = inf*(-1);
const ll mod = 1e9 + 7;
const ll mod2 = 998244353;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/   
/*☘️👀☘️🆂🅾🅻🆅🅴☘️👀☘️*/
/*☘️👀☘️🆂🅾🅻🆅🅴☘️👀☘️*/

bool sortByEndDay(const tuple<int, int, int> &a, const tuple<int, int, int> &b){
    if(get<1>(a) != get<1>(b)) return get<1>(a) < get<1>(b);
    return get<0>(a) < get<0>(b);
}

void solve() {
    int n;
    cin>>n;
    vector<tuple<int, int, int>> project(n+1);
    project[0] = make_tuple(0, 0, 0); /*insert a dummy project so that rest of the 
    projects are 1 based indexed */
    rep(i, n){
        int a, b, c;
        cin>>a>>b>>c;
        project[i+1] = make_tuple(a, b, c);
    }

    sort(all(project), sortByEndDay);
    
    vl dp(n+1, 0); /* dp[i] --> maximum money earnt on choosing any(maybe all) of 
    the first i projects {p1, p2, ....., pi} */ 

    for(int i = 1; i<=n; i++){
        if(i==1){
            dp[i] = get<2>(project[i]);
        }
        else{
            int l = 0, r = i-1;
            int j = 0; /* j is the index of the first project such that ending time of
            jth project is >= starting time of ith project */
            while(l<=r){ // Binary search
                int m = midd(l, r);
                if(get<1>(project[m]) < get<0>(project[i])){
                    j = m;
                    l = m+1;
                }
                else if(get<1>(project[m]) >= get<0>(project[i])){
                    r = m-1;
                }
            }
            dp[i] = max(dp[i-1], get<2>(project[i]) + dp[j]); /* max(don't do ith project
            and do i-1 projects, do ith project and get it's reward but don't get
            reward for the projects that end on or after the starting day of
            project i) */
        }
    }

    dbg(dp)

    cout<<dp[n]<<nl;
}   


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
 
signed main() {
    FIO
    #ifndef ONLINE_JUDGE
	    freopen("input1.txt", "r", stdin);
	    freopen("output1.txt", "w", stdout); 
	    freopen("error1.txt", "w", stderr); 

    #endif
    ///////////////////////////////////////////////////////////////////////////////////////////

    
    ll t = 1;
    //cin >> t;
    // int k = t;
    while(t--) {
        // cout << "case #" << k - t << ":\n";
        solve();
    }



    ///////////////////////////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout << "\n________________\n" << ((float)clock()/CLOCKS_PER_SEC) << " seconds" << "\n";
    #endif
    return 0;
}
