#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class PLUGINTEMPLATEEDITOR_API FPluginTemplateEditorModule : public IModuleInterface
{

public:

	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;

#if (ENGINE_MAJOR_VERSION == 5)
	FString GetReferencerName() const override;
#endif

protected:

	/**
	 * Do stuff after engine is initialized.
	 */
	void OnPostEngineInit();

private:

	/** OnPostEngineInit delegate handler. */
	FDelegateHandle OnPostEngineInitDelegateHandle;
};
