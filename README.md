# AVR32/64DA28 – Entwicklung mit Arduino & PlatformIO

Ein kompakter Einstieg in die Arbeit mit dem AVR64DA28 Mikrocontroller auf Basis der DxCore. Unterstützung für Arduino IDE und PlatformIO, inklusive serieller UPDI-Programmierung über FTDI.

Bezugsquelle: zb.: Reichelt: <https://www.reichelt.at/at/de/shop/suche/avr32dd28?GROUPINDEX=0&search=avr32dd28>

---

## 📦 Abhängigkeiten

* DxCore: <https://github.com/SpenceKonde/DxCore>
* Pinout AVR32DA28: <https://github.com/SpenceKonde/DxCore/blob/master/megaavr/extras/DD28.md>
* UPDI via FTDI: <https://github.com/SpenceKonde/AVR-Guidance/blob/master/UPDI/jtag2updi.md>

---

## 🔌 Verdrahtung FTDI ↔️ AVR32DA28

| FTDI | AVR32DA28 (rechte Seite) |
| ---- | ------------------------ |
| VCC  | VCC                      |
| GND  | GND                      |
| TX   | UPDI                     |

---

## 🛠️ Arduino IDE

* Anleitung: <https://github.com/SpenceKonde/DxCore/blob/master/Installation.md>

### Einstellungen in der IDE

* Board: AVR DA-series (no bootloader)
* Werkzeuge → Chip auswählen (z. B. AVR64DA28)
* Programmer: "Serial UPDI"

---

## ⚙️ PlatformIO

* Board-Info: docs.platformio.org/en/latest/boards/atmelmegaavr/AVR64DA28.html
* DxCore PlatformIO-Doku: github.com/SpenceKonde/DxCore/blob/master/PlatformIO.md

```ini
[env:AVR32DA28]
platform = atmelmegaavr
board = AVR32DA28
framework = arduino
monitor_speed = 115200
upload_port = /dev/ttyUSB0
monitor_port = /dev/ttyUSB0
default_envs = Upload_UPDI
upload_speed = 115200
upload_flags =
    --tool
    uart
    --device
    AVR32DA28 
    --uart
    $UPLOAD_PORT
    --clk
    $UPLOAD_SPEED
upload_command = pymcuprog write --erase $UPLOAD_FLAGS --filename $SOURCE
```

🔧 Hinweis: `pymcuprog` muss auf dem System installiert sein.

