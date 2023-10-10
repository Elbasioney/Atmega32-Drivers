/* 
 * File:   7Seg_Config.h
 * Author: LENOVO
 *
 * Created on July 25, 2023, 10:34 AM
 */



/*
 * usage : choose 7 segment port
 * modes : PORT_A , PORT_B , PORT_C , PORT_D
 */
#define _7SEG_PORT PORT_B



/*
 * usage : control 7 segment type
 * modes : _7SEGMENT_COMMON_ANODE , _7SEGMENT_COMMON_CATHODE
 */
#define _7SEGMENT_COMMON_ANODE   0
#define _7SEGMENT_COMMON_CATHODE 1

#define _7SEGMENT_TYPE _7SEGMENT_COMMON_CATHODE



/*
 * usage : control 7 segment mode
 * modes : _7SEGMENT_WITH_DECODER , _7SEGMENT_WITH_NO_DECODER
 */
#define _7SEGMENT_WITH_DECODER    0
#define _7SEGMENT_WITH_NO_DECODER 1

#define _7SEGMENT_MODE  _7SEGMENT_WITH_DECODER