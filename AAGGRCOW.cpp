#include<bits/stdc++.h>
using namespace std;
int a[100000];
int fn(int mid,int n,int c)
{
    int ans=1,r=0;
    for(int i=1;i<n && ans<c ;i++)
    {
        if(abs(a[i]-a[r])>=mid)
            r=i,ans++;
    }
return ans;
}
int main()
{
    int t,n,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&c);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int low=0,high=a[n-1],mid;
        while(low<high)
        {
            mid=low+((high-low+1)/2);
            if(fn(mid,n,c)==c)
                low=mid;
            else
                high=mid-1;
        }
    printf("%d\n",low);
    }
}
