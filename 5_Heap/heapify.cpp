#include<iostream>
#include"BinaryHeap.h"

using namespace std;

int main() {

	BinaryHeap<int> H;
 

	cout << endl;

	vector<int> list = {30,17,20,15,10,12,5,7,8,5,2,9};

	for (int i : list)
	{
		H.insert(i);

	}

	H.printHeap();

	cout << " .....Inserting 1,10,6,4...." << endl;

	vector<int> list2 = {1,10,6,4};
	
	for (int i : list2)
	{
		H.insert(i);

	}

	H.printHeap();

	cout << " ......Performing 3 DeleteMin() ......" << endl;



	for (int i = 0 ; i<3; i++ )
	{
	H.deleteMin();
	}

	H.printHeap(); 







//{30,17,20,15,10,12,5,7,8,5,2,9};



return 0;
}
