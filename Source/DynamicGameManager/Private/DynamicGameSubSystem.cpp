// Fill out your copyright notice in the Description page of Project Settings.


#include "DynamicGameSubSystem.h"

bool UDynamicGameSubSystem::LoadGame(const FString& GamePath)
{
	
	IModuleManager& ModuleManager = FModuleManager::Get();

	FName ModuleName = TEXT("YourModuleName"); // 模块的名字

	// 检查模块是否已经加载
	if (!ModuleManager.IsModuleLoaded(ModuleName))
	{
		// 动态加载模块
		IModuleInterface* YourModule = ModuleManager.LoadModule(ModuleName);
		if (YourModule)
		{
			// 模块加载成功，可以进行后续操作
		}
		else
		{
			// 模块加载失败，可以进行错误处理
			return false;
		}
	}
	return true;
}
