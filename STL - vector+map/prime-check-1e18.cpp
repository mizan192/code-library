//prime check 1e18
bool isprime(LL n) {
	if (n < 2) return false;
	for (LL i = 2; i * i * i <= n; ++i) if (n % i == 0) return false;
	for (int it = 0; it < 1e5; ++it) {
		LL i = rand() % (n - 1) + 1;
		if (__gcd(i, n) != 1) return false;
		if (mpow(i, n - 1, n) != 1) return false;
	}
	return true;
}