#ifndef __ST_STM32CMSIS_H_
#define __ST_STM32CMSIS_H_

#if __has_include("stm32c0xx.h")
#include "stm32c0xx.h"
#elif __has_include("stm32f0xx.h")
#include "stm32f0xx.h"
#elif __has_include("stm32f1xx.h")
#include "stm32f1xx.h"
#elif __has_include("stm32f2xx.h")
#include "stm32f2xx.h"
#elif __has_include("stm32f3xx.h")
#include "stm32f3xx.h"
#elif __has_include("stm32f4xx.h")
#include "stm32f4xx.h"
#elif __has_include("stm32f7xx.h")
#include "stm32f7xx.h"
#elif __has_include("stm32g0xx.h")
#include "stm32g0xx.h"
#elif __has_include("stm32g4xx.h")
#include "stm32g4xx.h"
#elif __has_include("stm32h5xx.h")
#include "stm32h5xx.h"
#elif __has_include("stm32h7xx.h")
#include "stm32h7xx.h"
#elif __has_include("stm32l0xx.h")
#include "stm32l0xx.h"
#elif __has_include("stm32l1xx.h")
#include "stm32l1xx.h"
#elif __has_include("stm32l4xx.h")
#include "stm32l4xx.h"
#elif __has_include("stm32l5xx.h")
#include "stm32l5xx.h"
#elif __has_include("stm32u5xx.h")
#include "stm32u5xx.h"
#else
#error "No known STM32 header has been found on the include path!"
#endif

#endif // __ST_STM32CMSIS_H_
