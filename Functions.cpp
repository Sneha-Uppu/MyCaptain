#include <iostream>
using namespace std;
int prime(int n)
 {
   int i;
   int flag = 1;
   for(i = 2; i <= n/2; ++i) 
   {
      if(n % i == 0) 
	  {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main() 
{
   int n, i;
   cout << "Enter a number : \n";
   cin >> n;
   for(i = 2; i <= n/2; ++i)
    {
      if (prime(i)) 
	  {
         if (prime(n - i))
		  {
            cout << n << " = " << i << " + " << n-i << endl;
         }
      }
   }
   return 0;
}
