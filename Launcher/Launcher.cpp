#include "pch.h"
#include <iostream>
#include "Train.h"
using namespace std;
int main()
{
	Train train("Algo-222");
	train.buildTrain();
	train.listAllWagons();
	system("pause");
}
