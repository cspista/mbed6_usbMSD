/* mbed6_usbMSD
 *
 * USBMSD (mass-storage device) example based on the demo program
 * from the Mbed OS documentation
 * Link: https://os.mbed.com/docs/mbed-os/v6.15/apis/usbmsd.html
 * Copyright (c) 2006-2020 Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 */
#include "mbed.h"
#include "SDBlockDevice.h"
#include "USBMSD.h"

SDBlockDevice sd(MBED_CONF_SD_SPI_MOSI, MBED_CONF_SD_SPI_MISO, MBED_CONF_SD_SPI_CLK, MBED_CONF_SD_SPI_CS);
USBMSD usb(&sd);

int main()
{

    while (true) {
        usb.process();
    }

    return 0;
}