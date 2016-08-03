
#pragma once

#include "mtype.h"

/**
*   \defgroup alCARSIZEINFO    alCarSizeInfo
*   The module define the struct whiche inclues car size information, such like car width, car length, .. etc.
*  @{
*/

/** \brief Define the structure for car size data. */
typedef struct
{

    /** \brief Define the width of the ego-vehicle. This is the width of the distance between the outer bound of front-left and front-right wheels. (in mm) */
    UINT32  ulEgoVehicleWidth;

    /** \brief Define the front hood height of the ego-vehicle. (in mm) Used to calculate the hood position on the image coordinates and the blind area distance on the world coordinates. */
    UINT32  ulFrontHoodHeight;

    /** \brief Define the horizontal distance between front wheel axis and front bumper. (in mm) Assume the front wheel axis won't exceeded front bumper.  => �t�ȥN��W�X�e�O�� */
    INT32   lFrontWheel2FrontBumper;

    /** \brief Define the horizontal distance between front wheel axis and front wheel axis. (in mm) */
    INT32   lFrontWheel2RearWheel;

    /** \brief Define the maximum steering angle of the vehicle. This is used to offset the steering angle input by CAN data. */
    UINT32  ulMaxSteeringAngle;

    /** \brief The parameter "a" of the equation for calculating car turning angle from steering angle. (��V�L�먤 �c �P������V�� �p ���Y�� �p= a * �c + b) */
    FLOAT32 fCarSteerAngleParamA;

    /** \brief The parameter "b" of the equation for calculating car turning angle from steering angle. (��V�L�먤 �c �P������V�� �p ���Y�� �p= a * �c + b) */
    FLOAT32 fCarSteerAngleParamB;

} alCARSIZEINFO_Set;

/**
*  @}
*/
