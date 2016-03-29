#include <iostream>
using namespace std;
int * makeArray(int);
void enterStolenMoonPies(int*, int);
int totalMoonPies(int*, int);
float averageMoonPies(int, int);
int highestMoonPies(int*, int);
int lowestMoonPies(int*, int);

int main()
{
	int *moonPieArray;
	int numDays, total, high, low;
	float average;
	cout << "\n\nHow many days did Jane steal moon pies?  ";
	cin >> numDays;
	moonPieArray = makeArray(numDays);
	enterStolenMoonPies(moonPieArray, numDays);
	total = totalMoonPies(moonPieArray, numDays);
	average = averageMoonPies(numDays, total);
	high = highestMoonPies(moonPieArray, numDays);
	low = lowestMoonPies(moonPieArray, numDays);
	
	cout << "\nTOTAL:  " << total;
	cout << "\nAVERAGE:  " << average;
	cout << "\nHIGHEST:  " << high;
	cout << "\nLOWEST:  " << low;	
	
	cout << endl << endl;
	delete [] moonPieArray;
	return 0;
}
int * makeArray(int numDays)
{
	int *array = new int[numDays];
	return array;
}

void enterStolenMoonPies(int* array, int size)
{
	cout << "\nEnter the number of moon pies stolen for each day.\n\n";
	for(int x=0; x<size; x++)
	{
		cout << "DAY " << (x+1) << ":  ";
		cin >> *(array+x);
	}
}

int totalMoonPies(int* array, int size)
{
	int total = 0;
	for(int x=0; x < size; x++)
	{
		total += *(array+x);
	}
	return total;
}

float averageMoonPies(int size, int total)
{
	float average;
	average = total/static_cast<float>(size);
	return average;
}

int highestMoonPies(int* array, int size)
{
	int high = *(array+0);
	for(int x=1; x < size; x++)
	{
		if(*(array+x) > high)
			high = *(array+x);
	}
	return high;
}
int lowestMoonPies(int* array, int size)
{
	int low = *(array+0);
	for(int x=1; x < size; x++)
	{
		if(*(array+x) < low)
			low = *(array+x);
	}
	return low;
}
