/*
 * SortingBase.cpp
 *
 *  Created on: Apr 13, 2014
 *      Author: Girish Prabhu
 */

#include "SortingBase.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

SortingBase::SortingBase()
{
	this->size = 10;
	arr = new int[10];
}

SortingBase::SortingBase(int size)
{
	this->size = size;
	arr = new int[size];
}


void SortingBase::Initialize(int min, int max)
{
	for(int i=0; i <size; i++)
		arr[i] = min + (rand()% (max + min));
}

void SortingBase::PrintArray()
{
	for(int i=0; i <size; i++)
			cout<< arr[i] << "\t";
	cout<<endl;
}

void SortingBase::SwapArray(int i, int j)
{
	int tmp;
	if((i< size && i>=0)&&(j< size && j>=0))
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

SortingBase::~SortingBase()
{
	delete arr;
}
