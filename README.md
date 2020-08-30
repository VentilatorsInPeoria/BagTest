# BagTest

Arduino Mega 2560 code to control the Ventilators in Peoria (VIP) system

To setup the Arduino Mega 2560 environment on your system:

```bash
git clone https://github.com/arduino/arduino-cli.git
cd arduino-cli/
./install.sh
export PATH="$(readlink -f ./bin/):${PATH}"
arduino-cli core update-index
arduino-cli core install 'arduino:avr'
```

 To install this setup the package's dependencies and build (using same $PATH variable as previous commands):

```bash
git clone https://github.com/VentilatorsInPeoria/BagTest.git
cd BagTest/
./install-deps.sh
arduino-cli compile --fqbn 'arduino:avr:mega'
```

To upload this package to a board (using same $PATH variable as previous commands) (replace /dev/ACM0 with the appropriate device file):

```bash
arduino-cli upload --fqbn 'arduino:avr:mega' --port '/dev/ACM0'
```

To test this package (replace /dev/USB0 with the appropriate device file):

```bash
stty -F '/dev/ttyUSB0' '115200'
cat '/dev/ttyUSB0' > ./out.csv
```