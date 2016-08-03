
#pragma once

#ifdef __cplusplus
extern "C"
{
#endif
#include <stdio.h>
#include <stdlib.h>
#include "mtype.h"


/**
*  \addtogroup alGAE_AVM
*  @{
*/

/** \brief Total view number */
#define alGAE_ViewNum 4

/** \brief �p��GAE �϶����j�p (�����) */
#define MAX_ROI_SIZE 60

/** \brief �p��GAE �϶������n (�����) */
#define MAX_ROI_AREA MAX_ROI_SIZE*MAX_ROI_SIZE

/** \brief ROI�ƶq: 4(view number) x 2(ROI per view) x 3(YUV) = 24 */
#define NUM_ROI 24

/** \brief �̰����v�W��: �L��L���󭭨�� */
#define COMPENSATE_MAX_VIEW 100

/** \brief �̰����v�W��: �L���T�����󭭨�� */
#define COMPENSATE_MAX_VIEW_LOW 10

/** \brief �C���T���֭�: ���T�C�i�ɶq���v */
#define NOISE_TH_LOW 20

/** \brief �����T���֭�: ���T��������v�L�h */
#define NOISE_TH_HIGH 80

/** \brief ����b�X�iframe�����v���� (�קK�����ܤƩ����T) */
#define FRAME_GAP 5

/** \brief �C��view�b�C��frame����v���W��(���]�t���ĭ�) */
#define COMPENSATE_LIMIT COMPENSATE_MAX_VIEW / FRAME_GAP

/** \brief ���v���ؼ�: �Ω��O�G�ηt���̾� */
#define YMEAN_TARGET	70

/** \brief �L�n�U�� */
#define BRIGHT_LIMIT	245

/** \brief �L�t�U�� */
#define DARK_LIMIT	40

/** \brief �G�ϫG�׻֭� */
#define HIGH_TH	(YMEAN_TARGET+((BRIGHT_LIMIT-YMEAN_TARGET)/2))

/** \brief �t�ϫG�׻֭� */
#define LOW_TH	    (YMEAN_TARGET-((YMEAN_TARGET-DARK_LIMIT)/2))

/** \brief �C�G�װϰ쪺�ʤ���֭� */
#define MEAN_PERCENTAGE_LOW_TH 5

/** \brief ���G�װϰ쪺�ʤ���֭� */
#define MEAN_PERCENTAGE_HIGH_TH 55

/** \brief 1: �Ұ�Debug�\�� 0:off*/
#define alGAE_AVM_LOG 1

/** \brief �P�_��ê�����ۦ��׻֭� */
#define TH_Obstacle_Y	0.51	

/** \brief �P�_�D��ê�����ۦ��׻֭� */
#define TH_Non_Obstacle_Y	0.60

/** \brief Target view �ݸ��v���U��: �C�󥦴N�n�ɨ� TargetOffsetLow_TH */
#define TargetOffsetLow_TH	90

    /** \brief Target view �ݸ��v���W��: ���󥦴N�n�ɨ� TargetOffsetHigh_TH */
#define TargetOffsetHigh_TH	155



/******************************************************************************\
 *  Data Structure
\******************************************************************************/


/** \brief Global_AE_histogram struct for 10 bins */
typedef struct Global_AE_histogram
{
    /** \brief ��ROI��mean�� */
    UINT16 mean;
    /** \brief peak�Ӽ� */
    UINT8 PeakCnt;
    /** \brief bin���p�� */
    UINT16 bin[256];
    /** \brief bin���[�`�� */
    UINT32 sum[10];
    /** \brief �o��mean�Ȫ�case */
    UINT8 mode;
    /** \brief Peak����m */
    UINT8 PositionofPeak[5];
    /** \brief bin���ʤ��� */
    FLOAT32 percentage[10];
    /** \brief roi �����p�ƥ� */
    UINT8 ROIPeakTypeCnt[4];
} Global_AE_Hist;

/** \brief Global_AE Data */
typedef struct
{
    /** \brief the Offset need to add to LCD for Firmware read */
    INT8 acOffset_Ymean_Firmware[4];

    /** \brief the Offset need for target view depend on gear */
    INT16 wOffset_Ymean_TargetView;

    /** \brief the Compensate offset limit */
    INT32 lLimitView;

    /** \brief the Compensate offset limit of each frame */
    INT32 lLimitFrame;

    /** \brief Y mean value of each GAE ROI */
    UINT32 aulMean[8];

    /** \brief Y mean difference of each GAE ROI */
    INT32 alGap[4];

    /** \brief ROI histogram correlation result for obstacle juge 3(YUV) x 4(view num) = 12  */
    FLOAT32 afCorrelationResult[12];

    /** \brief Obstacle flag >> 0: on obstacle 1: obstacle  [0]: ���e  [1]: �k�e  [2]: ����  [3]: �k�� */
    UINT8 aucObstacle[4];

} alGAE_AVM_Data;


/**
*  @}
*/
#ifdef __cplusplus
}
#endif
