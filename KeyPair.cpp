  #include<bits/stdc++.h>
  using namespace std;
  
 string keyPair(int a[],int n,int x){
      
     sort(a,a+n);
    int j=0;
    int k=n-1;
   
    while(j<k){
        if(a[j]+a[k]==x){
           return "Yes";
        }
        else if(a[j]+a[k]<x)
        j++;
        else 
        k--;
    }
    return "No";
     
  }
 
 
int main()
 {
	 int t;
	 cin>>t;
	  while(t--){
	      int n,x;
	      cin>>n>>x;
	     int i;
	      int a[n];
	      for(i=0;i<n;i++){
	          cin>>a[i];
	      }
 cout<<keyPair(a,n,x)<<endl;
     
	  }
 
	return 0;
}