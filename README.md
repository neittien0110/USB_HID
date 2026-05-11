# Turn the STM32F429 into a mouse device when plugged into laptop

Lập trình cấu hình cổng USB-OTG trên STM32F429 thành thiết bị HID với profile của USB mouse

![How to use](images/howtouse.png)

## Cấu hình trong STM CubeMX

### Thiết lập Clock

- RCC Mode configuration: ![RCC Mode configuration](images/RCC.png)
- Clock Configuration: ![Clock Configuration](images/ClockConfiguration.png)

## Thiết lập USB Connection

- USB OTG HighSpeed: ![USB OTG HighSpeed](images/USB_OTG_HS.png)
- USB HighSpeed HID: ![USB HighSpeed HID](images/USB_HS_HID.png)