// FloatArrayDriver.cpp
#include "FloatArray.h"
#include <iostream>
using namespace std;
class FloatArray
{
public:
	// Create a FloatArray with zero elements.
	FloatArray() : mData(nullptr), mSize (0) {}
	// Create a FloatArray with 'size' elements.
	FloatArray(int size) :mData(nullptr), mSize(size){}
	// Create a FloatArray from another FloatArray--
	// be sure to prevent memory leaks!
	FloatArray(const FloatArray& rhs);
	// Free dynamic memory.
	~FloatArray();
	// Define how a FloatArray shall be assigned to
	// another FloatArray--be sure to prevent memory
	// leaks!
	FloatArray& operator=(const FloatArray& rhs);
	// Resize the FloatArray to a new size.
	void resize(int newSize);
	// Return the number of elements in the array.
	int size();
	// Overload bracket operator so client can index
	// into FloatArray objects and access the elements.
	float& operator[](int i);
private:
	float* mData; // Pointer to array of floats (dynamic memory).
	int mSize; // The number of elements in the array.
};


void PrintFloatArray(FloatArray& fa)
{
	cout << "{ ";
	for (int i = 0; i < fa.size(); ++i)
		cout << fa[i] << " ";
	cout << "}" << endl << endl;
}







int main()
{
	FloatArray A;
	A.resize(4);
	A[0] = 1.0f;
	A[1] = 2.0f;
	A[2] = 3.0f;
	A[3] = 4.0f;
	cout << "Printing A: ";
	PrintFloatArray(A);
	FloatArray B(A);
	cout << "Printing B: ";
	PrintFloatArray(B);
	FloatArray C = B = A;
	cout << "Printing C: ";
	PrintFloatArray(C);
	A = A = A = A;
	cout << "Printing A: ";
	PrintFloatArray(A);
}


#include "FloatArray.h"

using namespace std;

FloatArray::FloatArray(const FloatArray& rhs): mData(nullptr), mSize(rhs.mSize)
{
	// Allocate memory for the new array
	mData = new float[mSize];
	// Copy elements from rhs to this object
	for (int i = 0; i < mSize; ++i)
	{
		mData[i] = rhs.mData[i];
	}
}



// Free dynamic memory.
FloatArray::~FloatArray()
{
	// Lösche den dynamisch allokierten Speicher
	delete[] mData;
	// Setze den Zeiger auf nullptr, um auf gelöschten Speicher zu verweisen
	mData = nullptr;
	// Setze die Größe auf 0, da das Objekt zerstört wird
	mSize = 0;
}

FloatArray& FloatArray::operator=(const FloatArray& rhs)
{
	if (this != &rhs)
	{
		resize(rhs.mSize);
		for (int i = 0; i < mSize; ++i)
			mData[i] = rhs.mData[i];
	}
	return *this;

}

// Resize the FloatArray to a new size.
void FloatArray::resize(int newSize)
{
	float* newArr = new float[newSize];

	//Copy elements to the new array
	if (newSize >= mSize)
	{
		for (int i = 0; i < mSize; ++i)
		{
			newArr[i] = mData[i];
		}
	}
	else //newSize < mSize
	{
		//Copy as many elements as possible
		for (int i=0; i<newSize; ++i)
			newArr[i] = mData[i];
	}
	delete[] mData;
	mData = newArr;
	mSize = newSize;
}

// Return the number of elements in the array.
int FloatArray::size()
{
	return mSize;
}

// Overload bracket operator so client can index
// into FloatArray objects and access the elements.
float& FloatArray::operator[](int i)
{
	if (i<0 || i > mSize)
	{
		cout << "Index out of range";
	}
	return mData[i];

}