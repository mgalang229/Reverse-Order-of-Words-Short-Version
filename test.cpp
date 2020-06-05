#include <bits/stdc++.h>

using namespace std;

const int mxN=1e5;
char a[mxN];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	getline(cin, s);
	int cnt=0;
	for(int i=s.size()-1; i>=0; --i){
		a[cnt]=s[i];
		cnt++;
	}
	for(int i=0; a[i]!='\0'; ++i){
		if(a[i+1]==' '||a[i+1]=='\0'){
			for(int j=i; j>=0&&a[j]!=' '; --j){
				cout << a[j];
			}
			cout << " ";
		}
	}
	cout << "\n";
	return 0;
}
