/*
Given a big positive number x represented as string, find value of x % 11 or x mod 11. Output is expected as an integer.

Example 1:

Input: x = 1345
Output: 3
Explanation: 1345 % 11 = 3 
Example 1:

Input: x = 231456786543567898765
Output: 1
Explanation: 231456786543567898765 % 11 = 1

SOLUTION:
*/

class Solution
{
public:
    int xmod11(string x)
    {
       long long sum=0,rem=0; 
       for(int i=0;i<x.size();i++) 
       {
           if((i+1)%2!=0) 
           rem-=x[i]-'0'; 
           else 
           rem+=x[i]-'0'; 
       } 
       rem=(rem)%11; 
      return (rem<0)?(rem+11): rem;
       
    
    }
};
