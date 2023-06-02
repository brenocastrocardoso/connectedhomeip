/**
 *
 *    Copyright (c) 2023 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include <app/util/af.h>

#include <app/util/attribute-storage.h>

#include <app-common/zap-generated/attributes/Accessors.h>
#include <app-common/zap-generated/callback.h>
#include <app-common/zap-generated/cluster-objects.h>
#include <app-common/zap-generated/enums.h>
#include <app-common/zap-generated/ids/Attributes.h>
#include <app/CommandHandler.h>
#include <app/ConcreteAttributePath.h>
#include <app/ConcreteCommandPath.h>
#include <app/util/error-mapping.h>
#include <lib/core/CHIPEncoding.h>

using namespace chip;
using namespace chip::app::Clusters;
using namespace chip::app::Clusters::WasherControls;
using namespace chip::app::Clusters::WasherControls::Attributes;
using chip::Protocols::InteractionModel::Status;

void emberAfWasherControlsClusterInitCallback(chip::EndpointId endpoint)
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> %s()", __FUNCTION__);
    return;
}

void emberAfWasherControlsClusterServerInitCallback(chip::EndpointId endpoint)
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> %s()", __FUNCTION__);
    return;
}

void MatterWasherControlsClusterServerShutdownCallback(chip::EndpointId endpoint)
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> %s()", __FUNCTION__);
    return;
}

void emberAfWasherControlsClusterClientInitCallback(chip::EndpointId endpoint)
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> %s()", __FUNCTION__);
    return;
}

using imcode = Protocols::InteractionModel::Status;

void MatterWasherControlsClusterServerAttributeChangedCallback(const chip::app::ConcreteAttributePath & attributePath)
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> %s()", __FUNCTION__);
    return;
}

chip::Protocols::InteractionModel::Status
MatterWasherControlsClusterServerPreAttributeChangedCallback(const chip::app::ConcreteAttributePath & attributePath,
                                                             EmberAfAttributeType attributeType, uint16_t size, uint8_t * value)
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> %s()", __FUNCTION__);
    return imcode::Success;
}

chip::Protocols::InteractionModel::Status
MatterWasherControlsClusterClientPreAttributeChangedCallback(const chip::app::ConcreteAttributePath & attributePath,
                                                             EmberAfAttributeType attributeType, uint16_t size, uint8_t * value)
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> %s()", __FUNCTION__);
    return imcode::Success;
}

void emberAfWasherControlsClusterServerTickCallback(chip::EndpointId endpoint)
{
    // ToDo
    ChipLogDetail(Zcl, "==> %s()", __FUNCTION__);
    return;
}

void emberAfWasherControlsClusterClientTickCallback(chip::EndpointId endpoint)
{
    // ToDo
    ChipLogDetail(Zcl, "==> %s()", __FUNCTION__);
    return;
}

void MatterWasherControlsPluginServerInitCallback()
{
    emberAfPrintln(EMBER_AF_PRINT_DEBUG, "--------> Initiating Washer Controls cluster.");
}
