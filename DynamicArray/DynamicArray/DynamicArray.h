#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

#define MEMORY_DYNARRAY 16
typedef unsigned int uint;
using namespace std;

template <class DATA>
class DynamicArray
{
private: 
	uint Capacity = 0;
	uint NumElements = 0;
	DATA* data = 0;

public: 
	DynamicArray() //CONSTRUCTOR
	{
		data = new DATA[MEMORY_DYNARRAY];
	}

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

		data = new DATA[Capacity];
		memcpy(data, AnotherDynArray.data, AnotherDynArray.NumElements*sizeof(DATA)+
			+);

	}

	~DynamicArray()
	{
		if (data != NULL)
		{
			delete[] data;
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

	bool Ctr(uint new_capacity) //ASK
	{
	}

	uint GetCapacity()
	{
		return Capacity;
	}

	uint GetSize()
	{
		return NumElements;
	}

	bool CheckEmpty() //Check if data is empty
	{
		if (data == 0)
			return true;

		else
			return false;
	}

	void Clear
	{
		data = 0;
		NumElements = 0;
	}


};

#endif //__DYNAMICARRAY_H__