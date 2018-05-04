// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "Target.h"

using namespace System;
using namespace System::Runtime::InteropServices;

CppSharp::Parser::ParserTargetInfo::ParserTargetInfo(::CppSharp::CppParser::ParserTargetInfo* native)
    : __ownsNativeInstance(false)
{
    NativePtr = native;
}

CppSharp::Parser::ParserTargetInfo^ CppSharp::Parser::ParserTargetInfo::__CreateInstance(::System::IntPtr native)
{
    return gcnew ::CppSharp::Parser::ParserTargetInfo((::CppSharp::CppParser::ParserTargetInfo*) native.ToPointer());
}

CppSharp::Parser::ParserTargetInfo::~ParserTargetInfo()
{
    delete NativePtr;
}

CppSharp::Parser::ParserTargetInfo::ParserTargetInfo()
{
    __ownsNativeInstance = true;
    NativePtr = new ::CppSharp::CppParser::ParserTargetInfo();
}

CppSharp::Parser::ParserTargetInfo::ParserTargetInfo(CppSharp::Parser::ParserTargetInfo^ _0)
{
    __ownsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto &__arg0 = *(::CppSharp::CppParser::ParserTargetInfo*)_0->NativePtr;
    NativePtr = new ::CppSharp::CppParser::ParserTargetInfo(__arg0);
}

System::IntPtr CppSharp::Parser::ParserTargetInfo::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void CppSharp::Parser::ParserTargetInfo::__Instance::set(System::IntPtr object)
{
    NativePtr = (::CppSharp::CppParser::ParserTargetInfo*)object.ToPointer();
}

System::String^ CppSharp::Parser::ParserTargetInfo::ABI::get()
{
    return clix::marshalString<clix::E_UTF8>(((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->ABI);
}

void CppSharp::Parser::ParserTargetInfo::ABI::set(System::String^ value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->ABI = clix::marshalString<clix::E_UTF8>(value);
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::Char16Type::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char16Type;
}

void CppSharp::Parser::ParserTargetInfo::Char16Type::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char16Type = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::Char32Type::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char32Type;
}

void CppSharp::Parser::ParserTargetInfo::Char32Type::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char32Type = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::Int64Type::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->int64Type;
}

void CppSharp::Parser::ParserTargetInfo::Int64Type::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->int64Type = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::IntMaxType::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intMaxType;
}

void CppSharp::Parser::ParserTargetInfo::IntMaxType::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intMaxType = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::IntPtrType::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intPtrType;
}

void CppSharp::Parser::ParserTargetInfo::IntPtrType::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intPtrType = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::SizeType::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->sizeType;
}

void CppSharp::Parser::ParserTargetInfo::SizeType::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->sizeType = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::UIntMaxType::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->uIntMaxType;
}

void CppSharp::Parser::ParserTargetInfo::UIntMaxType::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->uIntMaxType = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::WCharType::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wCharType;
}

void CppSharp::Parser::ParserTargetInfo::WCharType::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wCharType = (::CppSharp::CppParser::ParserIntType)value;
}

CppSharp::Parser::ParserIntType CppSharp::Parser::ParserTargetInfo::WIntType::get()
{
    return (CppSharp::Parser::ParserIntType)((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wIntType;
}

void CppSharp::Parser::ParserTargetInfo::WIntType::set(CppSharp::Parser::ParserIntType value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wIntType = (::CppSharp::CppParser::ParserIntType)value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::BoolAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->boolAlign;
}

void CppSharp::Parser::ParserTargetInfo::BoolAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->boolAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::BoolWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->boolWidth;
}

void CppSharp::Parser::ParserTargetInfo::BoolWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->boolWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::CharAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->charAlign;
}

void CppSharp::Parser::ParserTargetInfo::CharAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->charAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::CharWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->charWidth;
}

void CppSharp::Parser::ParserTargetInfo::CharWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->charWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::Char16Align::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char16Align;
}

void CppSharp::Parser::ParserTargetInfo::Char16Align::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char16Align = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::Char16Width::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char16Width;
}

void CppSharp::Parser::ParserTargetInfo::Char16Width::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char16Width = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::Char32Align::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char32Align;
}

void CppSharp::Parser::ParserTargetInfo::Char32Align::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char32Align = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::Char32Width::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char32Width;
}

void CppSharp::Parser::ParserTargetInfo::Char32Width::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->char32Width = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::HalfAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->halfAlign;
}

void CppSharp::Parser::ParserTargetInfo::HalfAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->halfAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::HalfWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->halfWidth;
}

void CppSharp::Parser::ParserTargetInfo::HalfWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->halfWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::FloatAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->floatAlign;
}

void CppSharp::Parser::ParserTargetInfo::FloatAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->floatAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::FloatWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->floatWidth;
}

void CppSharp::Parser::ParserTargetInfo::FloatWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->floatWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::DoubleAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->doubleAlign;
}

void CppSharp::Parser::ParserTargetInfo::DoubleAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->doubleAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::DoubleWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->doubleWidth;
}

void CppSharp::Parser::ParserTargetInfo::DoubleWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->doubleWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::ShortAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->shortAlign;
}

void CppSharp::Parser::ParserTargetInfo::ShortAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->shortAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::ShortWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->shortWidth;
}

void CppSharp::Parser::ParserTargetInfo::ShortWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->shortWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::IntAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intAlign;
}

void CppSharp::Parser::ParserTargetInfo::IntAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::IntWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intWidth;
}

void CppSharp::Parser::ParserTargetInfo::IntWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::IntMaxTWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intMaxTWidth;
}

void CppSharp::Parser::ParserTargetInfo::IntMaxTWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->intMaxTWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::LongAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longAlign;
}

void CppSharp::Parser::ParserTargetInfo::LongAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::LongWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longWidth;
}

void CppSharp::Parser::ParserTargetInfo::LongWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::LongDoubleAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longDoubleAlign;
}

void CppSharp::Parser::ParserTargetInfo::LongDoubleAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longDoubleAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::LongDoubleWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longDoubleWidth;
}

void CppSharp::Parser::ParserTargetInfo::LongDoubleWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longDoubleWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::LongLongAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longLongAlign;
}

void CppSharp::Parser::ParserTargetInfo::LongLongAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longLongAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::LongLongWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longLongWidth;
}

void CppSharp::Parser::ParserTargetInfo::LongLongWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->longLongWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::PointerAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->pointerAlign;
}

void CppSharp::Parser::ParserTargetInfo::PointerAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->pointerAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::PointerWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->pointerWidth;
}

void CppSharp::Parser::ParserTargetInfo::PointerWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->pointerWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::WCharAlign::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wCharAlign;
}

void CppSharp::Parser::ParserTargetInfo::WCharAlign::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wCharAlign = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::WCharWidth::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wCharWidth;
}

void CppSharp::Parser::ParserTargetInfo::WCharWidth::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->wCharWidth = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::Float128Align::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->float128Align;
}

void CppSharp::Parser::ParserTargetInfo::Float128Align::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->float128Align = value;
}

unsigned int CppSharp::Parser::ParserTargetInfo::Float128Width::get()
{
    return ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->float128Width;
}

void CppSharp::Parser::ParserTargetInfo::Float128Width::set(unsigned int value)
{
    ((::CppSharp::CppParser::ParserTargetInfo*)NativePtr)->float128Width = value;
}

