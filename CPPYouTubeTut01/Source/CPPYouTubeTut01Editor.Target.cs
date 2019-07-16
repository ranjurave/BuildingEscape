// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CPPYouTubeTut01EditorTarget : TargetRules
{
	public CPPYouTubeTut01EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CPPYouTubeTut01");
	}
}
