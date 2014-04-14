/*
 * InsertionSort.h
 *
 *  Created on: Apr 13, 2014
 *      Author: user
 */

#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_
#include "SortingBase.h"

class InsertionSort: public SortingBase
{
public:
	void DoSort();
	InsertionSort();
	InsertionSort(int size);
	virtual ~InsertionSort();
};


#endif /* INSERTIONSORT_H_ */
