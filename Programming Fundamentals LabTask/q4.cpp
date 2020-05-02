#include<fstream>
#include<iostream>
using namespace std;
int main()
{
		ifstream f;
		f.open("out.txt");
		string inp;
		int count=0;
		getline(f,inp);
		for(int i=0;inp[i]!='\0';i++)
		{
			if(inp[i]!=' ')
			{count+=1;}
		}
		cout<<"There are "<<count<<" alphabets in out.txt file\n";
		
}
