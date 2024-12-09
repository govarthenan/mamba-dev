// Copyright (c) 2019, QuantStack and Mamba Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef LIBMAMBA_VERSION_HPP
#define LIBMAMBA_VERSION_HPP

#include <array>
#include <string>

#define LIBMAMBA_VERSION_MAJOR 2
#define LIBMAMBA_VERSION_MINOR 0
#define LIBMAMBA_VERSION_PATCH 5
#define LIBMAMBA_VERSION_IS_PRERELEASE 1
#if LIBMAMBA_VERSION_IS_PRERELEASE == 1
#define LIBMAMBA_VERSION_PRERELEASE_NAME "rc0"
#endif

#define LIBMAMBA_VERSION_STRING "2.0.5.rc0"
#define LIBMAMBA_VERSION                                                                           \
    (LIBMAMBA_VERSION_MAJOR * 10000 + LIBMAMBA_VERSION_MINOR * 100 + LIBMAMBA_VERSION_PATCH)

// Binary version
#define LIBMAMBA_BINARY_CURRENT 2
#define LIBMAMBA_BINARY_REVISION 0
#define LIBMAMBA_BINARY_AGE 0

namespace mamba
{
    std::string version();

    [[deprecated("will be replaced in a future minor version")]]
    std::array<int, 3> version_arr();

}

#endif
