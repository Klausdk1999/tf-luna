# Tf-luna Project

This project uses PlatformIO to build, upload, and monitor the Tf-luna sensor.

## Requirements

- [PlatformIO Core](https://platformio.org/install) (CLI)
- [VS Code](https://code.visualstudio.com/) with the [PlatformIO IDE extension](https://platformio.org/install/ide?install=vscode) (optional)

## Getting Started

### Cloning the Repository

Clone the repository to your local machine:

```sh
git clone https://github.com/Klausdk1999/tf-luna.git
cd tf-luna
```

### Building the Project

To build the project, run the following command in the project directory:

```sh
pio run
```

### Uploading the Firmware
To upload the firmware to your device, use the following command:

```sh
pio run --target upload
```

### Monitoring the Serial Output
To monitor the serial output from your device, use the following command:

```sh
pio device monitor
```

### VS Code extension
If you are using VS Code, you can use the PlatformIO IDE extension to build, upload, monitor and manage the project using their provided UI.