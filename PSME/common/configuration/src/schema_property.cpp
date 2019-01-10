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
 * @file schema_property.hpp
 *
 * @brief SchemaProperty implementation
 * */

#include "configuration/schema_property.hpp"
#include "configuration/schema_errors.hpp"
#include "configuration/validators/validator.hpp"
#include <json/json.hpp>

using namespace configuration;

constexpr const char SchemaProperty::VALIDATOR[];
constexpr const char SchemaProperty::MANDATORY[];
constexpr const char SchemaProperty::MAX[];
constexpr const char SchemaProperty::MIN[];
constexpr const char SchemaProperty::MORE_THAN[];
constexpr const char SchemaProperty::TYPE[];
constexpr const char SchemaProperty::ADDRESS[];
constexpr const char SchemaProperty::URL[];
constexpr const char SchemaProperty::ANY_OF[];
constexpr const char SchemaProperty::ADDR_V[];
constexpr const char SchemaProperty::STRING[];
constexpr const char SchemaProperty::INT[];

SchemaProperty::SchemaProperty(const std::string& path, bool mandatory)
    : m_path{path}, m_mandatory{mandatory} {}

void SchemaProperty::validate(const json::Value& value, SchemaErrors& errors) const {
    // accept null values as mandatories
    if (!m_mandatory && value.is_null()) {
        return;
    }
    for (const auto& validator : m_validators) {
        if (!validator->is_valid(value)) {
            errors.add_error({validator->get_error(), m_path});
        }
    }
}

void SchemaProperty::add_validator(ValidatorJsonSPtr validator) {
    m_validators.push_back(validator);
}

