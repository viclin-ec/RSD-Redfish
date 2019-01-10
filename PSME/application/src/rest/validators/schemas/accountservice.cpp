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

#include "psme/rest/validators/schemas/accountservice.hpp"
#include "psme/rest/constants/constants.hpp"



using namespace psme::rest;
using namespace psme::rest::validators::schema;


const jsonrpc::ProcedureValidator& AccountServicePostSchema::get_procedure() {
    static jsonrpc::ProcedureValidator procedure{
        "account_service_post",
        jsonrpc::PARAMS_BY_NAME,
        constants::AccountService::SERVICE_ENABLED, VALID_JSON_BOOLEAN,
        constants::AccountService::AUTHFAILURELOGGINGTHRESHOLD, VALID_JSON_INTEGER,
        constants::AccountService::ACCOUNTLOCKOUTTHRESHOLD, VALID_JSON_INTEGER,
        constants::AccountService::ACCOUNTLOCKOUTDURATION, VALID_JSON_INTEGER,
        constants::AccountService::ACCOUNTLOCKOUTCOUNTERRESETAFTER, VALID_JSON_INTEGER,        
        nullptr
    };
    return procedure;
}
