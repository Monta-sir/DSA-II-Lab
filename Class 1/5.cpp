#include<iostream>
using namespace std;

int combination(int n,int r)
{
    if (r==n) return 1;
    if( r==0) return 1;
    if(n<r) return 0;
    if(r==1) return n;
    else return (combination(n-1,r)+combination(n-1,r-1));
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<< "Comb.. is = "<<combination(n,r)<<endl;

}