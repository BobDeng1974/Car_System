
#pragma once

/**
  *  \addtogroup Common
  *  @{
  */


/** \brief Camera Configuration */

/** \brief Front Top View �O�_�ҥ� */
#define SIM_DEFAULT_TOP_VIEW_FRONT_FUNCTUIN_ENABLED             0
/** \brief Front Top View ��ܵ��G�����ਤ�� */
#define SIM_DEFAULT_TOP_VIEW_FRONT_ROTATION_DEGREE              0
/** \brief Front Top View ��ܵ��G�O�_�n�� Mirror */
#define SIM_DEFAULT_TOP_VIEW_FRONT_MIRROR                       0
/** \brief Front Top View ��ܦb Buffer �W���_�l��m- X */
#define SIM_DEFAULT_TOP_VIEW_FRONT_DISPLAY_START_POX_X          0
/** \brief Front Top View ��ܦb Buffer �W���_�l��m- Y */
#define SIM_DEFAULT_TOP_VIEW_FRONT_DISPLAY_START_POX_Y          0
/** \brief Front Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_FRONT_DISPLAY_AREA_SIZE_X          392
/** \brief Front Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_FRONT_DISPLAY_AREA_SIZE_Y          334
/** \brief Front Top View ��ܪ��̪�Z�� (���϶Z��) */
#define SIM_DEFAULT_TOP_VIEW_FRONT_DISPLAY_MIN_DISTANCE         150
/** \brief Front Top View ��ܪ��̻��Z�� */
#define SIM_DEFAULT_TOP_VIEW_FRONT_DISPLAY_MAX_DISTANCE         2500

/** \brief Back Top View �O�_�ҥ� */
#define SIM_DEFAULT_TOP_VIEW_BACK_FUNCTUIN_ENABLED             0
/** \brief Back Top View ��ܵ��G�����ਤ�� */
#define SIM_DEFAULT_TOP_VIEW_BACK_ROTATION_DEGREE              0
/** \brief Back Top View ��ܵ��G�O�_�n�� Mirror */
#define SIM_DEFAULT_TOP_VIEW_BACK_MIRROR                       0
/** \brief Back Top View ��ܦb Buffer �W���_�l��m- X */
#define SIM_DEFAULT_TOP_VIEW_BACK_DISPLAY_START_POX_X          0
/** \brief Back Top View ��ܦb Buffer �W���_�l��m- Y */
#define SIM_DEFAULT_TOP_VIEW_BACK_DISPLAY_START_POX_Y          0
/** \brief Back Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_BACK_DISPLAY_AREA_SIZE_X          392
/** \brief Back Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_BACK_DISPLAY_AREA_SIZE_Y          334
/** \brief Back Top View ��ܪ��̪�Z�� (���϶Z��) */
#define SIM_DEFAULT_TOP_VIEW_BACK_DISPLAY_MIN_DISTANCE         250
/** \brief Back Top View ��ܪ��̻��Z�� */
#define SIM_DEFAULT_TOP_VIEW_BACK_DISPLAY_MAX_DISTANCE         2500

/** \brief Left Top View �O�_�ҥ� */
#define SIM_DEFAULT_TOP_VIEW_LEFT_FUNCTUIN_ENABLED             0
/** \brief Left Top View ��ܵ��G�����ਤ�� */
#define SIM_DEFAULT_TOP_VIEW_LEFT_ROTATION_DEGREE              0
/** \brief Left Top View ��ܵ��G�O�_�n�� Mirror */
#define SIM_DEFAULT_TOP_VIEW_LEFT_MIRROR                       0
/** \brief Left Top View ��ܦb Buffer �W���_�l��m- X */
#define SIM_DEFAULT_TOP_VIEW_LEFT_DISPLAY_START_POX_X          0
/** \brief Left Top View ��ܦb Buffer �W���_�l��m- Y */
#define SIM_DEFAULT_TOP_VIEW_LEFT_DISPLAY_START_POX_Y          0
/** \brief Left Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_LEFT_DISPLAY_AREA_SIZE_X          720
/** \brief Left Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_LEFT_DISPLAY_AREA_SIZE_Y          480
/** \brief Left Top View ��ܪ��̪�Z�� (���϶Z��) */
#define SIM_DEFAULT_TOP_VIEW_LEFT_DISPLAY_MIN_DISTANCE         0
/** \brief Left Top View ��ܪ��̻��Z�� */
#define SIM_DEFAULT_TOP_VIEW_LEFT_DISPLAY_MAX_DISTANCE         5000

/** \brief Right Top View �O�_�ҥ� */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_FUNCTUIN_ENABLED             0
/** \brief Right Top View ��ܵ��G�����ਤ�� */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_ROTATION_DEGREE              0
/** \brief Right Top View ��ܵ��G�O�_�n�� Mirror */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_MIRROR                       0
/** \brief Right Top View ��ܦb Buffer �W���_�l��m- X */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_DISPLAY_START_POX_X          0
/** \brief Right Top View ��ܦb Buffer �W���_�l��m- Y */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_DISPLAY_START_POX_Y          0
/** \brief Right Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_DISPLAY_AREA_SIZE_X          720
/** \brief Right Top View ��ܦb Buffer �W���e�׽d�� */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_DISPLAY_AREA_SIZE_Y          480
/** \brief Right Top View ��ܪ��̪�Z�� (���϶Z��) */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_DISPLAY_MIN_DISTANCE         0
/** \brief Right Top View ��ܪ��̻��Z�� */
#define SIM_DEFAULT_TOP_VIEW_RIGHT_DISPLAY_MAX_DISTANCE         5000

/* Normal Vew Configuration */
/** \brief Normal Vew Front - �ҥ�/�T�� - 0: Disabled,  1: Enabled */
#define SIM_DEFAULT_NV_FRONT_FUNCTION_ENABLED                   0      
/** \brief Normal Vew Front - ��ܫ��� - 0: Crop Only,  1: Do-defisheye Only, 2: Do View Angle Correction */
#define SIM_DEFAULT_NV_FRONT_TYPE                               2       
/** \brief Normal Vew Front - �������_�l��m - X */
#define SIM_DEFAULT_NV_FRONT_CROP_START_POS_X                   58       
/** \brief Normal Vew Front - �������_�l��m - Y */
#define SIM_DEFAULT_NV_FRONT_CROP_START_POS_Y                   60        
/** \brief Normal Vew Front - �������d��j�p - X */
#define SIM_DEFAULT_NV_FRONT_CROP_AREA_SIZE_X                   604     
/** \brief Normal Vew Front - �������d��j�p - Y */
#define SIM_DEFAULT_NV_FRONT_CROP_AREA_SIZE_Y                   392       
/** \brief Normal Vew Front - ��ܪ��_�l��m - X */
#define SIM_DEFAULT_NV_FRONT_DISPLAY_START_POS_X                0         
/** \brief Normal Vew Front - ��ܪ��_�l��m - Y */
#define SIM_DEFAULT_NV_FRONT_DISPLAY_START_POS_Y                0         
/** \brief Normal Vew Front - ��ܪ��d��j�p - X */
#define SIM_DEFAULT_NV_FRONT_DISPLAY_AREA_SIZE_X                392       
/** \brief Normal Vew Front - ��ܪ��d��j�p - Y */
#define SIM_DEFAULT_NV_FRONT_DISPLAY_AREA_SIZE_Y                334       
/** \brief Normal Vew Front - ��ܹϪ����ਤ��*/
#define SIM_DEFAULT_NV_FRONT_ROTATION_DEGREE                    0       
/** \brief Normal Vew Front - ��ܮɬO�_�� mirror */
#define SIM_DEFAULT_NV_FRONT_MORRIR                             0         
/** \brief Normal Vew Front - �ؼХ��������I��m - X */
#define SIM_DEFAULT_NV_FRONT_PT_DEST_ORIGIN_POS_X               196         
/** \brief Normal Vew Front - �ؼХ��������I��m - Y */
#define SIM_DEFAULT_NV_FRONT_PT_DEST_ORIGIN_POS_Y               135         
/** \brief Normal Vew Front - �ؼХ����� FOV (H) */
#define SIM_DEFAULT_NV_FRONT_PT_DEST_FOV_H                      135         
/** \brief Normal Vew Front - �ؼХ����� Pitch Angle*/
#define SIM_DEFAULT_NV_FRONT_PT_DEST_PITCH                      (-10)         
/** \brief Normal Vew Front - �ؼХ����� Yaw Angle*/
#define SIM_DEFAULT_NV_FRONT_PT_DEST_YAW                        0         
/** \brief Normal Vew Front - �ؼХ����� Roll Angle*/
#define SIM_DEFAULT_NV_FRONT_PT_DEST_ROLL                       0         

/** \brief Normal Vew Back - �ҥ�/�T�� - 0: Disabled,  1: Enabled */
#define SIM_DEFAULT_NV_BACK_FUNCTION_ENABLED                    0      
/** \brief Normal Vew Back - ��ܫ��� - 0: Crop Only,  1: Do-defisheye Only, 2: Do View Angle Correction */
#define SIM_DEFAULT_NV_BACK_TYPE                                2       
/** \brief Normal Vew Back - �������_�l��m - X */
#define SIM_DEFAULT_NV_BACK_CROP_START_POS_X                    6       
/** \brief Normal Vew Back - �������_�l��m - Y */
#define SIM_DEFAULT_NV_BACK_CROP_START_POS_Y                    0        
/** \brief Normal Vew Back - �������d��j�p - X */
#define SIM_DEFAULT_NV_BACK_CROP_AREA_SIZE_X                    708     
/** \brief Normal Vew Back - �������d��j�p - Y */
#define SIM_DEFAULT_NV_BACK_CROP_AREA_SIZE_Y                    426       
/** \brief Normal Vew Back - ��ܪ��_�l��m - X */
#define SIM_DEFAULT_NV_BACK_DISPLAY_START_POS_X                 0         
/** \brief Normal Vew Back - ��ܪ��_�l��m - Y */
#define SIM_DEFAULT_NV_BACK_DISPLAY_START_POS_Y                 0         
/** \brief Normal Vew Back - ��ܪ��d��j�p - X */
#define SIM_DEFAULT_NV_BACK_DISPLAY_AREA_SIZE_X                 392       
/** \brief Normal Vew Back - ��ܪ��d��j�p - Y */
#define SIM_DEFAULT_NV_BACK_DISPLAY_AREA_SIZE_Y                 334       
/** \brief Normal Vew Back - ��ܹϪ����ਤ��*/
#define SIM_DEFAULT_NV_BACK_ROTATION_DEGREE                     0       
/** \brief Normal Vew Back - ��ܮɬO�_�� mirror */
#define SIM_DEFAULT_NV_BACK_MORRIR                              1         
/** \brief Normal Vew Back - �ؼХ��������I��m - X */
#define SIM_DEFAULT_NV_BACK_PT_DEST_ORIGIN_POS_X                196         
/** \brief Normal Vew Back - �ؼХ��������I��m - Y */
#define SIM_DEFAULT_NV_BACK_PT_DEST_ORIGIN_POS_Y                167         
/** \brief Normal Vew Back - �ؼХ����� FOV (H) */
#define SIM_DEFAULT_NV_BACK_PT_DEST_FOV_H                       117         
/** \brief Normal Vew Back - �ؼХ����� Pitch Angle*/
#define SIM_DEFAULT_NV_BACK_PT_DEST_PITCH                       (-45)         
/** \brief Normal Vew Back - �ؼХ����� Yaw Angle*/
#define SIM_DEFAULT_NV_BACK_PT_DEST_YAW                         0         
/** \brief Normal Vew Back - �ؼХ����� Roll Angle*/
#define SIM_DEFAULT_NV_BACK_PT_DEST_ROLL                        0         

/** \brief Normal Vew Left - �ҥ�/�T�� - 0: Disabled,  1: Enabled */
#define SIM_DEFAULT_NV_LEFT_FUNCTION_ENABLED                    0      
/** \brief Normal Vew Left - ��ܫ��� - 0: Crop Only,  1: Do-defisheye Only, 2: Do View Angle Correction */
#define SIM_DEFAULT_NV_LEFT_TYPE                                2       
/** \brief Normal Vew Left - �������_�l��m - X */
#define SIM_DEFAULT_NV_LEFT_CROP_START_POS_X                    0       
/** \brief Normal Vew Left - �������_�l��m - Y */
#define SIM_DEFAULT_NV_LEFT_CROP_START_POS_Y                    0        
/** \brief Normal Vew Left - �������d��j�p - X */
#define SIM_DEFAULT_NV_LEFT_CROP_AREA_SIZE_X                    720     
/** \brief Normal Vew Left - �������d��j�p - Y */
#define SIM_DEFAULT_NV_LEFT_CROP_AREA_SIZE_Y                    480       
/** \brief Normal Vew Left - ��ܪ��_�l��m - X */
#define SIM_DEFAULT_NV_LEFT_DISPLAY_START_POS_X                 0         
/** \brief Normal Vew Left - ��ܪ��_�l��m - Y */
#define SIM_DEFAULT_NV_LEFT_DISPLAY_START_POS_Y                 0         
/** \brief Normal Vew Left - ��ܪ��d��j�p - X */
#define SIM_DEFAULT_NV_LEFT_DISPLAY_AREA_SIZE_X                 720       
/** \brief Normal Vew Left - ��ܪ��d��j�p - Y */
#define SIM_DEFAULT_NV_LEFT_DISPLAY_AREA_SIZE_Y                 480       
/** \brief Normal Vew Left - ��ܹϪ����ਤ��*/
#define SIM_DEFAULT_NV_LEFT_ROTATION_DEGREE                     0       
/** \brief Normal Vew Left - ��ܮɬO�_�� mirror */
#define SIM_DEFAULT_NV_LEFT_MORRIR                              0         
/** \brief Normal Vew Left - �ؼХ��������I��m - X */
#define SIM_DEFAULT_NV_LEFT_PT_DEST_ORIGIN_POS_X                360         
/** \brief Normal Vew Left - �ؼХ��������I��m - Y */
#define SIM_DEFAULT_NV_LEFT_PT_DEST_ORIGIN_POS_Y                240         
/** \brief Normal Vew Left - �ؼХ����� FOV (H) */
#define SIM_DEFAULT_NV_LEFT_PT_DEST_FOV_H                       135         
/** \brief Normal Vew Left - �ؼХ����� Pitch Angle*/
#define SIM_DEFAULT_NV_LEFT_PT_DEST_PITCH                       0;//(-70)         
/** \brief Normal Vew Left - �ؼХ����� Yaw Angle*/
#define SIM_DEFAULT_NV_LEFT_PT_DEST_YAW                         90         
/** \brief Normal Vew Left - �ؼХ����� Roll Angle*/
#define SIM_DEFAULT_NV_LEFT_PT_DEST_ROLL                        0         

/** \brief Normal Vew Right - �ҥ�/�T�� - 0: Disabled,  1: Enabled */
#define SIM_DEFAULT_NV_RIGHT_FUNCTION_ENABLED                   0      
/** \brief Normal Vew Right - ��ܫ��� - 0: Crop Only,  1: Do-defisheye Only, 2: Do View Angle Correction */
#define SIM_DEFAULT_NV_RIGHT_TYPE                               2       
/** \brief Normal Vew Right - �������_�l��m - X */
#define SIM_DEFAULT_NV_RIGHT_CROP_START_POS_X                   0       
/** \brief Normal Vew Right - �������_�l��m - Y */
#define SIM_DEFAULT_NV_RIGHT_CROP_START_POS_Y                   0        
/** \brief Normal Vew Right - �������d��j�p - X */
#define SIM_DEFAULT_NV_RIGHT_CROP_AREA_SIZE_X                   720     
/** \brief Normal Vew Right - �������d��j�p - Y */
#define SIM_DEFAULT_NV_RIGHT_CROP_AREA_SIZE_Y                   480       
/** \brief Normal Vew Right - ��ܪ��_�l��m - X */
#define SIM_DEFAULT_NV_RIGHT_DISPLAY_START_POS_X                0         
/** \brief Normal Vew Right - ��ܪ��_�l��m - Y */
#define SIM_DEFAULT_NV_RIGHT_DISPLAY_START_POS_Y                0         
/** \brief Normal Vew Right - ��ܪ��d��j�p - X */
#define SIM_DEFAULT_NV_RIGHT_DISPLAY_AREA_SIZE_X                720       
/** \brief Normal Vew Right - ��ܪ��d��j�p - Y */
#define SIM_DEFAULT_NV_RIGHT_DISPLAY_AREA_SIZE_Y                480       
/** \brief Normal Vew Right - ��ܹϪ����ਤ��*/
#define SIM_DEFAULT_NV_RIGHT_ROTATION_DEGREE                    0       
/** \brief Normal Vew Right - ��ܮɬO�_�� mirror */
#define SIM_DEFAULT_NV_RIGHT_MORRIR                             0         
/** \brief Normal Vew Right - �ؼХ��������I��m - X */
#define SIM_DEFAULT_NV_RIGHT_PT_DEST_ORIGIN_POS_X               360         
/** \brief Normal Vew Right - �ؼХ��������I��m - Y */
#define SIM_DEFAULT_NV_RIGHT_PT_DEST_ORIGIN_POS_Y               240         
/** \brief Normal Vew Right - �ؼХ����� FOV (H) */
#define SIM_DEFAULT_NV_RIGHT_PT_DEST_FOV_H                      135         
/** \brief Normal Vew Right - �ؼХ����� Pitch Angle*/
#define SIM_DEFAULT_NV_RIGHT_PT_DEST_PITCH                      (-70)         
/** \brief Normal Vew Right - �ؼХ����� Yaw Angle*/
#define SIM_DEFAULT_NV_RIGHT_PT_DEST_YAW                        0         
/** \brief Normal Vew Right - �ؼХ����� Roll Angle*/
#define SIM_DEFAULT_NV_RIGHT_PT_DEST_ROLL                       0         


/** \brief SMOD - �ҥ�/�T�� - 0: Disabled,  1: Enabled */
#define SIM_DEFAULT_SMOD_FUNCTION_ENABLED               1      
/** \brief SMOD Detection Range on alAVM2D birdview image. (�����Z�� (mm) */
#define SIM_DEFAULT_SMOD_DETEC_RANGE                    2000
/** \brief SMOD Sensitivity. */
#define SIM_DEFAULT_SMOD_SENSITIVITY                    5

/** \brief FM_v2 - BV Left Camera Model */
#define SIM_DEFAULT_FM_v2_BV_LEFT_CAMERA_MODEL             FM3D_SPARROW_190       // 0: Sparrow 144, 1: Sparrow 190, 2: Sparrow 90
/** \brief FM_v2 - BV Left Center of Distortion (COD) - X, pixel */
#define SIM_DEFAULT_FM_v2_BV_LEFT_COD_X                    360     // NTSC �v���W����m    
/** \brief FM_v2 - BV Left Center of Distortion (COD) - Y, pixel */
#define SIM_DEFAULT_FM_v2_BV_LEFT_COD_Y                    240     // NTSC �v���W����m    

/** \brief FM_v2 - BV Right Camera Model */
#define SIM_DEFAULT_FM_v2_BV_RIGHT_CAMERA_MODEL            FM3D_SPARROW_190       // 0: Sparrow 144, 1: Sparrow 190, 2: Sparrow 90
/** \brief FM_v2 - BV Left Center of Distortion (COD) - X, pixel */
#define SIM_DEFAULT_FM_v2_BV_RIGHT_COD_X                   360     // NTSC �v���W����m    
/** \brief FM_v2 - BV Left Center of Distortion (COD) - Y, pixel */
#define SIM_DEFAULT_FM_v2_BV_RIGHT_COD_Y                   240     // NTSC �v���W����m    

/** \brief FM_v2 - BV Front Camera Model */
#define SIM_DEFAULT_FM_v2_BV_FRONT_CAMERA_MODEL            FM3D_SPARROW_190       // 0: Sparrow 144, 1: Sparrow 190, 2: Sparrow 90
/** \brief FM_v2 - BV Front Center of Distortion (COD) - X, pixel */
#define SIM_DEFAULT_FM_v2_BV_FRONT_COD_X                   360     // NTSC �v���W����m    
/** \brief FM_v2 - BV Front Center of Distortion (COD) - Y, pixel */
#define SIM_DEFAULT_FM_v2_BV_FRONT_COD_Y                   240     // NTSC �v���W����m    

/** \brief FM_v2 - BV Back Camera Model */
#define SIM_DEFAULT_FM_v2_BV_BACK_CAMERA_MODEL             FM3D_SPARROW_144       // 0: Sparrow 144, 1: Sparrow 190, 2: Sparrow 90
/** \brief FM_v2 - BV Back Center of Distortion (COD) - X, pixel */
#define SIM_DEFAULT_FM_v2_BV_BACK_COD_X                    360     // NTSC �v���W����m    
/** \brief FM_v2 - BV Back Center of Distortion (COD) - Y, pixel */
#define SIM_DEFAULT_FM_v2_BV_BACK_COD_Y                    240     // NTSC �v���W����m    

/** \brief FM_v2 - SV Left Camera Model */
#define SIM_DEFAULT_FM_v2_SV_LEFT_CAMERA_MODEL             2       // 0: Sparrow 144, 1: Sparrow 190, 2: Sparrow 90
/** \brief FM_v2 - SV Left Center of Distortion (COD) - X, pixel */
#define SIM_DEFAULT_FM_v2_SV_LEFT_COD_X                    360     // NTSC �v���W����m    
/** \brief FM_v2 - SV Left Center of Distortion (COD) - Y, pixel */
#define SIM_DEFAULT_FM_v2_SV_LEFT_COD_Y                    240     // NTSC �v���W����m    

/** \brief FM_v2 - SV Right Camera Model */
#define SIM_DEFAULT_FM_v2_SV_RIGHT_CAMERA_MODEL            2       // 0: Sparrow 144, 1: Sparrow 190, 2: Sparrow 90
/** \brief FM_v2 - SV Right Center of Distortion (COD) - X, pixel */
#define SIM_DEFAULT_FM_v2_SV_RIGHT_COD_X                   360     // NTSC �v���W����m    
/** \brief FM_v2 - SV Right Center of Distortion (COD) - Y, pixel */
#define SIM_DEFAULT_FM_v2_SV_RIGHT_COD_Y                   240     // NTSC �v���W����m    

/** \brief FM_v2 - LVDS Front Camera Model */
#define SIM_DEFAULT_FM_v2_LVDS_FRONT_CAMERA_MODEL          98       // 0: Sparrow 144, 1: Sparrow 190, 2: Sparrow 90
/** \brief FM_v2 - LVDS Front  Center of Distortion (COD) - X, pixel */
#define SIM_DEFAULT_FM_v2_LVDS_FRONT_COD_X                 360     // NTSC �v���W����m    
/** \brief FM_v2 - LVDS Front  Center of Distortion (COD) - Y, pixel */
#define SIM_DEFAULT_FM_v2_LVDS_FRONT_COD_Y                 240     // NTSC �v���W����m    


/* AVM3D Cfg default setting information */
#define AVM3D_VIEW_CNT 1
#define SIM_DEFAULT_AVM3D_BACK_VEW_S_WARNING_LINE_TO_CAR_BUMPER_1   8000
#define SIM_DEFAULT_AVM3D_BACK_VEW_S_WARNING_LINE_TO_CAR_SIDE_1     3000
#define SIM_DEFAULT_AVM3D_BACK_VEW_S_WARNING_LINE_TO_CAR_BUMPER_2   30000
#define SIM_DEFAULT_AVM3D_BACK_VEW_S_WARNING_LINE_TO_CAR_SIDE_2     3000
#define SIM_DEFAULT_AVM3D_BACK_VEW_F_WARNING_LINE_TO_CAR_BUMPER_1   8000
#define SIM_DEFAULT_AVM3D_BACK_VEW_F_WARNING_LINE_TO_CAR_SIDE_1     3000
#define SIM_DEFAULT_AVM3D_BACK_VEW_F_WARNING_LINE_TO_CAR_BUMPER_2   30000
#define SIM_DEFAULT_AVM3D_BACK_VEW_F_WARNING_LINE_TO_CAR_SIDE_2     3000

#define AVM3D_NAME_1    "AVM3D_LEFT"
#define AVM3D_DestImageBufferSizeX_1    720
#define AVM3D_DestImageBufferSizeY_1    480
#define AVM3D_DestStartPointX_1 0
#define AVM3D_DestStartPointY_1 0
#define AVM3D_DestAreaSizeX_1   392
#define AVM3D_DestAreaSizeY_1   334
#define AVM3D_VirtualCameraPosX_1   2000
#define AVM3D_VirtualCameraPosY_1   2300
#define AVM3D_VirtualCameraPosZ_1   -2600
#define AVM3D_VirtualCameraCustomRoll_1 0
#define AVM3D_VirtualCameraPitch_1  28
#define AVM3D_VirtualCameraYaw_1    -8
#define AVM3D_VirtualCameraRoll_1   -20
#define AVM3D_VCFisheyeModel_1 0x81
#define AVM3D_Mirror_1  0
#define AVM3D_ScalingX_1    1.35
#define AVM3D_ScalingY_1    1.35
#define AVM3D_OffsetX_1     164
#define AVM3D_OffsetY_1     73
#define AVM3D_StitchLineStartX0_1   -1020
#define AVM3D_StitchLineStartY0_1   -2731
#define AVM3D_StitchLineStartX1_1   1020
#define AVM3D_StitchLineStartY1_1   -2731
#define AVM3D_StitchLineStartX2_1   -1020
#define AVM3D_StitchLineStartY2_1   2731
#define AVM3D_StitchLineStartX3_1   1020
#define AVM3D_StitchLineStartY3_1   2731
#define AVM3D_StitchLineAngle0_1    250
#define AVM3D_StitchLineAngle1_1    280
#define AVM3D_StitchLineAngle2_1    135
#define AVM3D_StitchLineAngle3_1    75
#define AVM3D_StitchAngleRange_1    10
#define AVM3D_CurveSurfaceA_1   0.000008
#define AVM3D_CurveSurfaceB_1   0.000008
#define AVM3D_CurveSurfaceC_1   0.000008
#define AVM3D_CurveSurfaceD_1   0.000008
#define AVM3D_CurveSurfaceE_1   1
#define AVM3D_CurveSurfaceF_1   0
#define AVM3D_CurveCenterX_1    0
#define AVM3D_CurveCenterY_1    0
#define AVM3D_CurveCenterZ_1    1000
#define AVM3D_CURVE2_PROJECT_CENTER_Z   -950
#define AVM3D_CornerLeftFrontX_1    -1020
#define AVM3D_CornerLeftFrontY_1    -2731    
#define AVM3D_CornerRightFrontX_1   1020
#define AVM3D_CornerRightFrontY_1   -2731
#define AVM3D_CornerLeftBackX_1     -1020
#define AVM3D_CornerLeftBackY_1     2731
#define AVM3D_CornerRightBackX_1    1020
#define AVM3D_CornerRightBackY_1    2731
#define AVM3D_StichLineType_1   0
#define AVM3D_BLOCK_SET_DISTANCE_1   150


/* AVM3D Overlap Cfg default setting information */
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_A_FRONTLEFT	-1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_A_FRONTLEFT	-200

#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_A_FRONTRIGHT	1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_A_FRONTRIGHT	200

#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_A_BACKLEFT	-1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_A_BACKLEFT	-200

#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_A_BACKRIGHT	1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_A_BACKRIGHT	200


#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_B_FRONTLEFT	-1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_B_FRONTLEFT	-200

#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_B_FRONTRIGHT	-1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_B_FRONTRIGHT	-200

#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_B_BACKLEFT	1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_B_BACKLEFT	200

#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D1_CURVE_B_BACKRIGHT	1000
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_D0_CURVE_B_BACKRIGHT	200

#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_BEZIERWEIGHT	1
#define SIM_DEFAULT_AVM3D_OVERLAP_CFG_ANGLEOFFSET	0


/**
  *  @}
  */
