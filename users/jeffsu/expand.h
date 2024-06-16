#pragma once

#define INJECT_MID(...) INJECT_MID_(__VA_ARGS__)
#define INJECT_MID_(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10) x1, x2, x3, x4, x5, _______, _______, x6, x7, x8, x9, x10
