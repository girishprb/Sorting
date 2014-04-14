/*
 * InsertionSort.cpp
 *
 *  Created on: Apr 13, 2014
 *      Author: Girish Prabhu
 */

#include "InsertionSort.h"

InsertionSort::InsertionSort() {
	// TODO Auto-generated constructor stub

}

InsertionSort::~InsertionSort() {
	// TODO Auto-generated destructor stub
}

InsertionSort::InsertionSort(int size):SortingBase(size)
{

}

void InsertionSort::DoSort()
{
	int tmp,j;
	for(int i=1; i <size; i++)
	{
		tmp=arr[i];
		j=i;
		while(j>0 && arr[j-1]>tmp)
		{
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = tmp;
	}
}
