#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
	clock_t begin,end;
	double elapsed_time;

	//Deleting from End
	list<int> listNum;
	for(int i=0; i<=100000;i++)
	{
		listNum.push_back(i);
	};

	begin=clock();
	listNum.pop_back();
	end=clock();

	elapsed_time=double(end-begin)/CLOCKS_PER_SEC;
	cout<<"Your Elapsed Time For List(Deleting from end) Was: "<<fixed<<setprecision(10)<<elapsed_time<<endl;

	vector<int> vectNum;
	for(int j=0;j<=100000;j++)
	{
		vectNum.push_back(j);
	};

	begin=clock();
	vectNum.pop_back();
	end=clock();

	elapsed_time=double(end-begin)/CLOCKS_PER_SEC;
	cout<<"Your Elapsed For Vector(Deleting from end) Time Was: "<<fixed<<setprecision(10)<<elapsed_time<<endl;

	//Based on results vector is faster when deleting from the end



	return 0;
}
