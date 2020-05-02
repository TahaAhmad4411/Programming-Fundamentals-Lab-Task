#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream f;
	f.open("notes.txt");
	for(int i=0;i<100;i++)
	{
		f<<i<<endl;
	}
	f.close();
}

