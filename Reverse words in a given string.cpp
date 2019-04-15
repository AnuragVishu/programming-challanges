// Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

// Input:
// The first line contains T denoting the number of testcases. T testcases follow. Each case contains a string S containing characters.

// Output:
// For each test case, in a new line, output a single line containing the reversed String.

// Constraints:
// 1 <= T <= 100
// 1 <= |S| <= 2000

// Example:
// Input:
// 2
// i.like.this.program.very.much
// pqr.mno

// Output:
// much.very.program.this.like.i
// mno.pqr

#include<bits/stdc++.h>
using namespace std;

std::string reversePartialString(string FullyReversedString){
        string StringWanted;
        std::stack<char> CharStack;
        char StackTopCache;
        FullyReversedString += '.';
        
        for(int i=0;i<FullyReversedString.size()+1;i++){
            if(FullyReversedString[i] != '.'){
                CharStack.push(FullyReversedString[i]);
            }
            else{
                while(!CharStack.empty()){
                    StackTopCache = CharStack.top();
                    StringWanted += StackTopCache;
                    CharStack.pop();
                    //StringWanted += '.';
                }
                StringWanted += '.';
            }
        }
    StringWanted.pop_back();
    return StringWanted;
}

std::string reverse(string str){
    std::stack<char> st;
    for(int i=0;i<str.size();i++){
        st.push(str[i]);
    }
    string reverseString;
    char temp;
    for(int i=0 ; i<str.size() ; i++){
        temp = st.top();
        reverseString += temp;
        st.pop();
    }
    string PerfectString = reversePartialString(reverseString);
    return PerfectString;
}

int main()
 {
	int tt=0;
	cin>>tt;
	
	while(tt--){
	    string str;
	    cin>>str;
	    string Reverse = reverse(str);
	    cout<<Reverse<<endl;
	}
	return 0;
}