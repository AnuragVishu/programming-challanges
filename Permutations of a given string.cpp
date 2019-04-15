// Given a string S. The task is to print all permutations of a given string.

// Input:
// The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

// Output:
// For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ size of string ≤ 5

// Example:
// Input:
// 2
// ABC
// ABSG

// Output:
// ABC ACB BAC BCA CAB CBA 
// ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA

// Explanation:
// Testcase 1: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .

#include <bits/stdc++.h>
#include <set>
using namespace std;

int factorial(int n) 
{ 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
}

void permuteHelper(string s, string solver, std::set<string>& StringAvailable, int size) {
    auto finder = StringAvailable.find(solver);
    std::vector<string> sortedstr;
    if(s.empty()) {
	    if(*finder != solver){
    		cout<<solver<<" ";
    		sortedstr.push_back(solver);
    		//sort(sortedstr.begin(), sortedstr.end());
    		StringAvailable.insert(solver);
    		if(sortedstr.size() == factorial(size)){
    		    sort(sortedstr.begin(), sortedstr.begin()+size);
    		    for(auto x: sortedstr){
    		        cout << x << " ";
    		    }
    		}
	    }
    }
    else{
	    for(int i=0 ; i<s.length() ; i++){
		    //APPEND/EXPLORE/REMOVE
		    char c = s[i];
		    solver+=c;
		    s.erase(i,1);
		    
		    permuteHelper(s, solver, StringAvailable, size);
		    
		    //REMOVE
		    s.insert(i,1,c);
		    solver.erase(solver.length()-1, 1);
	    }
    }
}

void permute(string s,int size) {
    std::set<string> Sset;
    permuteHelper(s, "", Sset, size);
}

int main() {
    int tt=0;
    cin>>tt;
    while(tt--){
    	string a;
    	cin>>a;
    	int size = a.size();
    	permute(a,size);
    	cout<<endl;
    }
    return 0;
}
