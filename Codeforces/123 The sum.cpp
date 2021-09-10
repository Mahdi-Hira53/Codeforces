#include <bits/stdc++.h>
using namespace std;

int sumofFibo(int n);

int main()
{
    int n;
    cin>>n;

    cout<<sumofFibo(n)<<endl;

    return 0;

}

int sumofFibo(int n)
{

    if(n<=0)
        return 0;

    int fibo[n+1],sum;

    fibo[0]=0,fibo[1]=1;

    sum=fibo[0]+fibo[1];

    for(int i=2; i<=n; i++)
    {

        fibo[i]=fibo[i-1]+fibo[i-2];

        sum+=fibo[i];
    }

    return sum;;
}
