#include <iostream>
using namespace std;

// git 2 đã ở đây

int main () {
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long a[n];
		for (long long i=0;i<n;i++){
			cin>>a[i];
		}
		long long max=0;
		for (int i=0;i<n;i++){
			long long temp=0;
			for (int j=i;j<n;j++){
				temp+=a[j];
				if (temp>=max) max=temp;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}