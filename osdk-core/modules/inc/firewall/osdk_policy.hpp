/**
 ********************************************************************
 * @file    osdk_policy.h
 * @version V1.0.0
 * @date    2019/09/15
 * @brief   Define the osdk policy binary array
 *
 * @copyright (c) 2018-2019 DJI. All rights reserved.
 *
 * All information contained herein is, and remains, the property of DJI.
 * The intellectual and technical concepts contained herein are proprietary
 * to DJI and may be covered by U.S. and foreign patents, patents in process,
 * and protected by trade secret or copyright law.  Dissemination of this
 * information, including but not limited to data and other proprietary
 * material(s) incorporated within the information, in any form, is strictly
 * prohibited without the express written consent of DJI.
 *
 * If you receive this source code without DJI’s authorization, you may not
 * further disseminate the information, and you must immediately remove the
 * source code and notify DJI of its removal. DJI reserves the right to pursue
 * legal actions against you for any loss(es) or damage(s) caused by your
 * failure to do so.
 *
 *********************************************************************
 */


#ifndef _OSDK_POLICY_H_
#define _OSDK_POLICY_H_

#include <stdint.h>

#define OSDK_IDENTITY_VERIFY_CALMD5_MAX_NUM          (33 + 17)
#define OSDK_POLICY_FILE_VERSION_OFFSET              (256)
/*!
 * OSDK Policy
 * Creator  : DJI
 * Date     : 2020-05-07
 * OSDK Ver : OSDK 4.0
 * */
static const uint8_t s_osdkPolicyFileBinaryArray[] = {
    0x68, 0xC9, 0x82, 0xC8, 0x30, 0xE4, 0x1D, 0xE2, 0xD9, 0x4D, 0x0E, 0x60, 0xA5, 0xDA, 0x62, 0xC6, 0x76, 0xAB, 0x68, 0xDF, 0xC3, 0xE9, 0x29, 0xCE, 0xD1, 0x14,
    0xA0, 0xC8, 0x11, 0x6A, 0xC4, 0xDC, 0x86, 0x02, 0x4C, 0xDE, 0xBB, 0x77, 0x04, 0x1B, 0x8A, 0x64, 0x54, 0xD1, 0x0C, 0x75, 0x30, 0x68, 0xFB, 0x26, 0x51, 0x0D,
    0x82, 0x8C, 0xB1, 0x66, 0x1F, 0x77, 0xFA, 0xA0, 0x31, 0x3F, 0x34, 0xD8, 0x7E, 0x1A, 0xBE, 0x1C, 0xAB, 0x1F, 0x52, 0xF5, 0x10, 0x92, 0x04, 0x09, 0x42, 0xFD,
    0x70, 0xB5, 0x6E, 0xE1, 0xB1, 0x62, 0xCB, 0xDB, 0x34, 0x16, 0x1C, 0x70, 0x74, 0xCF, 0xDE, 0xCE, 0x76, 0x68, 0xF8, 0xC7, 0x70, 0xFA, 0xFF, 0x54, 0xDE, 0x55,
    0x81, 0x27, 0x54, 0x47, 0x15, 0xFE, 0xD8, 0xB0, 0xDE, 0x07, 0xE7, 0xB5, 0x7C, 0xC9, 0x50, 0xE1, 0xD9, 0x4C, 0xE9, 0xD2, 0x8A, 0x24, 0xF9, 0x43, 0x73, 0x3A,
    0x91, 0xC2, 0xD0, 0x90, 0x39, 0x5F, 0x40, 0x5F, 0x57, 0x9A, 0x0A, 0x26, 0xA5, 0x6F, 0x8F, 0xA2, 0xEB, 0x35, 0x67, 0x13, 0xC6, 0x9B, 0xB0, 0x26, 0x7D, 0xD0,
    0x94, 0x92, 0x7B, 0xFB, 0x32, 0x31, 0x0D, 0x8B, 0x32, 0xB9, 0x5F, 0x12, 0x6A, 0x67, 0xE8, 0xD9, 0x33, 0xBD, 0xE8, 0x25, 0x10, 0x35, 0x70, 0x01, 0x50, 0x60,
    0x93, 0x58, 0x52, 0xD2, 0xFA, 0xF3, 0xAB, 0x4A, 0xF1, 0xB0, 0xA3, 0x69, 0xD2, 0xC8, 0x48, 0xE0, 0x23, 0xA9, 0x28, 0xC3, 0x64, 0x72, 0x5F, 0x33, 0x15, 0x14,
    0xE7, 0xA9, 0xBD, 0x8F, 0xA3, 0x98, 0xE3, 0x94, 0x34, 0x24, 0xA4, 0xEF, 0x76, 0xC2, 0x3A, 0x66, 0x3C, 0xEC, 0x20, 0xD5, 0x89, 0x70, 0x5E, 0xF7, 0xBF, 0x82,
    0x32, 0x1E, 0xD3, 0x90, 0x0F, 0xCB, 0x26, 0x5D, 0x50, 0xD7, 0x26, 0x37, 0xC0, 0xBF, 0x47, 0x11, 0x54, 0x5E, 0xF1, 0xE6, 0x45, 0x81, 0x00, 0x00, 0x63, 0x00,
    0x01, 0x00, 0x5F, 0x00, 0x01, 0x00, 0x02, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x26, 0x27, 0x02, 0x02, 0x12, 0x00, 0x01, 0x02, 0x10, 0x11,
    0x1E, 0x1F, 0x22, 0x2B, 0x2E, 0x2F, 0x30, 0x31, 0x34, 0x35, 0x6A, 0x6B, 0xC4, 0xC6, 0xB8, 0x80, 0x03, 0x01, 0x00, 0x00, 0x1B, 0x04, 0x02, 0x00, 0x00, 0x0A,
    0x4C, 0x05, 0x01, 0x00, 0x00, 0x0B, 0x08, 0x01, 0x02, 0x00, 0x67, 0x68, 0x65, 0x21, 0x00, 0x02, 0x00, 0x05, 0x06, 0x22, 0x01, 0x04, 0x00, 0x01, 0x0E, 0x17,
    0x1E, 0x27, 0x24, 0x01, 0x02, 0x00, 0x11, 0x12, 0x32, 0x3C, 0x02, 0x00, 0x00, 0x37, 0x40, 0x49, 0x02, 0x00, 0x00, 0x20, 0x30
};

#endif    /* _OSDK_POLICY_H_ */
