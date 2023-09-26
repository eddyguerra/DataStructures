//Program by Eddy Guerra
//This Program Deletes Elements from Linked Lists
//and tests to see which operation is faster
#include <iostream>
#include <vector>
#include <time.h>
#include <list>
#include <iterator>
#include <iomanip>
using namespace std;

int main()
{
	int numOfElements=100000; //Number of Elements to add to list or vector
	int indexErase= 5000; //Use to erase 5001st element


	//For timing
	clock_t begin, end;
	double elapsed_time;

	//Declaration of list until timing its deletion
	list<int> listNums;
	for(int i=0; i<=numOfElements;++i)
	{
		listNums.push_back(i);
	};
	
	//Position in which element is deleted
	auto index= listNums.begin();
	advance(index,indexErase); //Advances position to index we want to erase

	begin= clock();
	listNums.erase(index);//Erases the Element
	end= clock();

	elapsed_time=double(end-begin)/CLOCKS_PER_SEC;
	cout<<"The deletion time for List was   "<<fixed<<setprecision(10)<<elapsed_time<<"Seconds"<<endl;

	//Declaration of vector until timing its deletion
	vector<int> vectNums;
	for(int i=0; i<=numOfElements;++i)
	{
		vectNums.push_back(i);
	};
	
	begin= clock();
	vectNums.erase(vectNums.begin()+indexErase);
	end= clock();

	elapsed_time=double(end-begin)/CLOCKS_PER_SEC;
	cout<<"\nThe deletion time for Vector was "<<fixed<<setprecision(10)<<elapsed_time<<"Seconds"<<endl;

	return 0;
};