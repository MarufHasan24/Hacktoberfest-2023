#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// can add more than 2 numbers of array
int add(int a[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += a[i];
    return sum;
}
// can multiply more than 2 numbers of array
int mul(int a[], int len)
{
    int sum = 1;
    for (int i = 0; i < len; i++)
        sum *= a[i];
    return sum;
}
// can subtract more than 2 numbers of array
int sub(int a[], int len)
{
    int sum = a[0];
    for (int i = 1; i < len; i++)
        sum -= a[i];
    return sum;
}
// can divide more than 2 numbers of array
float div(int a[], int len)
{
    float sum = a[0];
    for (int i = 1; i < len; i++)
        sum /= a[i];
    return sum;
}
// can find average between more than 2 numbers of array
float avg(int a[], int len)
{
    float sum = 0;
    for (int i = 0; i < len; i++)
        sum += a[i];
    return sum / len;
}
// can find log of any base
float logx(int base, int x)
{
    return log(x) / log(base);
}
// factorial
double fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
// power of any number x^y
int power(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
int main()
{
    int a[] = {1, 8, 3, 7, 5};
    int len = sizeof(a) / sizeof(a[0]);
    cout << add(a, len) << endl;//Output: 24
    cout << mul(a, len) << endl;//Output: 840
    cout << sub(a, len) << endl;//Output: -22
    cout << div(a, len) << endl;//Output:0.00119048
    cout << avg(a, len) << endl;//Output: 4.8
    cout << logx(2, 8) << endl;//Output: 3
    cout << fact(12) << endl;//Output:4.79002e+08
    cout << power(2, 3) << endl;//Output: 8
    return 0;
}
