//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
void smile();

int main()
{
	smile();
	//char lower to upper 
	char c ='a';
	char c1= toupper(c);
	char ch ='A';
	char c2=tolower(ch);
	cout<<c1<<sp<<c2<<nl;

//int to char
	int a = 5;
	char c = '0'+a;

	string s = "ab23cd";
	int a = s[0] - 'a';   //convert char to int
	cout << "int value of char a : " << a << nl;
	a = s[2] - '0';       //convert char to int
	cout << "int value of int 2 : " << a << nl;

	int n = 5;
	char c = '0' + n;   //convert num to char type
	cout << "char value of number : " << c << nl;
	c = 'a' + n;        //convert int to char value
	cout << "nth char value : " << c << nl;



//convert full string to num
	string str = "4545";
	int numInt = stoi(str);   //convert int
	ll numll = stoll(str);   //convert long
	cout << "string to int : " << numInt << nl;
	cout << "string to long long : "  << numll << nl;

//stoi() && atoi() same kaj kore
//stoll() && atoll() same kaj kore


//convert number to string
	int number = 2356;
	string numToS = to_string(number);
	cout << "Number to string : " << numToS << nl;


	return 0;
}


void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
