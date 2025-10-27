// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "project__BSUwC__/Checker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChecker() {}
// Cross Module References
	PROJECT__BSUWC___API UClass* Z_Construct_UClass_AChecker_NoRegister();
	PROJECT__BSUWC___API UClass* Z_Construct_UClass_AChecker();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_project__BSUwC__();
// End Cross Module References
	void AChecker::StaticRegisterNativesAChecker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChecker);
	UClass* Z_Construct_UClass_AChecker_NoRegister()
	{
		return AChecker::StaticClass();
	}
	struct Z_Construct_UClass_AChecker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChecker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_project__BSUwC__,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Checker.h" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChecker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChecker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChecker_Statics::ClassParams = {
		&AChecker::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChecker()
	{
		if (!Z_Registration_Info_UClass_AChecker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChecker.OuterSingleton, Z_Construct_UClass_AChecker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChecker.OuterSingleton;
	}
	template<> PROJECT__BSUWC___API UClass* StaticClass<AChecker>()
	{
		return AChecker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChecker);
	struct Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Checker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Checker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChecker, AChecker::StaticClass, TEXT("AChecker"), &Z_Registration_Info_UClass_AChecker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChecker), 2673943155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Checker_h_1427385035(TEXT("/Script/project__BSUwC__"),
		Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Checker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project__BSUwC___Source_project__BSUwC___Checker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
