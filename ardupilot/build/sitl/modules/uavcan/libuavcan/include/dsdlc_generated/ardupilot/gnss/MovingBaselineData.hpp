/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/minidrone/repos/optiTrackDrone/ardupilot/modules/DroneCAN/DSDL/ardupilot/gnss/20005.MovingBaselineData.uavcan
 */

#ifndef ARDUPILOT_GNSS_MOVINGBASELINEDATA_HPP_INCLUDED
#define ARDUPILOT_GNSS_MOVINGBASELINEDATA_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
# length of data is set per the number of bytes for pkt in
# libraries/AP_GPS/RTCM3_Parser.h
uint8[<=300] data
******************************************************************************/

/********************* DSDL signature source definition ***********************
ardupilot.gnss.MovingBaselineData
saturated uint8[<=300] data
******************************************************************************/

#undef data

namespace ardupilot
{
namespace gnss
{

template <int _tmpl>
struct UAVCAN_EXPORT MovingBaselineData_
{
    typedef const MovingBaselineData_<_tmpl>& ParameterType;
    typedef MovingBaselineData_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 300 > data;
    };

    enum
    {
        MinBitLen
            = FieldTypes::data::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::data::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::data >::Type data;

    MovingBaselineData_()
        : data()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<2409 == MaxBitLen>::check();
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

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 20005 };

    static const char* getDataTypeFullName()
    {
        return "ardupilot.gnss.MovingBaselineData";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool MovingBaselineData_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        data == rhs.data;
}

template <int _tmpl>
bool MovingBaselineData_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(data, rhs.data);
}

template <int _tmpl>
int MovingBaselineData_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::data::encode(self.data, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int MovingBaselineData_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::data::decode(self.data, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature MovingBaselineData_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x9F323748C32133AULL);

    FieldTypes::data::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef MovingBaselineData_<0> MovingBaselineData;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::ardupilot::gnss::MovingBaselineData > _uavcan_gdtr_registrator_MovingBaselineData;

}

} // Namespace gnss
} // Namespace ardupilot

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::ardupilot::gnss::MovingBaselineData >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::ardupilot::gnss::MovingBaselineData::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::ardupilot::gnss::MovingBaselineData >::stream(Stream& s, ::ardupilot::gnss::MovingBaselineData::ParameterType obj, const int level)
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
    s << "data: ";
    YamlStreamer< ::ardupilot::gnss::MovingBaselineData::FieldTypes::data >::stream(s, obj.data, level + 1);
}

}

namespace ardupilot
{
namespace gnss
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::ardupilot::gnss::MovingBaselineData::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::ardupilot::gnss::MovingBaselineData >::stream(s, obj, 0);
    return s;
}

} // Namespace gnss
} // Namespace ardupilot

#endif // ARDUPILOT_GNSS_MOVINGBASELINEDATA_HPP_INCLUDED