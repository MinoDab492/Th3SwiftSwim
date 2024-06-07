/* SPDX-License-Identifier: MPL-2.0 */

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FTh3SwiftSwimModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
