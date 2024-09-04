#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *A = new int[n];  //Dynamic array A;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int m;      // the size M must be greater than size N;
    cin>>m;
    int *B = new int[m];  //Dynamic array B;
    for(int i=0;i<n;i++)
    {
        B[i]=A[i];      //copy the array A to array B;
    }
    delete A;
    for(int i=n;i<m;i++)
    {
        cin>>B[i];      //get the other inputs to array B;
    }

    //Now I habe to print out the array B;
    for(int i=0;i<m;i++)
    {
        cout<<B[i]<<" ";
    }
    return 0;
}