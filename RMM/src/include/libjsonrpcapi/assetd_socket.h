/**
 * Copyright (c)  2015-2017 Intel Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *   http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef __ASSETD_SOCKET_H__
#define __ASSETD_SOCKET_H__

#include <stdio.h>
#include "libjson/json.h"
#include "libjsonrpc/jsonrpc.h"

int connect_assetd(int port);
int send_msg_to_assetd(jrpc_req_pkg_t *req, int evt_id);

#endif

