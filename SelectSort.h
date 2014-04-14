/*
 * SelectSort.h
 *
 *  Created on: Apr 13, 2014
 *      Author: user
 */

#ifndef SELECTSORT_H_
#define SELECTSORT_H_
#include "SortingBase.h"

class SelectSort: public SortingBase
{
public:
	SelectSort();
	SelectSort(int size);
	void DoSort();
	virtual ~SelectSort();
};

#endif /* SELECTSORT_H_ */
