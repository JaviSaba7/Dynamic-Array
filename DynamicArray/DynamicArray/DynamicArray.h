#ifndef __DYNAMYCARRAY_H__
#define __DYNAMYCARRAY_H__

#define MEMORY_DYNARRAY 16
#include "Definitions.h"

template <class DATA>
class DynamicArray
{
private: 
	uint Capacity = 0;
	uint NumElements = 0;
	DATA* Data = NULL;

public: 
	DynamicArray() //CONSTRUCTOR
	{
		Data = new DATA[MEMORY_DYNARRAY];
	}

	//MAX Y MIN!!!!!!!!!
	DynamicArray(const DynamicArray& AnotherDynArray)// COPY CONSTRUCTOR
	{

		if (AnotherDynArray.Capacity < MEMORY_DYNARRAY)
		{
			Capacity = MEMORY_DYNARRAY;
		}
		else
		{
			Capacity = AnotherDynArray.Capacity;
		}

		Data = new DATA[Capacity];
		memcpy(Data, AnotherDynArray.Data, AnotherDynArray.NumElements*sizeof(DATA));

	}

	~DynamicArray()
	{
		if (data != NULL)
		{
			delete[] Data;
		}
	}

	//Per fer
	/*void PushBack(const DATA& AnotherDynArray)
	{
		if ()
		{

		}
	}*/
	

	/*HOMEWORK FOR MONDAY:
	at, capacity, size, clear, ctr(? ) i empty*/
	//To do: AT & CTR
	bool At(uint position, DATA &item) //To do
	{
	
	}

	uint GetCapacity() const
	{
		return Capacity;
	}

	uint GetSize() const
	{
		return NumElements;
	}

	bool CheckEmpty() const //Check if data is empty // si la
	{
		return (NumElements == NULL);
	
	}

	void Clear()
	{
		NumElements = 0;
	}


};

#endif //__DYNAMYCARRAY_H__