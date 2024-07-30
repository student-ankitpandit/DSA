using namespace std;

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Driver code
int main()
{
    int n = 9;

    cout << fib(n);
    return 0;
}


//method 2


using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 9;
    cout << n << "th Fibonacci Number: " << fib(n);
    return 0;
}