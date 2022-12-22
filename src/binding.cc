#include <napi.h>
#include <node_api.h>

using namespace Napi;

Value test(const CallbackInfo& info) {
  Env env = info.Env();
  Napi::Array arr = Napi::Array::New(env);
  auto foo = Napi::String::New(env, "foo");
  auto bar = Napi::String::New(env, "bar");
  auto hi = Napi::String::New(env, "hi");
  for (int i = 0; i < 100000; i++) {
    Napi::Object obj = Napi::Object::New(env);
    obj.Set(foo, Napi::Number::New(env, i));
    obj.Set(bar, hi);
    arr.Set(i, obj);
  }

  return arr;
}


Object Init(Env env, Object exports) {
  exports.Set(
    String::New(env, "test"),
    Function::New(env, test)
  );
  return exports;
}

NODE_API_MODULE(watcher, Init)
