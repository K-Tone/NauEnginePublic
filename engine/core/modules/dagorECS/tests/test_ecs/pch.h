// Copyright 2024 N-GINN LLC. All rights reserved.

// Copyright (C) 2024  Gaijin Games KFT.  All rights reserved
#pragma once

#ifdef _WIN32
#include "nau/platform/windows/windows_headers.h"
#endif

#include <atomic>
#include <chrono>
#include <cmath>
#include <forward_list>
#include <functional>
#include <future>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <optional>
#include <numeric>
#include <random>
#include <regex>
#include <string>
#include <string_view>
#include <type_traits>
#include <thread>
#include <vector>

#ifdef Yield
#undef Yield
#endif

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-copy"
#endif

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <gtest/gtest-param-test.h>


#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern size_t test_dagor_ecs_pull;