/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/minidrone/repos/optiTrackDrone/ardupilot/modules/DroneCAN/DSDL/uavcan/protocol/file/49.Write.uavcan
 */

#ifndef UAVCAN_PROTOCOL_FILE_WRITE_HPP_INCLUDED
#define UAVCAN_PROTOCOL_FILE_WRITE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/file/Error.hpp>
#include <uavcan/protocol/file/Path.hpp>

/******************************* Source text **********************************
#
# Write into a remote file.
# The server shall place the contents of the field 'data' into the file pointed by 'path' at the offset specified by
# the field 'offset'.
#
# When writing a file, the client should repeatedly call this service with data while advancing offset until the file
# is written completely. When write is complete, the client shall call the service one last time, with the offset
# set to the size of the file and with the data field empty, which will signal the server that the write operation is
# complete.
#
# When the write operation is complete, the server shall truncate the resulting file past the specified offset.
#
# Server implementation advice:
# It is recommended to implement proper handling of concurrent writes to the same file from different clients, for
# example by means of creating a staging area for uncompleted writes (like FTP servers do).
#

uint40 offset

Path path

uint8[<=192] data

---

Error error
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.Write
saturated uint40 offset
uavcan.protocol.file.Path path
saturated uint8[<=192] data
---
uavcan.protocol.file.Error error
******************************************************************************/

#undef offset
#undef path
#undef data
#undef error

namespace uavcan
{
namespace protocol
{
namespace file
{

struct UAVCAN_EXPORT Write_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 40, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > offset;
            typedef ::uavcan::protocol::file::Path path;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 192 > data;
        };

        enum
        {
            MinBitLen
                = FieldTypes::offset::MinBitLen
                + FieldTypes::path::MinBitLen
                + FieldTypes::data::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::offset::MaxBitLen
                + FieldTypes::path::MaxBitLen
                + FieldTypes::data::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::offset >::Type offset;
        typename ::uavcan::StorageType< typename FieldTypes::path >::Type path;
        typename ::uavcan::StorageType< typename FieldTypes::data >::Type data;

        Request_()
            : offset()
            , path()
            , data()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<3192 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::protocol::file::Error error;
        };

        enum
        {
            MinBitLen
                = FieldTypes::error::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::error::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::error >::Type error;

        Response_()
            : error()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<16 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 49 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.file.Write";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    Write_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Write_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        offset == rhs.offset &&
        path == rhs.path &&
        data == rhs.data;
}

template <int _tmpl>
bool Write_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(offset, rhs.offset) &&
        ::uavcan::areClose(path, rhs.path) &&
        ::uavcan::areClose(data, rhs.data);
}

template <int _tmpl>
int Write_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::offset::encode(self.offset, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::path::encode(self.path, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::data::encode(self.data, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Write_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::offset::decode(self.offset, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::path::decode(self.path, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::data::decode(self.data, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool Write_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        error == rhs.error;
}

template <int _tmpl>
bool Write_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(error, rhs.error);
}

template <int _tmpl>
int Write_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::error::encode(self.error, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Write_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::error::decode(self.error, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature Write_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xDC262F0A3A3FBD75ULL);

    Request::FieldTypes::offset::extendDataTypeSignature(signature);
    Request::FieldTypes::path::extendDataTypeSignature(signature);
    Request::FieldTypes::data::extendDataTypeSignature(signature);

    Response::FieldTypes::error::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Write_ Write;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::file::Write > _uavcan_gdtr_registrator_Write;

}

} // Namespace file
} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::Write::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::Write::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::Write::Request >::stream(Stream& s, ::uavcan::protocol::file::Write::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "offset: ";
    YamlStreamer< ::uavcan::protocol::file::Write::Request::FieldTypes::offset >::stream(s, obj.offset, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "path: ";
    YamlStreamer< ::uavcan::protocol::file::Write::Request::FieldTypes::path >::stream(s, obj.path, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "data: ";
    YamlStreamer< ::uavcan::protocol::file::Write::Request::FieldTypes::data >::stream(s, obj.data, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::Write::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::Write::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::Write::Response >::stream(Stream& s, ::uavcan::protocol::file::Write::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "error: ";
    YamlStreamer< ::uavcan::protocol::file::Write::Response::FieldTypes::error >::stream(s, obj.error, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace file
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::Write::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::Write::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::Write::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::Write::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace file
} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_FILE_WRITE_HPP_INCLUDED