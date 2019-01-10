/*!
 * @section LICENSE
 *
 * @copyright
 * Copyright (c) 2015-2017 Intel Corporation
 *
 * @copyright
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * @copyright
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * @copyright
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @section DESCRIPTION
 *
 * */

#include "agent-framework/module/model/ethernet_switch_port_vlan.hpp"
#include "agent-framework/module/constants/network.hpp"

using namespace agent_framework::model;
using namespace agent_framework::model::utils;

const enums::Component EthernetSwitchPortVlan::component = enums::Component::EthernetSwitchPortVlan;
const enums::CollectionName EthernetSwitchPortVlan::collection_name =
    enums::CollectionName::EthernetSwitchPortVlans;

EthernetSwitchPortVlan::EthernetSwitchPortVlan(const std::string& parent_uuid, enums::Component parent_type) :
    Resource{parent_uuid, parent_type} {}

EthernetSwitchPortVlan::~EthernetSwitchPortVlan() {}

Json::Value EthernetSwitchPortVlan::to_json() const {
    Json::Value result;
    result[literals::EthernetSwitchPortVlan::STATUS] = get_status().to_json();
    result[literals::EthernetSwitchPortVlan::VLAN_ID] = get_vlan_id();
    result[literals::EthernetSwitchPortVlan::VLAN_NAME] = get_vlan_name();
    result[literals::EthernetSwitchPortVlan::VLAN_ENABLE] = get_vlan_enable();
    result[literals::EthernetSwitchPortVlan::TAGGED] = get_tagged();
    result[literals::EthernetSwitchPortVlan::OEM] = get_oem().to_json();
    return result;
}

EthernetSwitchPortVlan EthernetSwitchPortVlan::from_json(const Json::Value& json) {
    EthernetSwitchPortVlan vlan;

    vlan.set_status(attribute::Status::from_json(json[literals::EthernetSwitchPortVlan::STATUS]));
    vlan.set_vlan_id(json[literals::EthernetSwitchPortVlan::VLAN_ID]);
    vlan.set_vlan_name(json[literals::EthernetSwitchPortVlan::VLAN_NAME]);
    vlan.set_vlan_enable(json[literals::EthernetSwitchPortVlan::VLAN_ENABLE]);
    vlan.set_tagged(json[literals::EthernetSwitchPortVlan::TAGGED]);
    vlan.set_oem(attribute::Oem::from_json(json[literals::EthernetSwitchPortVlan::OEM]));
    vlan.set_resource_hash(json);

    return vlan;
}
