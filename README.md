# Single STM32 header

This project offers two headers, `st/stm32cmsis.h` and `st/stm32hal.h`
that you can use to replace your `stm32f1xx.h` or `stm32f1xx_hal_rcc.h`
and similar in your codebase, so switching between STM32 series becomes
a lot less painful.

## Requirements

* Compiler which supports `__has_include`, so C23 / C++17 or above
* Add a `#define HAL_RCC_MODULE_ENABLED` for the needed HAL modules before including the HAL header
