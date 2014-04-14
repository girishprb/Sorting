/*
 * SelectSort.cpp
 *
 *  Created on: Apr 13, 2014
 *      Author: user
 */

#include "SelectSort.h"

SelectSort::SelectSort()
{

}

SelectSort::SelectSort(int size):SortingBase(size)
{

}

void SelectSort::DoSort()
{
	int min, tmp;
	for(int i=0; i <size; i++)
	{
		min = i;
		for(int j=i+1; j< size; j++)
		{
			if(arr[j] < arr[min])
				min = j;
		}
		if(arr[min] != arr[i])
		{
			SwapArray(i, min);
		}
	}
}

SelectSort::~SelectSort()
{

}

