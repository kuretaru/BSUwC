// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "project__BSUwC__/Board.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	PROJECT__BSUWC___API UClass* Z_Construct_UClass_ABoard_NoRegister();
	PROJECT__BSUWC___API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_project__BSUwC__();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoard);
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_project__BSUwC__,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		if (!Z_Registration_Info_UClass_ABoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoard.OuterSingleton, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoard.OuterSingleton;
	}
	template<> PROJECT__BSUWC___API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
	struct Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Board_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Board_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoard, ABoard::StaticClass, TEXT("ABoard"), &Z_Registration_Info_UClass_ABoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoard), 575430489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Board_h_2225767209(TEXT("/Script/project__BSUwC__"),
		Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Board_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Board_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
