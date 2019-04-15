// Given two sorted arrays P[] and Q[] in non-decreasing order with size X and Y. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).
// Note: Expected time complexity is O((X+Y) log(X+Y)). DO NOT use extra space.

// Input:
// First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

// Output:
// For each test case, print (X + Y) space separated integer representing the merged array.

// Constraints:
// 1 <= T <= 100
// 1 <= X, Y <= 5*104
// 0 <= Pi, Qi <= 109

// Example:
// Input:
// 1
// 4 5
// 1 3 5 7
// 0 2 6 8 9

// Output:
// 0 1 2 3 5 6 7 8 9

// Explanation:
// Testcase 1: After merging two non-decreasing arrays, we have, 0 1 2 3 5 6 7 8 9.
// ** For More Input/Output Examples Use 'Expected Output' option **
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase=0;
    cin>>testcase;
    int arrSize1=0,arrSize2=0;
    while(testcase--){
        cin>>arrSize1>>arrSize2;
        std::vector<int> vec1, vec2;
        //std::vector<int> temp;
        int cache_;
        for(int i=0;i<arrSize1;++i){
            cin>>cache_;
            vec1.push_back(cache_);
        }
        for(int i=0;i<arrSize2;++i){
            cin>>cache_;
            vec2.push_back(cache_);
        }
        //vec2.reserve( vec1.size() + vec2.size() );
        vec2.insert(vec2.end(), vec1.begin(), vec1.end());
        //temp.insert(temp.end(), vec2.begin(), vec2.end());
        
        int size=arrSize2+arrSize2;
        std::sort (vec2.begin(), vec2.end()); 
        for(int i=0;i<size-1;++i){
            cout<<vec2[i]<<" ";
        }
    }
}