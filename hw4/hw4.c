// given a positive int n, return number of divisors for n between [1,n] inclusive 
// You must use a while-loop for this function
int num_of_divisors(int n) {
  int c;
  c = 0;
  i = 1;
  while (c <= n) {
    if(n % c == 0) {
      c = c++;
    }  
    i = i++;
  return c;
  }
}

// given a positive int n, return number of primes that is <= n.
// You must use num_of_divisors() function to help determine if a number is prime:
// a number is a prime if its number of divisors is 2.
// You must use a while-loop for this function
int num_of_primes(int n) {
  int i;
  int c;
  i = 0;
  c = 0;
  retd = int num_of_divisors(n);
  
  while (i < n) {
    if (retd == 2) {
      c++;
  return c;
    }
}

// given a non-negative int n, return the sum 0+1+2+...+n
// You must use a while-loop for this function, no recursion.
int sum_n(int n) {
  int i;
  i = n;
  int x;
  x = n;
  while (x > 0) {
    c = n + (x-1);
    x - 1;  
    if (x == 0) {
      return c;
    }
  }
}

// given a non-negative int n, print s n times
// You must use a while-loop for this function, no recursion.
void print_n(const char *s, int n) {
  while (n > 0) {
    printf("%s", *s);
    n-1;
  }
}
