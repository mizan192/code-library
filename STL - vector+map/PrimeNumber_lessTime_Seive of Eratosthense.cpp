///In the name of Almighty Allah(swt)
/// prime number count O(n)
/// method Sieve of Eratosthenes
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair

int makeSeive(int n) {

	bool isPrime[n + 1];  /// declear bool array with n+1 size
	for (int i = 0; i <= n; i++) {
		isPrime[i] = true;         /// initialize every position as ture(prime) 
	}

	isPrime[0] = false; /// 0 is notPrime so it flase
	isPrime[1] = false; /// 1 is notPrime so it flase

	for (int i = 2; i * i <= n; i++) {   ///if i is factor of n then n/i is also a factor
										/// so it will enough to 1 to i*i	
		if ( isPrime[i] == true ) {    /// true means it prime
									  ///if 2 is prime all multiplies of 2 is not prime
			for (int j = i * i; j <= n; j += i) {   /// it will check from i*i, i-1 will cover least 
				isPrime[j] = false;          /// then all multiplies will false
			}							/// 2 will check 2*2 ,, 3 will 3*3, 5 will 5*5
		}								/// if j =3 then next multiply of 3 will 3+3, 3+3+3 or 6+3 or j+=i
	}

	int cunt = 0;
	for (int i = 0; i <= n; i++) {
		if ( isPrime[i] == true) {  /// now all prime num are stored as ture
			cunt++;					/// cunt total prime number 
		}
	}

	return cunt;
	/// if we want not to return total prime num 
	/// we want return prime number then code will below
	/*  for(int i=0; i<=n; i++){
		if( isPrime(i) == ture){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	/// then function return type will void
	*/
}


int main()
{

	int n;
	cin >> n;

	int cuntPrime;
	/// makeSeive will check is it prime or not and retun total prime numbr
	cuntPrime = makeSeive(n);

	cout << cuntPrime << endl;


	return 0;
}

----------------- Fresh code wihtout comment ---------------

///In the name of Almighty Allah(swt)
/// prime number count O(n)
/// method Sieve of Eratosthenes
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair

int makeSeive(int n) {

	bool isPrime[n + 1]; 
	for (int i = 0; i <= n; i++) {
		isPrime[i] = true;    
	}

	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i * i <= n; i++) {  
											
		if ( isPrime[i] == true ) {    			  
			for (int j = i * i; j <= n; j += i) {   				
				isPrime[j] = false;          
			}							
		}								
	}

	int cunt = 0;
	for (int i = 0; i <= n; i++) {
		if ( isPrime[i] == true) {  
			cunt++;					 
		}
	}

	return cunt;
	
}


int main()
{

	int n;
	cin >> n;

	int cuntPrime;
	cuntPrime = makeSeive(n);

	cout << cuntPrime << endl;


	return 0;
}

