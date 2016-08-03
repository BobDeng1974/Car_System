
#pragma once

#include "mtype.h"
#include "atype.h"

/**
*   \defgroup alLANEINFO    alLaneInfo
*   The module define the struct and some enum data whiche inclues lane mark information.
*   @{
*/

/** \brief Enum index flag of lane postion. */
typedef enum 
{

    /** \brief Indicate the lane the same as ego-vehicle. */
    alLANEINFO_LANEINDEX_CENTER = 0,
    /** \brief Indicate the left lane. (��������@���D) */
    alLANEINFO_LANEINDEX_LEFT,
    /** \brief Indicate the right lane. (���k����@���D) */
    alLANEINFO_LANEINDEX_RIGHT,
    /** \brief Indicate the left position far than the left lane. (�x���W�L�������D����m) */
    alLANEINFO_LANEINDEX_LEFT_FAR,
    /** \brief Indicate the right position far than the right lane. (�x���W�L�k�����D����m) */
    alLANEINFO_LANEINDEX_RIGHT_FAR

} alLANEINFO_LANEINDEX;

/** \brief Define the input struct of lane information from lane detection. */
typedef struct
{

    /** \brief Indicate if the left lane marking is valid. (LDWS �O�_���T�����쥪�����D�нu) */
    BOOL    m_bIsLaneValid_L;
    /** \brief Indicate if the right lane marking is valid. (LDWS �O�_���T������k�����D�нu) */
    BOOL    m_bIsLaneValid_R;
    /** \brief Record the kmb parameters of left lane. (LDWS �ҭp��o�쥪�����D�нu�� kmb) */
    alKMBSet  m_kmbLane_L;
    /** \brief Record the kmb parameters of right lane. (LDWS �ҭp��o��k�����D�нu�� kmb) */
    alKMBSet  m_kmbLane_R;
    /** \brief Record the lane width calculated by the distance between left and right lane marking. (LDWS �p��ұo�����D�e��) */
    INT32   m_lLaneWidth;

} alLANEINFO_Set;

/**
*   @}
*/