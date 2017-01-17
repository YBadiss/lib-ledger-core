// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

#include "BitcoinPublicKey.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinPublicKey::BitcoinPublicKey() = default;

BitcoinPublicKey::~BitcoinPublicKey() = default;

auto BitcoinPublicKey::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<BitcoinPublicKey>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.publicKey)),
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.chainCode)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto BitcoinPublicKey::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<BitcoinPublicKey>::get();
    return {::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_publicKey)),
            ::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_chainCode))};
}

}  // namespace djinni_generated