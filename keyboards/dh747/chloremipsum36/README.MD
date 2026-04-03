### Build
```bash
make dh747/chloremipsum36:vial
```




# ChloremIpsum36 (Vial Firmware)
This repository contains the keyboard-specific source code and compiled firmware for the **ChloremIpsum36**, a specialized fork of the [LoremIpsum36](https://github.com).
### ⚠️ Warning: Read Before FlashingThis firmware is **NOT** for the original LoremIpsum36 by penk. This is specifically designed for the "LP36" clone manufactured by **dh747** (commonly found on AliExpress/Chinese marketplaces).

**The Problem:** The clone hardware uses a completely different (and, frankly, "stupid") LED matrix wiring. Flashing original LP36 firmware will result in scrambled RGB effects or non-functional LEDs. This repo fixes that.
---## 🛠 Features- **Vial Support:** Full real-time configuration via the [Vial App](https://vial.today).
- **Corrected LED Matrix:** Custom `led_matrix` logic to match the clone's unique trace routing.- **Kailh Choc Support:** Adjusted for the hotswap socket footprint used on this specific board.
- **Unique ID:** Uses a custom `VIAL_KEYBOARD_UID` to avoid conflicts with original LP36 boards.
---## 🚀 How to Use### Option 1: Just Flash (Easiest)If you just want your keyboard to work:
1. Go to the [**Releases**](https://github.com) tab.
2. Download the latest `chloremipsum36_vial.uf2` file.3. Put your RP2040 into bootloader mode (hold the boot button while plugging it in).
4. Drag and drop the `.uf2` file onto the `RPI-RP2` drive.
### Option 2: Build from SourceIf you want to modify the code:
1. Clone the official [Vial-QMK](https://github.com) repository.
2. Copy the `keyboards/chloremipsum36` folder from this repo into the `keyboards/` directory of the Vial-QMK repo.
3. Open your terminal in the `vial-qmk` folder and run:
   ```bash
   make chloremipsum36:vial


   1. The resulting firmware will be in the root directory.

------------------------------
## 📝 Hardware Attribution

* Original Design: LoremIpsum36 by penk.
* Clone Hardware: dh747 / LP36.
* Firmware Mod: [Your Name/Username]

------------------------------
## ⚖️ License
This project follows the GPLv2 license, as it is a derivative of QMK/Vial.
------------------------------

(Add a photo here of your specific clone board so users can visually confirm they have the right version before flashing!)


Do you want me to generate a **unique VIAL_KEYBOARD_UID** for your `config.h` so your clone doesn't conflict with the original boards in the **Vial app**?


