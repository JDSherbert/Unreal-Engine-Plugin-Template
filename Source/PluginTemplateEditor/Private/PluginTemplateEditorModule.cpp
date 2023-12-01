#include "PluginTemplateEditorModule.h"
#include "PluginTemplateEditor.h"

IMPLEMENT_MODULE(FPluginTemplateEditorModule, FPluginTemplateEditor)

void FPluginTemplateEditorModule::StartupModule()
{
	// Add OnPostEngineInit delegate.
	OnPostEngineInitDelegateHandle = FCoreDelegates::OnPostEngineInit.AddRaw(this, &FPluginTemplateEditorModule::OnPostEngineInit);
}

void FPluginTemplateEditorModule::ShutdownModule()
{
	// Remove OnPostEngineInit delegate
	FCoreDelegates::OnPostEngineInit.Remove(OnPostEngineInitDelegateHandle);
}

void FPluginTemplateEditorModule::OnPostEngineInit()
{
    // Do post engine stuff here
}

#if (ENGINE_MAJOR_VERSION == 5)
FString FPluginTemplateEditorModule::GetReferencerName() const
{
	return TEXT("PluginTemplateModuleGCObject");
}
#endif
