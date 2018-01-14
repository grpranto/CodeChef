#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long long a, b, c, d, test;

    scanf("%lld", &test);

    for(long long i=0; i<test; i++){
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        if((a==b && c==d) || (a==c && b==d) || (a==d && c==b))  printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}
