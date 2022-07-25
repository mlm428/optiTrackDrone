/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/minidrone/repos/optiTrackDrone/ardupilot/modules/DroneCAN/DSDL/uavcan/equipment/camera_gimbal/1040.AngularCommand.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_CAMERA_GIMBAL_ANGULARCOMMAND_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_CAMERA_GIMBAL_ANGULARCOMMAND_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/equipment/camera_gimbal/Mode.hpp>

/******************************* Source text **********************************
#
# Generic camera gimbal control.
#
# This message can only be used in the following modes:
#  - COMMAND_MODE_ANGULAR_VELOCITY
#  - COMMAND_MODE_ORIENTATION_FIXED_FRAME
#  - COMMAND_MODE_ORIENTATION_BODY_FRAME
#

uint8 gimbal_id

#
# Target operation mode - how to handle this message.
# See the list of acceptable modes above.
#
Mode mode

#
# In the angular velocity mode, this field contains a rate quaternion.
# In the orientation mode, this field contains orientation either in fixed frame or in body frame.
#
float16[4] quaternion_xyzw
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.camera_gimbal.AngularCommand
saturated uint8 gimbal_id
uavcan.equipment.camera_gimbal.Mode mode
saturated float16[4] quaternion_xyzw
******************************************************************************/

#undef gimbal_id
#undef mode
#undef quaternion_xyzw

namespace uavcan
{
namespace equipment
{
namespace camera_gimbal
{

template <int _tmpl>
struct UAVCAN_EXPORT AngularCommand_
{
    typedef const AngularCommand_<_tmpl>& ParameterType;
    typedef AngularCommand_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > gimbal_id;
        typedef ::uavcan::equipment::camera_gimbal::Mode mode;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 4 > quaternion_xyzw;
    };

    enum
    {
        MinBitLen
            = FieldTypes::gimbal_id::MinBitLen
            + FieldTypes::mode::MinBitLen
            + FieldTypes::quaternion_xyzw::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::gimbal_id::MaxBitLen
            + FieldTypes::mode::MaxBitLen
            + FieldTypes::quaternion_xyzw::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::gimbal_id >::Type gimbal_id;
    typename ::uavcan::StorageType< typename FieldTypes::mode >::Type mode;
    typename ::uavcan::StorageType< typename FieldTypes::quaternion_xyzw >::Type quaternion_xyzw;

    AngularCommand_()
        : gimbal_id()
        , mode()
        , quaternion_xyzw()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<80 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 1040 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.camera_gimbal.AngularCommand";
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
bool AngularCommand_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        gimbal_id == rhs.gimbal_id &&
        mode == rhs.mode &&
        quaternion_xyzw == rhs.quaternion_xyzw;
}

template <int _tmpl>
bool AngularCommand_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(gimbal_id, rhs.gimbal_id) &&
        ::uavcan::areClose(mode, rhs.mode) &&
        ::uavcan::areClose(quaternion_xyzw, rhs.quaternion_xyzw);
}

template <int _tmpl>
int AngularCommand_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::gimbal_id::encode(self.gimbal_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::mode::encode(self.mode, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::quaternion_xyzw::encode(self.quaternion_xyzw, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int AngularCommand_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::gimbal_id::decode(self.gimbal_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::mode::decode(self.mode, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::quaternion_xyzw::decode(self.quaternion_xyzw, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature AngularCommand_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x2BCC2CD93F4B355DULL);

    FieldTypes::gimbal_id::extendDataTypeSignature(signature);
    FieldTypes::mode::extendDataTypeSignature(signature);
    FieldTypes::quaternion_xyzw::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef AngularCommand_<0> AngularCommand;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::camera_gimbal::AngularCommand > _uavcan_gdtr_registrator_AngularCommand;

}

} // Namespace camera_gimbal
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::camera_gimbal::AngularCommand >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::camera_gimbal::AngularCommand::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::camera_gimbal::AngularCommand >::stream(Stream& s, ::uavcan::equipment::camera_gimbal::AngularCommand::ParameterType obj, const int level)
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
    s << "gimbal_id: ";
    YamlStreamer< ::uavcan::equipment::camera_gimbal::AngularCommand::FieldTypes::gimbal_id >::stream(s, obj.gimbal_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "mode: ";
    YamlStreamer< ::uavcan::equipment::camera_gimbal::AngularCommand::FieldTypes::mode >::stream(s, obj.mode, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "quaternion_xyzw: ";
    YamlStreamer< ::uavcan::equipment::camera_gimbal::AngularCommand::FieldTypes::quaternion_xyzw >::stream(s, obj.quaternion_xyzw, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace camera_gimbal
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::camera_gimbal::AngularCommand::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::camera_gimbal::AngularCommand >::stream(s, obj, 0);
    return s;
}

} // Namespace camera_gimbal
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_CAMERA_GIMBAL_ANGULARCOMMAND_HPP_INCLUDED