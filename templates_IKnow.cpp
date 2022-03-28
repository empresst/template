#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

//ctrl+shift+/ comment and uncomment out a block of code


#define dbg(a) cout << "-> " << __LINE__ << ": " << #a << " = " << a << endl  //a's value and a's line number

typedef long long ll;
#define pb push_back
#define pi (acos(-1))
#define ull unsigned long long
#define ld long double
#define all(v) v.begin(), v.end()


inline int add (int a, int b) {  //modular addition
	return (a + b < MOD) ? (a + b) : (a + b - MOD);
}

inline int sub (int a, int b) {  //modular subtraction
	return (a >= b) ? (a - b) : (a - b + MOD);
}

inline int mul (int a, int b) {  //modular multiplication
	return int((a * 1LL * b) % MOD);
}

inline int expo (int a, int b) { //modular exponentiation
	int ret = 1;
	b = (b == -1) ? (MOD - 2) : b;
	while (b != 0) {
		if (b & 1) {
			ret = mul(ret, a);
		}
		a = mul(a, a);
		b >>= 1;
	}
	return ret;
}

int LCM(int a, int b)  //least common multiple lcm(6,10)=30
{
    int g = __gcd(a, b);
    return (a / g) * b;
}

short t;
int n,i;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<ll>ve(100);
    for (int i = 0; i < 50; i++) {
		ve[i]=expo(2, i) ;
	}
	for (int i = 0; i < 50; i++) {
		cout<<ve[i];
	}
    
    int n = stoi("123"); cout<<" "<<n;      //string to num
    string str= to_string(13456); cout<<" "<<str;     //num to string
    
    cout<<LCM(6,10);
    
    
    vector<pair<int,int> >v(5);
        for(i=0; i<5; ++i)
        {
            cin>>v[i].first;
            v[i].second = i+1;
        }
        sort(all(v));
        cout<<v[0].second<<' '<<v[5-1].second<<'\n'; //index of min and max element of the array
    
    return 0;
}
