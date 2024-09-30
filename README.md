# Boost-ESP

Boost C++ library for ESP-IDF.

Easy integration of [Boost libraries](https://github.com/boostorg/boost) into ESP32 projects.

## Installation

[![Component Registry](https://components.espressif.com/components/markuspi/boost-esp/badge.svg)](https://components.espressif.com/components/markuspi/boost-esp)

In your component directory (either `main` or any other component in `components/<name>`), edit or create the `idf_component.yml` manifest file and add `markuspi/boost-esp` as a dependency:

```yaml
dependencies:
  markuspi/boost-esp: "^1.84.0~1"
```

Or use the following command to add it to your project:

```bash
idf.py add-dependency "markuspi/boost-esp^1.84.0~1"
```
