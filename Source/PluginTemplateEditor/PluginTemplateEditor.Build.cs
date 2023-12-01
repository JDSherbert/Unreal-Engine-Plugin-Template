using UnrealBuildTool;

public class PluginTemplateEditor : ModuleRules
{
	public PluginTemplateEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateIncludePaths.Add("PluginTemplateEditor/Private");
		PrivateIncludePaths.Add("PluginTemplate/Private");

		PublicDependencyModuleNames.AddRange
        (
			new string[]
			{
				"Core",
				"InputCore"
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange
        (
			new string[]
			{
				"PluginTemplate",
                "Engine",
				"CoreUObject",
                "UnrealEd"
			}
		);
	}
}
