// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeWalletCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSBitcoinLikeWallet::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeWallet function can only be called as constructor (use New)");
    }
    NJSBitcoinLikeWallet *node_instance = new NJSBitcoinLikeWallet(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeWallet::BitcoinLikeWallet_prototype;

Handle<Object> NJSBitcoinLikeWallet::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeWallet> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeWallet_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeWallet *new_obj = new NJSBitcoinLikeWallet(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeWallet::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSBitcoinLikeWallet::isNull) {
    NJSBitcoinLikeWallet* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeWallet>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeWallet::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeWallet::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeWallet").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    BitcoinLikeWallet_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeWallet").ToLocalChecked(), func_template->GetFunction());
}
