/**
 ******************************************************************************
 * File Name          : rubicon_address_list.c
 * Date               : 06.03.2017 11:46:16
 * Description        : instaled Rubicon controller address list header
 ******************************************************************************
 *
 *
 ******************************************************************************
 */
 
/* Includes ------------------------------------------------------------------*/
#include "rubicon_address_list.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
const uint16_t rubicon_address_list[] = {
	
/** ==========================================================================*/
/**                                                                           */
/**    H O T E L     B J E L A S N I C A    R O O M    A D D R E S S E     */
/**                                                                           */
/** ==========================================================================*/
	
	// room controller addresse 1st floor addresse
	0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 
	0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076,
	0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 
	
	// room controller addresse 2nd floor addresse
	0x00c9, 0x00ca, 0x00cb, 0x00cc, 0x00cd, 0x00ce, 0x00cf, 0x00d0, 0x00d1,
	0x00d2, 0x00d3, 0x00d4, 0x00d5, 0x00d6, 0x00d7, 0x00d8, 0x00d9, 0x00da,
	0x00db, 0x00dc, 0x00dd,
	
	// room controller addresse 3rd floor addresse
	0x012d, 0x012e, 0x012f, 0x0130, 0x0131, 0x0132, 0x0133, 0x0134, 0x0135, 
	0x0136, 0x0137, 0x0138, 0x0139, 0x013a, 0x013b, 0x013c, 0x013d,
	
	0x0000,
	
	
/** ==========================================================================*/
/**                                                                           */
/**    H O T E L     H I L L S   R O O M    A D D R E S S E     			  */
/**                                                                           */
/** ==========================================================================*/
//	// anex room controller addresse 1st floor
//	0x00a0, 0x00a2, 0x00a4, 0x00a6, 0x00a8, 0x00aa, 0x00ac, 0x00ad, 0x00ae, 0x00af,
//	
//	// anex room controller addresse 2st floor
//	0x0104, 0x0105, 0x0106, 0x0107, 0x0108, 0x0109, 0x010a, 0x010b, 0x010c, 
//	0x010d, 0x010e, 0x010f, 0x0110, 0x0111, 0x0112, 0x0113,
//	
//	// anex room controller addresse 3st floor
//	0x0168, 0x0169, 0x016a, 0x016b, 0x016c, 0x016d, 0x016e, 0x016f, 0x0170,
//	0x0171, 0x0172, 0x0173, 0x0174, 0x0175, 0x0176, 0x0177,
//	
//	// anex room controller addresse 4st floor
//	0x01cc, 0x01cd, 0x01ce, 0x01cf, 0x01d0, 0x01d1, 0x01d2, 0x01d3, 0x01d4,
//	0x01d5, 0x01d6, 0x01d7, 0x01d8, 0x01d9, 0x01da, 0x01db,
//	
//	// anex room controller addresse 5st floor
//	0x0230, 0x0231, 0x0232, 0x0233, 0x0234, 0x0235, 0x0236, 0x0237, 0x0238,
//	0x0239, 0x023a, 0x023b, 0x023c, 0x023d, 0x023e, 0x023f,
//	
//	// room controller addresse 1st floor completed
//	0x0083, 0x0084, 0x0085, 0x0086, 0x0087, 0x0088, 0x0089, 0x008a, 0x008c, 
//	0x008e, 0x008f, 0x0090, 0x0091, 0x0092, 0x0093, 0x0094, 0x0095, 0x0096,
//	0x0097, 0x0098, 0x0099, 0x009a, 0x009b, 0x009c, 0x009e, 
//	
//	// room controller addresse 2nd floor completed
//	0x07d1, 0x07d2, 0x07d3, 0x07d4, 0x07d5, 0x07d6, 0x07d7, 0x07d8, 0x07da,
//	0x07dc, 0x07dd, 0x07de, 0x07df, 0x07e0, 0x07e1, 0x07e2, 0x07e3, 0x07e4,
//	0x07e5, 0x07e6, 0x07e7, 0x07e8, 0x07e9, 0x07ea, 0x07ec,
//	
//	// room controller addresse 3rd floor completed
//	0x0bb9, 0x0bbb, 0x0bbc, 0x0bbd, 0x0bbe, 0x0bbf, 0x0bc2, 0x0bc4, 0x0bc6, 
//	0x0bc7, 0x0bc8, 0x0bc9, 0x0bcb, 0x0bcc, 0x0bcd, 0x0bce, 0x0bcf, 0x0bd0,
//	0x0bd1, 0x0bd2, 0x0bd4,
//	
//	// room controller addresse 4th floor completed
//	0x0fa1, 0x0fa2, 0x0fa3, 0x0fa4, 0x0fa5, 0x0fa6, 0x0fa7, 0x0fa8, 0x0faa,
//	0x0fac, 0x0fad, 0x0fae, 0x0faf, 0x0fb0, 0x0fb1, 0x0fb2, 0x0fb3, 0x0fb4,
//	0x0fb5, 0x0fb6, 0x0fb7, 0x0fb8, 0x0fb9, 0x0fba, 0x0fbc,
//	
//	// room controller addresse 5th floor completed
//	0x1389, 0x138a, 0x138b, 0x138c, 0x138d, 0x138e, 0x138f, 0x1390, 0x1392,
//	0x1394, 0x1395, 0x1396, 0x1397, 0x1398, 0x1399, 0x139a, 0x139b, 0x139c,
//	0x139d, 0x139e, 0x139f, 0x13a0, 0x13a1, 0x13a2, 0x13a3, 0x13a4, 0x13a6,
//	
//	// room controller addresse 6th floor completed
//	0x1771, 0x1772, 0x1773, 0x1774, 0x1775, 0x1776, 0x1777, 0x1778, 0x1779,
//	0x177a, 0x177c, 0x177d, 0x177e, 0x177f, 0x1780, 0x1781, 0x1782, 0x1783,
//	0x1784, 0x1785, 0x1786, 0x1787, 0x1788, 0x1789, 0x178a, 0x178c, 0x178e,
//	
//	// room controller addresse 7th floor completed
//	0x1b59, 0x1b5a, 0x1b5b, 0x1b5c, 0x1b5d, 0x1b5e, 0x1b5f, 0x1b60, 0x1b61,
//	0x1b62, 0x1b64, 0x1b65, 0x1b66, 0x1b67, 0x1b68, 0x1b69, 0x1b6a, 0x1b6b,
//	0x1b6c, 0x1b6d, 0x1b6e, 0x1b6f, 0x1b70, 0x1b71, 0x1b72, 0x1b74, 0x1b76,
//	
//	// room controller addresse 8th floor completed
//	0x1f41, 0x1f42, 0x1f43, 0x1f44, 0x1f45, 0x1f46, 0x1f47, 0x1f48, 0x1f49,
//	0x1f4a, 0x1f4c, 0x1f4d, 0x1f4e, 0x1f4f, 0x1f50, 0x1f51, 0x1f52, 0x1f53,
//	0x1f54, 0x1f55, 0x1f56, 0x1f56, 0x1f57, 0x1f58, 0x1f59, 0x1f5a, 0x1f5c,
//	0x1f5e,

//	// room controller addresse 9th floor
//	0x2329, 0x232a, 0x232b, 0x232c, 0x232d, 0x232e, 0x232f, 0x2330, 0x2331,
//	0x2332, 0x2334, 0x2335, 0x2336, 0x2337, 0x2338 ,0x2339, 0x233a, 0x233b,
//	0x233c, 0x233d, 0x233e, 0x233f, 0x2340, 0x2341, 0x2342, 0x2344, 0x2346,
//	
//	// room controller addresse 10th floor
//	0x03e9, 0x03ea, 0x03eb, 0x03ec, 0x03ed, 0x03ee, 0x03ef, 0x03f0, 0x03f1,
//	0x03f2, 0x03f4, 0x03f5, 0x03f6, 0x03f7, 0x03f8, 0x03f9, 0x03fa, 0x03fb,
//	0x03fc, 0x03fd, 0x03fe, 0x03ff, 0x0400, 0x0401, 0x0402, 0x0404, 0x0406,
//		
//	
//	0x0000,
};

uint16_t rubicon_firmware_update_address_list[sizeof(rubicon_address_list) / 2];
uint16_t rubicon_image_update_address_list[sizeof(rubicon_address_list) / 2];
uint32_t address_list_size = (sizeof(rubicon_address_list) / 2);

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/