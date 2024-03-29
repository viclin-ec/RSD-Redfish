function(install_libmicrohttpd)
    include(ConfigurationPackage OPTIONAL)
    assure_package(libmicrohttpd 0.9.70 "https://ftp.gnu.org/gnu/libmicrohttpd/libmicrohttpd-0.9.70.tar.gz")

    set(CONFIGURE_FLAGS)

    list(APPEND CONFIGURE_FLAGS CC=${CMAKE_C_COMPILER})
    list(APPEND CONFIGURE_FLAGS --enable-shared)

    set(ENV{PATH} "${CMAKE_BINARY_DIR}/bin:/usr/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:${PATH}")

    execute_process(
	COMMAND ${source_dir}/configure
	WORKING_DIRECTORY ${binary_dir}
	RESULT_VARIABLE result
	)
    if (NOT ${result} EQUAL 0)
	message(FATAL_ERROR "Error occurs when configure project ${source_dir}")
    endif()
    set(ENV{ac_cv_va_copy} ${ac_cv_va_copy_tmp})

    execute_process(
	COMMAND make ${BUILD_EXTRA_ARGS}
	WORKING_DIRECTORY ${binary_dir}
	RESULT_VARIABLE result
	)
    if (NOT ${result} EQUAL 0)
	message(FATAL_ERROR "Error occurs when build project")
    endif()

    file(COPY ${binary_dir}/libmicrohttpd.pc
	DESTINATION ${CMAKE_PKG_CONFIG_DIR}
	)
    file(INSTALL ${binary_dir}/src/microhttpd/.libs/
	DESTINATION ${CMAKE_BINARY_DIR}/lib
	FILES_MATCHING PATTERN "libmicrohttpd.so*"
	)
    set(MHD_LIBRARY ${CMAKE_BINARY_DIR}/lib/libmicrohttpd.so)
    file(INSTALL ${source_dir}/src/include/microhttpd.h
	DESTINATION ${CMAKE_BINARY_DIR}/include
	)
endfunction()

install_libmicrohttpd()
