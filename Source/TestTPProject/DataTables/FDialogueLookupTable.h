// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FDialogueLookupTable.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FDialogueLookupTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	/*
	 	Defaults
	FCrdDetail()
	: CName("")
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=DialogueStruct)
	FString Blueprint_Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DialogueStruct)
	int32 Npc_Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DialogueStruct)
	FString Text;

};

