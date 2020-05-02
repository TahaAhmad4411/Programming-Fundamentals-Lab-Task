#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ifstream f;
	string l;
	f.open("story.txt");
	int count=0;
	if(f.is_open())
	{
		while(getline(f,l))
		{

			if(l[0]=='a' || l[0]=='A')
			{
				continue;
			}
			else{count+=1;}
		}
		f.close();
	}
	else{cout<<"Error in a file ";}

	cout<<"The count is "<<count-1<<endl;	
}
