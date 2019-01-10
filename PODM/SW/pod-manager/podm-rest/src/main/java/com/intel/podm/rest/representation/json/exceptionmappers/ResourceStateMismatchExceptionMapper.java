/*
 * Copyright (c) 2016-2017 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.intel.podm.rest.representation.json.exceptionmappers;

import com.intel.podm.business.ResourceStateMismatchException;
import com.intel.podm.common.logger.Logger;

import javax.inject.Inject;
import javax.ws.rs.Produces;
import javax.ws.rs.core.Response;
import javax.ws.rs.ext.ExceptionMapper;
import javax.ws.rs.ext.Provider;

import static com.intel.podm.rest.error.ErrorResponseCreator.from;
import static com.intel.podm.rest.representation.json.errors.ErrorType.RESOURCES_STATE_MISMATCH;
import static javax.ws.rs.core.MediaType.APPLICATION_JSON;

@Provider
@Produces(APPLICATION_JSON)
public class ResourceStateMismatchExceptionMapper implements ExceptionMapper<ResourceStateMismatchException> {
    @Inject
    private Logger logger;

    @Override
    public Response toResponse(ResourceStateMismatchException exception) {
        String message = "ResourceStateMismatch exception.";
        logger.e(message, exception.getMessage(), exception);

        return from(RESOURCES_STATE_MISMATCH)
            .withMessage(message)
            .withDetails(exception.getMessage())
            .create();
    }
}
