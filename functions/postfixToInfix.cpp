#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

string in2post(string post)
{
	stack <string> temp;
	for(int i=0;i<post.size();i++)
	{
		char x = post[i];
		// if(x>=48 && x<=57)
		if (x >= 'a'&& x <= 'z'|| x >= 'A' && x <= 'Z')
		{
			// string y= string(x);
			stringstream ss;
			string y;
			ss<<x;
			ss>>y;
			// cout<<"test"<<i<<"/"<<y<<endl;
			temp.push(y);
		}	
		else
		{
			string op2 = temp.top();
			temp.pop();
			string op1 = temp.top();
			temp.pop();
			string s = "("+op1+x+op2+")";
			// cout<<"test s  "<<i<<"/"<<s<<endl;
			// cout<<"test op "<<i<<"/"<<op1<<endl;
			// cout<<"test op "<<i<<"/"<<op2<<endl;
			temp.push(s);
		}
	}
	return temp.top();
}


int main()
{
	// string s="10";
	// cout<<s.size()<<endl;
	string s;
	cin>>s;
	cout << in2post(s);
	return 0;

}