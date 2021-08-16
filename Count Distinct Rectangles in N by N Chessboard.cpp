/*
So total unique rectangles formed = 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 36 which is the sum of the first 8 natural numbers. 
So in general, distinct rectangles that can be formed in N x N chessboard is: 
 

Sum of the first N natural numbers = N*(N+1)/2
                                   = 8*(8+1)/2
                                   = 36
*/

#include <bits/stdc++.h>
using namespace std;

//NOTE: check for integer overflow

// Function to return the count
// of distinct rectangles
long long rectanglesInChessBoard(long long N) 
{
        
        long long ans = ((N*(N+1)*N*(N+1))/4-(N*(N+1)*(2*N+1))/6);
        
        return ans;
    }

// Driver Code
int main()
{
    long long N = 100000;
    cout<<rectanglesInChessBoard(N);
}
