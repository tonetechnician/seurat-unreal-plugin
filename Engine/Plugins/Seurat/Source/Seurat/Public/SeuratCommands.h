/* Copyright 2017 Google Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include "CoreMinimal.h"
#if ENGINE_MINOR_VERSION > 24
#include "Framework/Commands/Commands.h"
#else
#include "Commands/Commands.h"
#endif
#include "SeuratStyle.h"

class FSeuratCommands : public TCommands<FSeuratCommands>
{
public:

	FSeuratCommands()
		: TCommands<FSeuratCommands>(TEXT("Seurat"), NSLOCTEXT("Contexts", "Seurat", "Seurat Plugin"), NAME_None, FSeuratStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
};