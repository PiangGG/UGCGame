// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileOperator/Public/BPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFunctionLibrary() {}
// Cross Module References
	FILEOPERATOR_API UClass* Z_Construct_UClass_UBPFunctionLibrary_NoRegister();
	FILEOPERATOR_API UClass* Z_Construct_UClass_UBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FileOperator();
// End Cross Module References
	DEFINE_FUNCTION(UBPFunctionLibrary::execSaveMapData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Datastr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPFunctionLibrary::SaveMapData(Z_Param_MapName,Z_Param_Datastr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFunctionLibrary::execGetMapData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFunctionLibrary::GetMapData(Z_Param_MapName);
		P_NATIVE_END;
	}
	void UBPFunctionLibrary::StaticRegisterNativesUBPFunctionLibrary()
	{
		UClass* Class = UBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMapData", &UBPFunctionLibrary::execGetMapData },
			{ "SaveMapData", &UBPFunctionLibrary::execSaveMapData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics
	{
		struct BPFunctionLibrary_eventGetMapData_Parms
		{
			FString MapName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFunctionLibrary_eventGetMapData_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::NewProp_MapName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFunctionLibrary_eventGetMapData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::NewProp_MapName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPF" },
		{ "ModuleRelativePath", "Public/BPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFunctionLibrary, nullptr, "GetMapData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::BPFunctionLibrary_eventGetMapData_Parms), Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFunctionLibrary_GetMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFunctionLibrary_GetMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics
	{
		struct BPFunctionLibrary_eventSaveMapData_Parms
		{
			FString MapName;
			FString Datastr;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Datastr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Datastr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFunctionLibrary_eventSaveMapData_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_Datastr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_Datastr = { "Datastr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFunctionLibrary_eventSaveMapData_Parms, Datastr), METADATA_PARAMS(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_Datastr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_Datastr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_MapName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::NewProp_Datastr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPF" },
		{ "ModuleRelativePath", "Public/BPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFunctionLibrary, nullptr, "SaveMapData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::BPFunctionLibrary_eventSaveMapData_Parms), Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPFunctionLibrary);
	UClass* Z_Construct_UClass_UBPFunctionLibrary_NoRegister()
	{
		return UBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FileOperator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFunctionLibrary_GetMapData, "GetMapData" }, // 4195905114
		{ &Z_Construct_UFunction_UBPFunctionLibrary_SaveMapData, "SaveMapData" }, // 3009946736
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPFunctionLibrary_Statics::ClassParams = {
		&UBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBPFunctionLibrary.OuterSingleton;
	}
	template<> FILEOPERATOR_API UClass* StaticClass<UBPFunctionLibrary>()
	{
		return UBPFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_UGCGame_Plugins_FileOperator_Source_FileOperator_Public_BPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UGCGame_Plugins_FileOperator_Source_FileOperator_Public_BPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBPFunctionLibrary, UBPFunctionLibrary::StaticClass, TEXT("UBPFunctionLibrary"), &Z_Registration_Info_UClass_UBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPFunctionLibrary), 3704672058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UGCGame_Plugins_FileOperator_Source_FileOperator_Public_BPFunctionLibrary_h_2322023537(TEXT("/Script/FileOperator"),
		Z_CompiledInDeferFile_FID_UGCGame_Plugins_FileOperator_Source_FileOperator_Public_BPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UGCGame_Plugins_FileOperator_Source_FileOperator_Public_BPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
