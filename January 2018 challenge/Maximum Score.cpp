#include<bits/stdc++.h>
#define SIZE 100000
#define ll long long
using namespace std;

int main(){
    ll T, n, count;

    scanf("%lld", &T);
    while(T--){
        ll sum = 0, max = 0, temp, max1 = -1;
        bool flag = true;
        count = 0;

        scanf("%lld", &n);

        ll arr[n*n + 5];

        for(ll i=0; i<n*n; i++)
            scanf("%lld", &arr[i]);

         for(ll i=n*n-1; i>=0; i--){
            if(flag == true){
                count++;
                if(i >= n*n-n){
                    if(arr[i] > max){
                        max = arr[i];
                    }
                }
                else{
                    if(arr[i] < max1){
                        if(arr[i]>max)
                            max = arr[i];
                    }
                    else if(count==n && max==0)
                        flag = false;

                }
                if(count == n){
                    count = 0;
                    sum += max;
                    max1 = max;
                    max = 0;
                }
            }
        }

        if(flag == true)
            printf("%lld\n", sum);
        else
            printf("-1\n");
    }

    return 0;
}
