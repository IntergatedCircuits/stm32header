#ifndef __ST_STM32CMSIS_H_
#define __ST_STM32CMSIS_H_

#if __has_include("stm32c0xx.h")
#include "stm32c0xx.h"
#define __STM32_DEVICE_VERSION (__STM32C0_DEVICE_VERSION)
#elif __has_include("stm32f0xx.h")
#include "stm32f0xx.h"
#define __STM32_DEVICE_VERSION (__STM32F0_DEVICE_VERSION)
#elif __has_include("stm32f1xx.h")
#include "stm32f1xx.h"
#define __STM32_DEVICE_VERSION (__STM32F1_DEVICE_VERSION)
#elif __has_include("stm32f2xx.h")
#include "stm32f2xx.h"
#define __STM32_DEVICE_VERSION (__STM32F2_DEVICE_VERSION)
#elif __has_include("stm32f3xx.h")
#include "stm32f3xx.h"
#define __STM32_DEVICE_VERSION (__STM32F3_DEVICE_VERSION)
#elif __has_include("stm32f4xx.h")
#include "stm32f4xx.h"
#define __STM32_DEVICE_VERSION (__STM32F4_DEVICE_VERSION)
#elif __has_include("stm32f7xx.h")
#include "stm32f7xx.h"
#define __STM32_DEVICE_VERSION (__STM32F7_DEVICE_VERSION)
#elif __has_include("stm32g0xx.h")
#include "stm32g0xx.h"
#define __STM32_DEVICE_VERSION (__STM32G0_DEVICE_VERSION)
#elif __has_include("stm32g4xx.h")
#include "stm32g4xx.h"
#define __STM32_DEVICE_VERSION (__STM32G4_DEVICE_VERSION)
#elif __has_include("stm32h5xx.h")
#include "stm32h5xx.h"
#define __STM32_DEVICE_VERSION (__STM32H5_DEVICE_VERSION)
#elif __has_include("stm32h7xx.h")
#include "stm32h7xx.h"
#define __STM32_DEVICE_VERSION (__STM32H7_DEVICE_VERSION)
#elif __has_include("stm32l0xx.h")
#include "stm32l0xx.h"
#define __STM32_DEVICE_VERSION (__STM32L0_DEVICE_VERSION)
#elif __has_include("stm32l1xx.h")
#include "stm32l1xx.h"
#define __STM32_DEVICE_VERSION (__STM32L1_DEVICE_VERSION)
#elif __has_include("stm32l4xx.h")
#include "stm32l4xx.h"
#define __STM32_DEVICE_VERSION (__STM32L4_DEVICE_VERSION)
#elif __has_include("stm32l5xx.h")
#include "stm32l5xx.h"
#define __STM32_DEVICE_VERSION (__STM32L5_DEVICE_VERSION)
#elif __has_include("stm32u5xx.h")
#include "stm32u5xx.h"
#define __STM32_DEVICE_VERSION (__STM32U5_DEVICE_VERSION)
#else

#endif

#endif // __ST_STM32CMSIS_H_
