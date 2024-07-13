#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

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
    const int max = 99999999;
    //char not_prime[max] = {};
    char* not_prime = (char*)malloc(max*sizeof(char));
    memset(not_prime, 0,max);
    for (int i = 2; i < a && i< max; i++)
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
    free(not_prime);
}
int sieve_sum(int a)
{
    int64_t sum = 0;
    const int max = 99999999;
    //char not_prime[max] = {};
    char* not_prime = (char*)malloc(max*sizeof(char));
    int n = 0;
    memset(not_prime, 0,max);
    for (int i = 2; i < a; i++)
    {
        if (not_prime[i])
        {
            continue;
        }
        printf("%d is prime\n", i);
        sum = sum + i;
        n++;
        for (int b = i + i; b < max; b += i)
        {
            not_prime[b] = 1;
        }
        
    }
    printf("the sum is %lld of %d",sum, n);
    free(not_prime);
}