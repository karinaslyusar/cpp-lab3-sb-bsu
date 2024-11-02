#include<iostream>
#include <math.h>
using namespace std;
int main()
{
int i = 1, sum_k = 0, number;
float k;
cout << " Enter the amount of integers  = ";
cin >> k;
if (k!=(int)k)
{
cout << "Error:";
cin >> k;
}
do 
{
cout << "Enter integer nr. " << i << ": ";
cin >> number;
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: " << sum_k;
return 0;
}
