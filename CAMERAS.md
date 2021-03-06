# PTP Webcam Supported Camera Features

The tables below list what features are supported with which camera models. Values in parenthesis, such as _(YES)_ indicate unconfirmed cases.

## Nikon

### Full-Frame / FX

| Camera        | max resolution | Exposure Preview       | Exposure Correction | Aperture Control |
| ------------- | -------------- | ---------------------- | ------------------- | ---------------- |
| Df            | 640x480        | (YES)                  | (YES)               | (YES)            |
| (D3) [#11](https://github.com/dognotdog/ptpwebcam/issues/11) | 640x480 | ? | ? | ?             |
| D3S           | 640x480        | (NO)                   | (YES)               | (YES)            |
| D4            | 640x480        | YES (Photography Mode) | YES                 | YES              |
| D4S           | 640x480        | YES (Photography Mode) | YES                 | YES              |
| D5            | 1024x768       | YES (Photography Mode) | YES                 | YES              |
| D6            | 1024x768       | YES                    | YES                 | YES              |
| D600          | 640x480        | (NO)                   | (YES)               | (YES)            |
| D610          | 640x480        | (NO)                   | (YES)               | (YES)            |
| D700          | 640x480        | (NO)                   | (YES)               | (YES)            |
| D750          | 640x480        | YES (Photography Mode) | YES                 | YES              |
| D780          | 1024x768       | YES                    | ?                   | ?                |
| D800 / D800E  | 640x480        | YES (Photography Mode) | YES                 | YES              |
| D810 / D810A  | 640x480        | YES (Photography Mode) | YES                 | YES              |
| D850          | 1024x768       | YES (Photography Mode) | YES                 | YES              |
| Z6            | 1024x768       | (YES)                  | ?                   | ?                |
| Z7            | 1024x768       | (YES)                  | ?                   | ?                |

#### Notes

- D800: LiveView timeout can be set to infinity via `CUSTOM SETTINGS MENU -> c Timers/AE Lock -> c4 Monitor off delay -> Live view`

### APS-C / DX

| Camera        | max resolution | Exposure Preview       | Exposure Correction | Aperture Control              |
| ------------- | -------------- | ---------------------- | ------------------- | ----------------------------- |
| ~D40~         | no LiveView    | -                      | -                   | -                             |
| ~D60~         | no LiveView    | -                      | -                   | -                             |
| ~D80~         | no LiveView    | -                      | -                   | -                             |
| D90           | 640x480        | ?                      | ?                   | ?                             |
| ~D200~        | no LiveView    | -                      | -                   | -                             |
| D300          | 640x480        | (NO)                   | (YES)               | ?                             |
| D300S         | 640x480        | (NO)                   | (YES)               | ?                             |
| D500          | 1024x768       | YES (Photography Mode) | YES                 | YES                           |
| ~D3000~       | no LiveView    | -                      | -                   | -                             |
| D3200         | 640x480        | (NO)                   | (YES)               | ?                             |
| D3300         | 640x480        | (NO)                   | (YES)               | ?                             |
| D3400         | 640x480        | NO                     | YES                 | YES (fixed during LiveView)   |
| D3500         | (640x480)      | (NO)                   | (YES)               | (YES) (fixed during LiveView) |
| D5100         | 640x480        | NO                     | (YES)               | ?                             |
| D5200         | 640x480        | NO                     | (YES)               | ?                             |
| D5500         | 640x480        | NO                     | (YES)               | ?                             |
| D5600         | 640x480        | NO                     | YES                 | ?                             |
| D7000         | 640x480        | NO                     | (YES)               | (YES)                         |
| D7100         | 640x480        | NO                     | (YES)               | (YES)                         |
| D7200         | 640x480        | NO                     | (YES)               | (YES)                         |
| D7500         | 1024x768       | YES (Photography Mode) | (YES)               | (YES)                         |
| Z50           | 1024x768       | (YES)                  | ?                   | ?                             |

#### Notes

- D5100, D5200: frequent shutter cycling [#4](https://github.com/dognotdog/ptpwebcam/issues/4)

