#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

extern "C" {
extern const TSLanguage *tree_sitter_whistle();
}

#include <nan.h>

namespace {

using namespace v8;

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = Nan::GetFunction(tpl).ToLocalChecked();
  Local<Object> instance =
      constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance, 0, (void *)tree_sitter_whistle());

  Nan::Set(instance, Nan::New("name").ToLocalChecked(),
           Nan::New("whistle").ToLocalChecked());
  Nan::Set(module, Nan::New("exports").ToLocalChecked(), instance);
}

NODE_MODULE(tree_sitter_whistle_binding, Init)

}  // namespace

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
