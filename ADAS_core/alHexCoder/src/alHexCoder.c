
#include "alHexCoder.h"


UINT8* alHEXCODER_GetCfgBuffer(UINT32 a_ulSectionID, UINT8 *a_pucDataSectionBuffer, UINT32 a_ulBufferSize, UINT32 *a_pulCfgSize)
{
    UINT32 ulDataID;                                    // Single Data ID
    UINT32 ulDataLength;                                // Single Data Length
    UINT8 *pucDataBuffer;                               // Single Data Buffer
    UINT32 ulBufferLength = 0;
    UINT32 *pucBuffer = NULL;   // �N UINT8* �����ର UINT32* ����
    UINT32 *pulPtr = NULL;

    if (a_pucDataSectionBuffer == NULL)
    {
        return 0;
    }

    ulBufferLength = (a_ulBufferSize);
    pucBuffer = (UINT32*)a_pucDataSectionBuffer;   // �N UINT8* �����ର UINT32* ����
    pulPtr = pucBuffer;

    // import
    while ((INT32)(pulPtr - pucBuffer) < (INT32)(ulBufferLength >> 2))
    {
        // 1. �q File Buffer ���ѥX Single Data ���۹��T��m
        ulDataID = *pulPtr;
        ulDataLength = *(pulPtr + 1);
        pucDataBuffer = (UINT8 *)(pulPtr + 2);

        *a_pulCfgSize = ulDataLength << 2;

        if (ulDataID == a_ulSectionID)
        {
            return pucDataBuffer;
        }

        // 3. �ֶi����
        pulPtr += (2 + ulDataLength);
    }

    return 0;
}