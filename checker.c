#include <stdio.h>
int check_prime(int a)
{
    for (int b = 2; 1; b++)
    {
        if (b == a)
        {
            printf("%d is prime", a);
            return 1;
        }
        if (a % b == 0)
        {
            printf("%d is composite", a);
            return 0;
        }
    }
}

int prime_list(int a)
{
    const int max = 999999;
    char not_prime[max] = {};
    for (int i = 2; i < max; i++)
    {
        if (not_prime[i])
        {
            continue;
        }
        printf("%d is prime\n", i);
        if (!--a)
        {
            return i;
        }
        for (int b = i + i; b < max; b += i)
        {
            not_prime[b] = 1;
        }
    }
    return 0;
}

int prime_list_sum(int a)
{
    int sum = 0;
    const int max = 999999;
    char not_prime[max] = {};
    for (int i = 2; i < max; i++)
    {
        if (not_prime[i])
        {
            continue;
        }
        sum = sum + i;
        printf("%d is prime, added to sum\n ", i);
        if (!--a)
        {
            return i;
        }
        for (int b = i + i; b < max; b += i)
        {
            not_prime[b] = 1;
        }
    }
    printf("%d is the sum", sum);
    return 0;
}
int sieve(int a)
{
    const int max = 999999;
    char not_prime[max] = {};
    for (int i = 2; i < a; i++)
    {
        if (not_prime[i])
        {
            continue;
        }
        printf("%d is prime\n", i);
        for (int b = i + i; b < max; b += i)
        {
            not_prime[b] = 1;
        }
    }
}
int sieve_sum(int a)
{
    int sum = 0;
    const int max = 999999;
    char not_prime[max] = {};
    for (int i = 2; i < a; i++)
    {
        if (not_prime[i])
        {
            continue;
        }
        printf("%d is prime\n", i);
        sum = sum + i;
        for (int b = i + i; b < max; b += i)
        {
            not_prime[b] = 1;
        }
        
    }
    printf("the sum is %d",sum);
}