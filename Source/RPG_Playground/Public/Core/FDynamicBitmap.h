#pragma once

#include "CoreMinimal.h"
#include "Containers/BitArray.h"

class FDynamicBitmap
{
private:
	FDynamicBitmap(int InitialSize)
	{
		Bitmap.Init(false, InitialSize);
	}

	void Set(int BitIndex, bool bValue)
	{
		if (bValue)
		{
			Bitmap.SetBit(BitIndex);
		}
		else
		{
			Bitmap.ClearBit(BitIndex);
		}
	}

	bool Get(int BitIndex) const
	{
		return Bitmap[BitIndex];
	}

public:
	TBitArray<> Bitmap;
};