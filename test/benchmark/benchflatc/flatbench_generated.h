// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_FLATBENCH_BENCHFB_H_
#define FLATBUFFERS_GENERATED_FLATBENCH_BENCHFB_H_

#include "flatbuffers/flatbuffers.h"


namespace benchfb {

struct Foo;
struct Bar;
struct FooBar;
struct FooBarContainer;

enum Enum {
  Enum_Apples = 0,
  Enum_Pears = 1,
  Enum_Bananas = 2
};

inline const char **EnumNamesEnum() {
  static const char *names[] = { "Apples", "Pears", "Bananas", nullptr };
  return names;
}

inline const char *EnumNameEnum(Enum e) { return EnumNamesEnum()[static_cast<int>(e)]; }

MANUALLY_ALIGNED_STRUCT(8) Foo FLATBUFFERS_FINAL_CLASS {
 private:
  uint64_t id_;
  int16_t count_;
  int8_t prefix_;
  int8_t __padding0;
  uint32_t length_;

 public:
  Foo(uint64_t id, int16_t count, int8_t prefix, uint32_t length)
    : id_(flatbuffers::EndianScalar(id)), count_(flatbuffers::EndianScalar(count)), prefix_(flatbuffers::EndianScalar(prefix)), __padding0(0), length_(flatbuffers::EndianScalar(length)) { (void)__padding0; }

  uint64_t id() const { return flatbuffers::EndianScalar(id_); }
  int16_t count() const { return flatbuffers::EndianScalar(count_); }
  int8_t prefix() const { return flatbuffers::EndianScalar(prefix_); }
  uint32_t length() const { return flatbuffers::EndianScalar(length_); }
};
STRUCT_END(Foo, 16);

MANUALLY_ALIGNED_STRUCT(8) Bar FLATBUFFERS_FINAL_CLASS {
 private:
  Foo parent_;
  int32_t time_;
  float ratio_;
  uint16_t size_;
  int16_t __padding0;
  int32_t __padding1;

 public:
  Bar(const Foo &parent, int32_t time, float ratio, uint16_t size)
    : parent_(parent), time_(flatbuffers::EndianScalar(time)), ratio_(flatbuffers::EndianScalar(ratio)), size_(flatbuffers::EndianScalar(size)), __padding0(0), __padding1(0) { (void)__padding0; (void)__padding1; }

  const Foo &parent() const { return parent_; }
  int32_t time() const { return flatbuffers::EndianScalar(time_); }
  float ratio() const { return flatbuffers::EndianScalar(ratio_); }
  uint16_t size() const { return flatbuffers::EndianScalar(size_); }
};
STRUCT_END(Bar, 32);

struct FooBar FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const Bar *sibling() const { return GetStruct<const Bar *>(4); }
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(6); }
  double rating() const { return GetField<double>(8, 0); }
  uint8_t postfix() const { return GetField<uint8_t>(10, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Bar>(verifier, 4 /* sibling */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<double>(verifier, 8 /* rating */) &&
           VerifyField<uint8_t>(verifier, 10 /* postfix */) &&
           verifier.EndTable();
  }
};

struct FooBarBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_sibling(const Bar *sibling) { fbb_.AddStruct(4, sibling); }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(6, name); }
  void add_rating(double rating) { fbb_.AddElement<double>(8, rating, 0); }
  void add_postfix(uint8_t postfix) { fbb_.AddElement<uint8_t>(10, postfix, 0); }
  FooBarBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FooBarBuilder &operator=(const FooBarBuilder &);
  flatbuffers::Offset<FooBar> Finish() {
    auto o = flatbuffers::Offset<FooBar>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<FooBar> CreateFooBar(flatbuffers::FlatBufferBuilder &_fbb,
   const Bar *sibling = 0,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   double rating = 0,
   uint8_t postfix = 0) {
  FooBarBuilder builder_(_fbb);
  builder_.add_rating(rating);
  builder_.add_name(name);
  builder_.add_sibling(sibling);
  builder_.add_postfix(postfix);
  return builder_.Finish();
}

struct FooBarContainer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::Vector<flatbuffers::Offset<FooBar>> *list() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FooBar>> *>(4); }
  uint8_t initialized() const { return GetField<uint8_t>(6, 0); }
  Enum fruit() const { return static_cast<Enum>(GetField<int16_t>(8, 0)); }
  const flatbuffers::String *location() const { return GetPointer<const flatbuffers::String *>(10); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* list */) &&
           verifier.Verify(list()) &&
           verifier.VerifyVectorOfTables(list()) &&
           VerifyField<uint8_t>(verifier, 6 /* initialized */) &&
           VerifyField<int16_t>(verifier, 8 /* fruit */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* location */) &&
           verifier.Verify(location()) &&
           verifier.EndTable();
  }
};

struct FooBarContainerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_list(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FooBar>>> list) { fbb_.AddOffset(4, list); }
  void add_initialized(uint8_t initialized) { fbb_.AddElement<uint8_t>(6, initialized, 0); }
  void add_fruit(Enum fruit) { fbb_.AddElement<int16_t>(8, static_cast<int16_t>(fruit), 0); }
  void add_location(flatbuffers::Offset<flatbuffers::String> location) { fbb_.AddOffset(10, location); }
  FooBarContainerBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FooBarContainerBuilder &operator=(const FooBarContainerBuilder &);
  flatbuffers::Offset<FooBarContainer> Finish() {
    auto o = flatbuffers::Offset<FooBarContainer>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<FooBarContainer> CreateFooBarContainer(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FooBar>>> list = 0,
   uint8_t initialized = 0,
   Enum fruit = Enum_Apples,
   flatbuffers::Offset<flatbuffers::String> location = 0) {
  FooBarContainerBuilder builder_(_fbb);
  builder_.add_location(location);
  builder_.add_list(list);
  builder_.add_fruit(fruit);
  builder_.add_initialized(initialized);
  return builder_.Finish();
}

inline const benchfb::FooBarContainer *GetFooBarContainer(const void *buf) { return flatbuffers::GetRoot<benchfb::FooBarContainer>(buf); }

inline bool VerifyFooBarContainerBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<benchfb::FooBarContainer>(); }

inline void FinishFooBarContainerBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<benchfb::FooBarContainer> root) { fbb.Finish(root); }

}  // namespace benchfb

#endif  // FLATBUFFERS_GENERATED_FLATBENCH_BENCHFB_H_