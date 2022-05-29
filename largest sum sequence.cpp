/*

Finding the largest sum of continous subsequence in O(n) time

*/

#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    cout<<"enter array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0,k;
    int max=0,max1=0,pstart,start=0;
    int end=0,pend;
    cout<<start<<"\t"<<end<<endl;
    while(j<n)
    {
        int sum=0;
        if(a[j]>0)
        {
            sum=sum+a[j];
            pstart=j;
            pend=j;
            max1=sum;
            while(sum>=0 && j<n-1)
            {
                j++;
                sum=sum+a[j];
                if(max1<sum)
                {
                    pend=j;
                    max1=sum;
                }

            }

        }

        else
        {
            j++;
        }
        if(max<=max1)
        {
            cout<<"max "<<max<<"\t"<<max1<<endl;
            start=pstart;
            end=pend;
            max=max1;
        }

    }
    cout<<start<<"\t"<<end<<endl;
    for(k=start;k<=end;k++)
    {
        cout<<a[k]<<"\t";
    }
    cout<<"j"<<j;
    return 0;
}


// 8 -20 17 -2 -3 13 -10 11 -8

/*
17
-20 17 -2 -3 13 -10 12 -8 -1000 -20 17 -2 -3 13 -10 13 -8 -1000 -20 12 9 -2 -3 13 -10 9 -8


27
-20 17 -2 -3 13 -10 12 -8 -1000 -20 17 -2 -3 13 -10 13 -27 12 5 -2 -3 13 -10 14 -10 9 -8


*/
