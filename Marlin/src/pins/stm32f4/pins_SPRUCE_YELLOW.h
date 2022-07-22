#define FLASH_EEPROM_EMULATION //emulate a EEPROM 4Kb in flash

#define TEMP_0_PIN                          PB0
#define TEMP_BED_PIN                        PA7

#define HEATER_0_PIN                        PA1
#define HEATER_BED_PIN                      PA2
#define FAN_PIN                             PA3

#define X_STOP_PIN                          PA4
#define Y_STOP_PIN                          PA5
#define Z_STOP_PIN                          PA6

#define E0_STEP_PIN                         PA15
#define E0_DIR_PIN                          PA10
#define E0_ENABLE_PIN                       PB3

#define X_STEP_PIN                          PC14
#define X_DIR_PIN                           PC13
#define X_ENABLE_PIN                        PC15

#define Y_STEP_PIN                          PB8
#define Y_DIR_PIN                           PB7
#define Y_ENABLE_PIN                        PB9

#define Z_STEP_PIN                          PB5
#define Z_DIR_PIN                           PB4
#define Z_ENABLE_PIN                        PB6

#define BTN_ENC                             PB10
#define BTN_EN1                             PB2
#define BTN_EN2                             PB1

#if HAS_TMC_UART
  #define E0_SERIAL_TX_PIN                  PA14
  #define E0_SERIAL_RX_PIN      E0_SERIAL_TX_PIN

  #define TMC_BAUD_RATE                    19200
#endif

#define SERVO0_PIN                          PA0
#define SOL1_PIN                            SERVO0_PIN