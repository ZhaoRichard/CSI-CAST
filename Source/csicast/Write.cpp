// Fill out your copyright notice in the Description page of Project Settings.


#include "Write.h"
#include "csicast.h"

FString newline = "\r\n";

bool UWrite::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool UWrite::SaveTxt(FString SaveTextB, FString FileNameB)
{

	FString savefile = FPaths::ProjectDir() + FileNameB;

	UE_LOG(LogTemp, Warning, TEXT("name: %s"), *savefile);

	return FFileHelper::SaveStringToFile(SaveTextB + newline, *(savefile));

}
