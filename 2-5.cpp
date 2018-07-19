#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> vec;
	//vec[0]=10;                   // vec[0] is not defined and it made a runtime error.
	vec.push_back(12.3);           //now we have vec[0] element.
	vec[0] = 10;                   //now vec[0] is defined and we can use it!
	
	//////////////////////////////////////////////////////////////////////
	
	vector<int> v(6);              // it initializes v with 6 elements.
	v[0]=12;
	v[3]=13;                       // and we can use v[0] to v[5]. we also can push back again and add more elements to v.
	
	////////////////////////////////////////////////////////////////////////
	
	vector<string> philosophers(4,"Plato");
	//philosophers[2]=99           //fortunatly it made a compile error. it's easier to fix a compile error than fixing a runtime error!
	
	////////////////////////////////////////////////////////////////////////
	
	vector<double> vd(1000,1.2);   // it makes a vector with 1000 indexes and puts 1.2 into all of them.

	////////////////////////////////////////////////////////////////////////
	
	vector< vector<int> > twod(3); //vector of vector!
	twod[0].push_back(12);
	twod[1].push_back(13.1);
	twod[1].push_back(16.7);
	
	cout << twod[1][1] << endl ;
	
	/////////////////////////////////////////////////////////////////////////
	//how to initialize a vector of vector?
	vector<vector<int> >twodee ( 3 , vector<int>(4));
	 
}

