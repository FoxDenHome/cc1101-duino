#pragma once

#define PIN_MOSI 11
#define PIN_CLK 16
#define PIN_MISO 12
#define PIN_GDO2 2
#define PIN_GDO0 3
#define PIN_CS 10

#define PIN_GDO0_PORT PORTD
#define PIN_GDO0_BIT (1 << PIN_GDO0)
#define PIN_GDO0_ON (PIN_GDO0_PORT | PIN_GDO0_BIT)
#define PIN_GDO0_OFF (PIN_GDO0_PORT & ~PIN_GDO0_BIT)
