#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

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

	void PushBack(const DATA& Item)
	{
		if (NumElements + 1 < Capacity)
			Data[NumElements + 1] = Item;
		else
		{
			DATA* Tmp = data;

			Data = new DATA[Capacity + MEMORY_DYNARRAY];
			memcpy(Data, Tmp, NumElements*sizeof(DATA));

			Data[NumElements + 1] = Item;
		}
		num_elements++;
	}
	

	//Popback HAZLO JAVI!
	DATA At(uint Position) const
	{
		if (Position <= NumElements)
			return Data[Position];
		else
			return 0;
	}

	uint GetCapacity() const
	{
		return Capacity;
	}

	uint GetSize() const
	{
		return NumElements;
	}

	bool CheckEmpty() const
	{
		return (NumElements == NULL);
	
	}

	void Clear()
	{
		NumElements = 0;
	}
};

#endif //__DYNAMICARRAY_H__