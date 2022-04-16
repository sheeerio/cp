#include <bits/stdc++.h>
using namespace std;

int main() {
	//2 = tr
	//1 = bl
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);

	int ax1, ay1, ax2, ay2;
	cin>>ax1>>ay1>>ax2>>ay2;
	int bx1,by1,bx2,by2;
	cin>>bx1>>by1>>bx2>>by2;
	
	int len = max(ax2, bx2)-min(ax1, bx1);
	int wid = max(ay2, by2)-min(ay1, by1);
	if (len>wid) {
		cout<<len*len;
	}
	else {
		cout<<wid*wid;
	}

}
