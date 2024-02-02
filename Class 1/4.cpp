#include<iostream>
using namespace std;

int reverseNUm(int num, int revNum)
{
    if(num==0) return revNum;

    revNum = revNum*10;
    revNum += (num%10);

    return reverseNUm(num/10,revNum);
}

int main()
{
    int x;
    cin>> x;
    
    int m = reverseNUm(x,0);

   if(x == m)
   {
      cout<<"Number is Palindrome"<<endl;
   }
   else{
    cout<<"Number is not Palindrome"<<endl;
   }

   return 0;

}