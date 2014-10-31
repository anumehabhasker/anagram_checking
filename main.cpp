#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cout<<"\n enter first string";
	string s1; 
	cin>>s1;

	cout<<"\n enter second string";
	string s2; 
	cin>>s2;

	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	if(s1.compare(s2)==0)
		cout<<"\n they are anagrams";

	else cout<<"\n not";
	

	return 0;
}
