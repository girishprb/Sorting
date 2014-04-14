/*
 * BubbleSort.h
 *
 *  Created on: Apr 13, 2014
 *      Author: Girish Prabhu
 */

#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_
#include "SortingBase.h"

class BubbleSort: public SortingBase
{
public:
	BubbleSort();
	BubbleSort(int size);
	void DoSort();
	virtual ~BubbleSort();
};

#endif /* BUBBLESORT_H_ */
