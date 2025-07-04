#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	for(int i=0; i<n-1; i++){
        if(i%2==0){
            if(v[i]>v[i+1]){swap(v[i],v[i+1]);}
        }
        else{
            if(v[i]<v[i+1]){swap(v[i],v[i+1]);}
        }
	}
	for(int i=0; i<n; i++){cout<<v[i]<<" ";}cout<<endl;
	}

}