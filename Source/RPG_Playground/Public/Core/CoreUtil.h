#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

template<typename AbstractClass>
static void PolymorphicSerializeDispatch(FArchive& Ar, UClass* TargetClass, UObject* OuterClass)
{
	if (Ar.IsSaving())
	{
		Ar << TargetClass;
	}
	else if (Ar.IsLoading())
	{
		UClass* ObjectiveClass;
		Ar << ObjectiveClass;

		AbstractClass* NewDerivedClass = NewObject<AbstractClass>(OuterClass, ObjectiveClass);
		NewDerivedClass->Serialize(Ar);
	}
}