/*
 * QuickSort.h
 *
 *  Created on: Apr 13, 2014
 *      Author: Girish Prabhu
 */

#ifndef QUICKSORT_H_
#define QUICKSORT_H_
#include "SortingBase.h"

class QuickSort: public SortingBase
{
public:
	void DoSort();
	QuickSort();
	void DoQuickSort(int a[], int left, int right);
	int Partition(int a[], int left, int right);

	QuickSort(int size);
	virtual ~QuickSort();
};

#endif /* QUICKSORT_H_ */
