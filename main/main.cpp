#include <boost/endian/arithmetic.hpp>
#include <cstdio>

using namespace boost::endian;

template <typename T>
void hex_print(const T& data) {
    uint8_t buffer[sizeof(T)];
    std::memcpy(buffer, &data, sizeof(T));

    for (size_t i = 0; i < sizeof(T); i++) {
        std::printf("%02X", buffer[i]);
    }
    std::printf("\n");
}

extern "C" void app_main() {
    little_uint32_t x = 0xAABBCCDD;
    big_uint32_at y = 0xAABBCCDD;

    hex_print(x);
    hex_print(y);
}
