// articy Software GmbH & Co. KG
/** This code file was generated by ArticyImporter. Changes to this file will get lost once the code is regenerated. */

#pragma once

#include "ArticyRuntime/Public/ArticyDatabase.h"
#include "ManiacManfredExpressoScripts.h"
#include "ManiacManfredDatabase.generated.h"

UCLASS(BlueprintType)
class UManiacManfredDatabase : public UArticyDatabase
{
	GENERATED_BODY()
	
public:
	 UManiacManfredDatabase() 
	{
		SetExpressoScriptsClass(UManiacManfredExpressoScripts::StaticClass());
	}
	
	/** Get the instace (copy of the asset) of the database. */
	UFUNCTION(BlueprintPure, Category = "articy:draft", meta=(HidePin="WorldContext", DefaultToSelf="WorldContext", DisplayName="GetArticyDB", keywords="database"))
	static UManiacManfredDatabase* Get(const UObject* WorldContext) 
	{
		return static_cast<UManiacManfredDatabase*>(Super::Get(WorldContext));
	}
	
	/** Get the global variables. */
	UFUNCTION(BlueprintPure, Category = "articy:draft", meta=(keywords="global variables"))
	UManiacManfredGlobalVariables* GetGVs() const override
	{
		return static_cast<UManiacManfredGlobalVariables*>(Super::GetGVs());
	}
};
