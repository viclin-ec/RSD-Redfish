# <license_header>
#
# Copyright (c) 2015-2017 Intel Corporation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# </license_header>

if (NOT GTEST_FOUND)
    return()
endif()

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/../..
        ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

add_gtest(parser smbios
        test_runner.cpp
        parser_test.cpp
        test_fixture.hpp
        conversions_test.cpp
)
set_source_files_properties(
	conversions_test.cpp
	PROPERTIES COMPILE_FLAGS "-Wno-missing-field-initializers"
)

target_link_libraries(${test_target}
        smbios
        ${SAFESTRING_LIBRARIES}
        ${UUID_LIBRARIES}
)

add_custom_target(unittest_smbios
                  make
)
add_custom_target(unittest_smbios_run
                  ctest --output-on-failure
)
