//Program By Eddy Guerra
//This Program Delets Elements From a List
//And Shows the amount of time it took
#include <iostream>
#include <vector>
#include <list>
#include <iomanip>
#include <time.h>
#include <iterator>
using namespace std;

int main()
{
    clock_t begin, end;
    double elapsed_time;
    
	list<int> listNums;
	for(int i = 0; i<=10; i++)
	{
		listNums.push_back(i);
	};
	
	cout<<"Your List Was"<<endl;
	for(list<int>::iterator it=listNums.begin(); it!=listNums.end();++it)
	{
	    cout<<*it;
	};

	auto index = listNums.begin();
	
	begin= clock();
	advance(index, 4); //Moves Iterator To 5th element
	listNums.erase(index);
    	end= clock();
    
    cout<<"\nYour List is now"<<endl;
	for(list<int>::iterator it=listNums.begin(); it!=listNums.end();++it)
	{
	    cout<<*it;
	};
	
	elapsed_time=double(end-begin)/CLOCKS_PER_SEC;
	cout<<"\nYour Time Was"<<fixed<<setprecision(10)<<elapsed_time<<"seconds"<<endl;
};
