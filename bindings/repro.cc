#include <napi.h>
#include <atomic>
#include <iostream>
#include <string>

Napi::Value CheckType(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() != 1 || !info[0].IsTypedArray()) {
    Napi::TypeError::New(env,
                         "`CheckType` expects exactly 1 arg; (instanceof `BigInt64Array`)")
        .ThrowAsJavaScriptException();
    return env.Undefined();
  }
  return env.Undefined();
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "CheckType"), Napi::Function::New(env, CheckType));
  return exports;
}

NODE_API_MODULE(addon, Init)