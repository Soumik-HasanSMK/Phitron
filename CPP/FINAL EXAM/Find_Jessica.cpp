#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    int ans=0;
    while(ss>>word)
    {
        string test_str="Jessica";     //kon ho tum "Jessica" , tomarei khubo sesh prjonto;
        if(word==test_str)
        {
            ans=1;      //Jessica, tomare life a pailam, okay I'm happy now. 1 kore dilam.
            break;      //tomare paichi, r khujbona...break;
        }
        else
            ans=0;      //tomare na paowa obdi khujbo;
    }
    if(ans==1)      //jehetu paichi, tumi shudhui amar; "YES" print koro;
        cout<<"YES";
    else        //jehetu paini, "NO" print koro;
        cout<<"NO";
    return 0;
}