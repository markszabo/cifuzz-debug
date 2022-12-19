#include <assert.h>

#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>

#include "../code/code.h"

FUZZ_TEST_SETUP() {

}

FUZZ_TEST(const uint8_t *data, size_t size) {
    FuzzedDataProvider provider(data, size);
    int data1 = provider.ConsumeIntegral<int>();
    int data2 = provider.ConsumeIntegral<int>();

    int result = Add(data1, data2);

    assert(result == data1+data2);
}
