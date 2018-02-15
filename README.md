# Sensor Data Protocol

Sensor Data protocol definition using Google's Protocol Buffers.

## Prerequisites

### Nanopb

Download Nanopb v0.3.9 from official website:
https://jpa.kapsi.fi/nanopb/download/

Extract the downloaded archive.

In the rest of the document, `protoc` is the version distributed in this
archive: `generator-bin/protoc`.

### Ubuntu

Install Protocol Buffers compiler dependency:

```sh
apt install lib32stdc++6
```

## Code generation

## Python

To generate code for python:

```sh
protoc --python_out=. sensordata.proto
```

Use the generated `sensordata_pb2.py` in your project.

## Embedded C

To generate code for C:

```sh
protoc --nanopb_out=. sensordata.proto
```
