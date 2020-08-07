#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    unordered_map<int,int>m;
	      int i,a[n];
	    
	    for(i=0;i<n;i++) {
	        cin>>a[i];
	      m.insert({ a[i], i });
	    }
	        int x;
	        cin>>x;
	  unordered_map<int,int>::const_iterator got = m.find (x);
	     
	     if(got != m.end()){
	         cout<<got->second<<endl;
	         
	     }
	     else {
	     cout<<"-1"<<endl;
	     
	     }
	        
	    
	}
	
	return 0;
}