/*
 * SortingBase.h
 *
 *  Created on: Apr 13, 2014
 *      Author: user
 */

#ifndef SORTINGBASE_H_
#define SORTINGBASE_H_

class SortingBase
{
protected:
	int size;
	int *arr;

public:
	SortingBase();
	SortingBase(int size);
	void Initialize(int min=0, int max=100);
	void PrintArray();
	void SwapArray(int i, int j);
	virtual void DoSort()=0;
	virtual ~SortingBase();
};

#endif /* SORTINGBASE_H_ */
