/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/minidrone/repos/optiTrackDrone/ardupilot/modules/DroneCAN/DSDL/uavcan/protocol/6.AccessCommandShell.uavcan
 */

#ifndef UAVCAN_PROTOCOL_ACCESSCOMMANDSHELL_HPP_INCLUDED
#define UAVCAN_PROTOCOL_ACCESSCOMMANDSHELL_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# THIS DEFINITION IS SUBJECT TO CHANGE.
#
# This service allows to execute arbitrary commands on the remote node's internal system shell.
#
# Essentially, this service mimics a typical terminal emulator, with one text input (stdin) and two text
# outputs (stdout and stderr). When there's no process running, the input is directed into the terminal
# handler itself, which interprets it. If there's a process running, the input will be directed into
# stdin of the running process. It is possible to forcefully return the terminal into a known state by
# means of setting the reset flag (see below), in which case the terminal will kill all of the child
# processes, if any, and return into the initial idle state.
#
# The server is assumed to allocate one independent terminal instance per client, so that different clients
# can execute commands without interfering with each other.
#

#
# Input and output should use this newline character.
#
uint8 NEWLINE = '\n'

#
# The server is required to keep the result of the last executed command for at least this time.
# When this time expires, the server may remove the results in order to reclaim the memory, but it
# is not guaranteed. Hence, the clients must retrieve the results in this amount of time.
#
uint8 MIN_OUTPUT_LIFETIME_SEC = 10

#
# These flags control the shell and command execution.
#
uint8 FLAG_RESET_SHELL          = 1     # Restarts the shell instance anew; may or may not imply CLEAR_OUTPUT_BUFFERS
uint8 FLAG_CLEAR_OUTPUT_BUFFERS = 2     # Makes stdout and stderr buffers empty
uint8 FLAG_READ_STDOUT          = 64    # Output will contain stdout
uint8 FLAG_READ_STDERR          = 128   # Output will be extended with stderr
uint8 flags

#
# If the shell is idle, it will interpret this string.
# If there's a process running, this string will be piped into its stdin.
#
# If RESET_SHELL is set, new input will be interpreted by the shell immediately.
#
uint8[<=128] input

---

#
# Exit status of the last executed process, or error code of the shell itself.
# Default value is zero.
#
int32 last_exit_status

#
# These flags indicate the status of the shell.
#
uint8 FLAG_RUNNING              = 1     # The shell is currently running a process; stdin/out/err are piped to it
uint8 FLAG_SHELL_ERROR          = 2     # Exit status contains error code, output contains text (e.g. no such command)
uint8 FLAG_HAS_PENDING_STDOUT   = 64    # There is more stdout to read
uint8 FLAG_HAS_PENDING_STDERR   = 128   # There is more stderr to read
uint8 flags

#
# In case of a shell error, this string may contain ASCII string explaining the nature of the error.
# Otherwise, if stdout read is requested, this string will contain stdout data. If stderr read is requested,
# this string will contain stderr data. If both stdout and stderr read is requested, this string will start
# with stdout and end with stderr, with no separator in between.
#
uint8[<=256] output
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.AccessCommandShell
saturated uint8 flags
saturated uint8[<=128] input
---
saturated int32 last_exit_status
saturated uint8 flags
saturated uint8[<=256] output
******************************************************************************/

#undef flags
#undef input
#undef NEWLINE
#undef MIN_OUTPUT_LIFETIME_SEC
#undef FLAG_RESET_SHELL
#undef FLAG_CLEAR_OUTPUT_BUFFERS
#undef FLAG_READ_STDOUT
#undef FLAG_READ_STDERR
#undef last_exit_status
#undef flags
#undef output
#undef FLAG_RUNNING
#undef FLAG_SHELL_ERROR
#undef FLAG_HAS_PENDING_STDOUT
#undef FLAG_HAS_PENDING_STDERR

namespace uavcan
{
namespace protocol
{

struct UAVCAN_EXPORT AccessCommandShell_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > NEWLINE;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > MIN_OUTPUT_LIFETIME_SEC;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_RESET_SHELL;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_CLEAR_OUTPUT_BUFFERS;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_READ_STDOUT;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_READ_STDERR;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > flags;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 128 > input;
        };

        enum
        {
            MinBitLen
                = FieldTypes::flags::MinBitLen
                + FieldTypes::input::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::flags::MaxBitLen
                + FieldTypes::input::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::NEWLINE >::Type NEWLINE; // '\n'
        static const typename ::uavcan::StorageType< typename ConstantTypes::MIN_OUTPUT_LIFETIME_SEC >::Type MIN_OUTPUT_LIFETIME_SEC; // 10
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_RESET_SHELL >::Type FLAG_RESET_SHELL; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_CLEAR_OUTPUT_BUFFERS >::Type FLAG_CLEAR_OUTPUT_BUFFERS; // 2
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_READ_STDOUT >::Type FLAG_READ_STDOUT; // 64
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_READ_STDERR >::Type FLAG_READ_STDERR; // 128

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::flags >::Type flags;
        typename ::uavcan::StorageType< typename FieldTypes::input >::Type input;

        Request_()
            : flags()
            , input()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<1040 == MaxBitLen>::check();
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
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_RUNNING;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_SHELL_ERROR;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_HAS_PENDING_STDOUT;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_HAS_PENDING_STDERR;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 32, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > last_exit_status;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > flags;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 256 > output;
        };

        enum
        {
            MinBitLen
                = FieldTypes::last_exit_status::MinBitLen
                + FieldTypes::flags::MinBitLen
                + FieldTypes::output::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::last_exit_status::MaxBitLen
                + FieldTypes::flags::MaxBitLen
                + FieldTypes::output::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_RUNNING >::Type FLAG_RUNNING; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_SHELL_ERROR >::Type FLAG_SHELL_ERROR; // 2
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_HAS_PENDING_STDOUT >::Type FLAG_HAS_PENDING_STDOUT; // 64
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_HAS_PENDING_STDERR >::Type FLAG_HAS_PENDING_STDERR; // 128

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::last_exit_status >::Type last_exit_status;
        typename ::uavcan::StorageType< typename FieldTypes::flags >::Type flags;
        typename ::uavcan::StorageType< typename FieldTypes::output >::Type output;

        Response_()
            : last_exit_status()
            , flags()
            , output()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<2097 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 6 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.AccessCommandShell";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    AccessCommandShell_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool AccessCommandShell_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        flags == rhs.flags &&
        input == rhs.input;
}

template <int _tmpl>
bool AccessCommandShell_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(flags, rhs.flags) &&
        ::uavcan::areClose(input, rhs.input);
}

template <int _tmpl>
int AccessCommandShell_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::flags::encode(self.flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input::encode(self.input, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int AccessCommandShell_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::flags::decode(self.flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input::decode(self.input, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool AccessCommandShell_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        last_exit_status == rhs.last_exit_status &&
        flags == rhs.flags &&
        output == rhs.output;
}

template <int _tmpl>
bool AccessCommandShell_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(last_exit_status, rhs.last_exit_status) &&
        ::uavcan::areClose(flags, rhs.flags) &&
        ::uavcan::areClose(output, rhs.output);
}

template <int _tmpl>
int AccessCommandShell_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::last_exit_status::encode(self.last_exit_status, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::flags::encode(self.flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output::encode(self.output, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int AccessCommandShell_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::last_exit_status::decode(self.last_exit_status, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::flags::decode(self.flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output::decode(self.output, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature AccessCommandShell_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x59276B5921C9246EULL);

    Request::FieldTypes::flags::extendDataTypeSignature(signature);
    Request::FieldTypes::input::extendDataTypeSignature(signature);

    Response::FieldTypes::last_exit_status::extendDataTypeSignature(signature);
    Response::FieldTypes::flags::extendDataTypeSignature(signature);
    Response::FieldTypes::output::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Request_<_tmpl>::ConstantTypes::NEWLINE >::Type
    AccessCommandShell_::Request_<_tmpl>::NEWLINE = 10U; // '\n'

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Request_<_tmpl>::ConstantTypes::MIN_OUTPUT_LIFETIME_SEC >::Type
    AccessCommandShell_::Request_<_tmpl>::MIN_OUTPUT_LIFETIME_SEC = 10U; // 10

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Request_<_tmpl>::ConstantTypes::FLAG_RESET_SHELL >::Type
    AccessCommandShell_::Request_<_tmpl>::FLAG_RESET_SHELL = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Request_<_tmpl>::ConstantTypes::FLAG_CLEAR_OUTPUT_BUFFERS >::Type
    AccessCommandShell_::Request_<_tmpl>::FLAG_CLEAR_OUTPUT_BUFFERS = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Request_<_tmpl>::ConstantTypes::FLAG_READ_STDOUT >::Type
    AccessCommandShell_::Request_<_tmpl>::FLAG_READ_STDOUT = 64U; // 64

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Request_<_tmpl>::ConstantTypes::FLAG_READ_STDERR >::Type
    AccessCommandShell_::Request_<_tmpl>::FLAG_READ_STDERR = 128U; // 128

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Response_<_tmpl>::ConstantTypes::FLAG_RUNNING >::Type
    AccessCommandShell_::Response_<_tmpl>::FLAG_RUNNING = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Response_<_tmpl>::ConstantTypes::FLAG_SHELL_ERROR >::Type
    AccessCommandShell_::Response_<_tmpl>::FLAG_SHELL_ERROR = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Response_<_tmpl>::ConstantTypes::FLAG_HAS_PENDING_STDOUT >::Type
    AccessCommandShell_::Response_<_tmpl>::FLAG_HAS_PENDING_STDOUT = 64U; // 64

template <int _tmpl>
const typename ::uavcan::StorageType< typename AccessCommandShell_::Response_<_tmpl>::ConstantTypes::FLAG_HAS_PENDING_STDERR >::Type
    AccessCommandShell_::Response_<_tmpl>::FLAG_HAS_PENDING_STDERR = 128U; // 128

/*
 * Final typedef
 */
typedef AccessCommandShell_ AccessCommandShell;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::AccessCommandShell > _uavcan_gdtr_registrator_AccessCommandShell;

}

} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::AccessCommandShell::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::AccessCommandShell::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::AccessCommandShell::Request >::stream(Stream& s, ::uavcan::protocol::AccessCommandShell::Request::ParameterType obj, const int level)
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
    s << "flags: ";
    YamlStreamer< ::uavcan::protocol::AccessCommandShell::Request::FieldTypes::flags >::stream(s, obj.flags, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "input: ";
    YamlStreamer< ::uavcan::protocol::AccessCommandShell::Request::FieldTypes::input >::stream(s, obj.input, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::AccessCommandShell::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::AccessCommandShell::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::AccessCommandShell::Response >::stream(Stream& s, ::uavcan::protocol::AccessCommandShell::Response::ParameterType obj, const int level)
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
    s << "last_exit_status: ";
    YamlStreamer< ::uavcan::protocol::AccessCommandShell::Response::FieldTypes::last_exit_status >::stream(s, obj.last_exit_status, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "flags: ";
    YamlStreamer< ::uavcan::protocol::AccessCommandShell::Response::FieldTypes::flags >::stream(s, obj.flags, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "output: ";
    YamlStreamer< ::uavcan::protocol::AccessCommandShell::Response::FieldTypes::output >::stream(s, obj.output, level + 1);
}

}

namespace uavcan
{
namespace protocol
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::AccessCommandShell::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::AccessCommandShell::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::AccessCommandShell::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::AccessCommandShell::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_ACCESSCOMMANDSHELL_HPP_INCLUDED