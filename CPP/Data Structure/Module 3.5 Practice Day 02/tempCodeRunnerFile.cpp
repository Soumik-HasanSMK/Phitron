or(int j=i;j<=n;j++)
        {
            if(i==l+1)
                cout<<"X"<<endl;
            if(j+i==n+1)
                cout<<"/";
             if(j==i)
                cout<<"\\";
            else
                cout<<" ";
        }