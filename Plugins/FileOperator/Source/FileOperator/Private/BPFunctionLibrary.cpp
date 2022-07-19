// Fill out your copyright notice in the Description page of Project Settings.

#include "BPFunctionLibrary.h"
#include <iostream>
#include <fstream>

FString UBPFunctionLibrary::GetMapData(const FString& MapName)
{
	std::ifstream inFile;
	FString Path;
	
	Path = FPaths::FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir())+MapName;
	Path+=".json";
	inFile.open(*Path);
	
	std::string Data;
	inFile>>Data;
	FString Datastr(Data.c_str());
	return Datastr;
}

void UBPFunctionLibrary::SaveMapData(const FString& MapName,const FString& Datastr)
{
	std::ofstream outFile;
	FString Path;
	
	Path = FPaths::FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir())+MapName;
	Path+=".json";
	outFile.open(*Path);
	if (GEngine)
	{
		UE_LOG(LogTemp, Log, TEXT("%s"), *Path);
	}
	std::string Data(TCHAR_TO_UTF8(*Datastr));
	outFile<<Data;
	outFile.close();
	//outFile.open(*Path);
}
