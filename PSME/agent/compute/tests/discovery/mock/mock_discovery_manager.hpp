/*!
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
 * */

#pragma once

#include "discovery/discovery_manager.hpp"

namespace ipmi {

class MockDiscoveryManager : public agent::compute::discovery::DiscoveryManager {
public:

    MockDiscoveryManager() :
            DiscoveryManager() { }

    MockDiscoveryManager(std::unique_ptr<ManagementController>& mc) :
            DiscoveryManager(mc) { }

    virtual ~MockDiscoveryManager();

    std::tuple<bool, std::vector<std::uint8_t>> public_read_mdr_data(std::uint16_t bytes_to_read) {
        return read_mdr_data(bytes_to_read);
    }

    std::tuple<bool, std::uint16_t> public_get_mdr_data_region() {
        return get_mdr_data_region();
    }
};

MockDiscoveryManager::~MockDiscoveryManager() { }

}
