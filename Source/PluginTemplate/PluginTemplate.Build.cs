using UnrealBuildTool;

public class PluginTemplate : ModuleRules
{
	public PluginTemplate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateIncludePaths.Add("PluginTemplate/Private");

		PublicDependencyModuleNames.AddRange
        (
			new string[]
			{
				"Core"
			}
		);

		PrivateDependencyModuleNames.AddRange
        (
			new string[]
			{
				"CoreUObject",
				"Engine"
			}
		);
	}
}
