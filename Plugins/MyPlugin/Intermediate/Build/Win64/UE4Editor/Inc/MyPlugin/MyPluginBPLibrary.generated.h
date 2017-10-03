// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPLUGIN_MyPluginBPLibrary_generated_h
#error "MyPluginBPLibrary.generated.h already included, missing '#pragma once' in MyPluginBPLibrary.h"
#endif
#define MYPLUGIN_MyPluginBPLibrary_generated_h

#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyPluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMyPluginBPLibrary::MyPluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyPluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMyPluginBPLibrary::MyPluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPluginBPLibrary(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UMyPluginBPLibrary(); \
public: \
	DECLARE_CLASS(UMyPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMyPluginBPLibrary(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UMyPluginBPLibrary(); \
public: \
	DECLARE_CLASS(UMyPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginBPLibrary(UMyPluginBPLibrary&&); \
	NO_API UMyPluginBPLibrary(const UMyPluginBPLibrary&); \
public:


#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginBPLibrary(UMyPluginBPLibrary&&); \
	NO_API UMyPluginBPLibrary(const UMyPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginBPLibrary)


#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_25_PROLOG
#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_RPC_WRAPPERS \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_INCLASS \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MyPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PZ_2_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
