#include<iostream>
using namespace std;

int sumOf(int n)
{
  
  if(n==1)
  {
    return n;
  }
  else{
    return(n+sumOf(n-1));
  }
}



int main()
{
   int n;
   cin>>n;
   cout<<"The sum is "<< sumOf(n)<<endl;

}







