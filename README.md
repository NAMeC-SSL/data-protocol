# SSL Data Protocol

SSL Data protocol definition using Google's Protocol Buffers.

## Prerequisites

Download `Nanopb` from official website:
https://jpa.kapsi.fi/nanopb/download/

Extract the downloaded archive.

## Code generation

To generate code for embedded C:

```shell
./nanopb-x.y.z-linux-x86/generator-bin/nanopb_generator base_wrapper.proto brushless.proto radio_command.proto radio_feedback.proto base_feedback.proto base_command.proto kicker.proto -I proto -D src
```
