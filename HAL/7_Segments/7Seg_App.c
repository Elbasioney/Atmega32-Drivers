
#include "7Seg_Config.h"
#include "7Seg_Interface.h"
#include "7Seg_Private.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_Private.h"


static const u8 common_cathode_hex[16] = {0x3F, 0x06, 0x5B, 0x4F,
                               0x66, 0x6D, 0x7D, 0x07,
                               0x7F, 0x6F, 0x77, 0x7C,
                               0x39, 0x5E, 0x79, 0x71};


static const u8 common_anode_hex[16] = {0x3F, 0x06, 0x5B, 0x4F,
                                      0x66, 0x6D, 0x7D, 0x07,
                                      0x7F, 0x6F, 0x77, 0x7C,
                                      0x39, 0x5E, 0x79, 0x71};

void SEG_Write(u8 num){
#if _7SEGMENT_MODE == _7SEGMENT_WITH_NO_DECODER 
#if _7SEGMENT_TYPE == _7SEGMENT_COMMON_CATHODE
    switch(_7SEG_PORT){
        case PORT_A : 
            DIO_PortInit(PORT_A , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_A ,common_cathode_hex[num] );
            break ; 
        case PORT_B : 
            DIO_PortInit(PORT_B , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_B ,common_cathode_hex[num]  );
            break ; 
        case PORT_C : 
            DIO_PortInit(PORT_C , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_C ,common_cathode_hex[num]  ); 
            break ; 
        case PORT_D : 
            DIO_PortInit(PORT_D , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_D ,common_cathode_hex[num]  );
            break ; 
        default : 
            break ; 
    }
#elif _7SEGMENT_TYPE == _7SEGMENT_COMMON_ANODE
    switch(_7SEG_PORT){
        case PORT_A : 
            DIO_PortInit(PORT_A , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_A ,common_anode_hex[num] );
            break ; 
        case PORT_B : 
            DIO_PortInit(PORT_B , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_B ,common_anode_hex[num]  );
            break ; 
        case PORT_C : 
            DIO_PortInit(PORT_C , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_C ,common_anode_hex[num]  ); 
            break ; 
        case PORT_D : 
            DIO_PortInit(PORT_D , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_D ,common_anode_hex[num]  );
            break ; 
        default : 
            break ; 
    }
#endif    
    
#endif
    
#if _7SEGMENT_MODE == _7SEGMENT_WITH_DECODER 

    switch(_7SEG_PORT){
        case PORT_A : 
            DIO_PortInit(PORT_A , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_A ,num );
            break ; 
        case PORT_B : 
            DIO_PortInit(PORT_B , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_B ,num  );
            break ; 
        case PORT_C : 
            DIO_PortInit(PORT_C , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_C ,num  ); 
            break ; 
        case PORT_D : 
            DIO_PortInit(PORT_D , ALL_PORT_OUTPUT);
            DIO_PortWrite(PORT_D ,num  );
            break ; 
        default : 
            break ; 
    }

#endif
       
}