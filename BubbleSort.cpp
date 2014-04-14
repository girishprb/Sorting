/*
 * BubbleSort.cpp
 *
 *  Created on: Apr 13, 2014
 *      Author: Girish Prabhu
 */
#include <stdlib.h>
#include <iostream>
#include "BubbleSort.h"
using namespace std;


//Default constructor
BubbleSort::BubbleSort()
{

}

BubbleSort::BubbleSort(int size):SortingBase(size)
{

}

BubbleSort::~BubbleSort()
{

}


 void BubbleSort::DoSort()
{
	int tmp;
	for(int i=0; i <size-1; i++)
		for(int j=i+1; j<size; j++)
			if(arr[i]>arr[j])
				SwapArray(i,j);
}
