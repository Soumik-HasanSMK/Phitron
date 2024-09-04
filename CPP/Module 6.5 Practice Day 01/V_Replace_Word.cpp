#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
/*  jeta khujbo seta na paowa gele searching result -1..
tai -1 na obdi find korbo and replace korbo; 
ei jonno while loop er moddha chalano hoilo;     */

    while(s.find("EGYPT")!=-1)          
        s.replace(s.find("EGYPT"),5," "); 

/*  find kore jekhane pabe, setar starting index theke replace kobe, 
the kotota character porjonto replace korbe setar songkha & 
ki replace korano hobe seta dekhate hoy;  */

    cout<<s<<endl;
    return 0;
}