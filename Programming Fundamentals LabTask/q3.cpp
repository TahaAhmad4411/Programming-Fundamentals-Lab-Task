#include<fstream>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	ifstream f;
	string in;
	f.open("first.txt");
	getline(f,in);
	f.close();
	
	string s=" ";
	for(int i=1;in[i]!='\0';i++)
	{
		if((in[i]=='a' || in[i]=='e' || in[i]=='i' ||
           in[i]=='o' || in[i]=='u' || in[i]=='A' ||
           in[i]=='E' || in[i]=='I' || in[i]=='O' ||
           in[i]=='U')&&(in[i-1]==' '))
		{
			
			int j=i;
			
			for(j;in[j]!=' ';j++)
			{s+=in[j];}
			s+=" ";
			i+=1;	
		}
		
	}
	
	ofstream f1;
	f1.open("second.txt");
	f1<<s;
	f1.close();	
}
