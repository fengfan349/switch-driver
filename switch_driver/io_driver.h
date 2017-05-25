#ifndef IO_DRIVER_H
#define IO_DRIVER_H

#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/kernel.h>		
#include <linux/slab.h>		
#include <linux/fs.h>			
#include <linux/errno.h>		
#include <linux/types.h>		
#include <linux/proc_fs.h>
#include <linux/fcntl.h>		
#include <linux/aio.h>
#include <linux/ioport.h>
#include <linux/cdev.h>
#include <linux/ioctl.h> 		
#include <linux/mm.h>
#include <linux/delay.h>
#include <linux/cdev.h>
#include <linux/device.h>

#include <asm/uaccess.h>	
#include <asm/io.h>
#include <asm/system.h>		
#include <asm/page.h>
#include <asm/semaphore.h>


/*寄存器数据类型 volatile*/
#ifndef VUINT16
typedef volatile unsigned short int VUINT16;
#endif

#ifndef VUINT32
typedef volatile unsigned int 		VUINT32;
#endif

#define CAST(x) (x) //强制类型转换

/* PIP register set */

#define	PBDIR(base)	(CAST(VUINT32 *)((base) + 0x0AB8)) /* PB data dir */
#define	PBPAR(base)	(CAST(VUINT32 *)((base) + 0x0ABC)) /* PB pin ass*/
#define	PBODR(base)	(CAST(VUINT16 *)((base) + 0x0AC2)) /* PB open drain*/
#define	PBDAT(base)	(CAST(VUINT32 *)((base) + 0x0AC4)) /* PB Data Reg*/

/* Input/Output Port register */

#define	PADIR(base)	(CAST(VUINT16 *)((base) + 0x0950)) /* PA data dir*/
#define	PAPAR(base)	(CAST(VUINT16 *)((base) + 0x0952)) /* PA pin assign*/
#define	PAODR(base)	(CAST(VUINT16 *)((base) + 0x0954)) /* PA open drain*/
#define	PADAT(base)	(CAST(VUINT16 *)((base) + 0x0956)) /* PA data reg */

#define	PCDIR(base)	(CAST(VUINT16 *)((base) + 0x0960)) /* PC data dir */
#define	PCPAR(base)	(CAST(VUINT16 *)((base) + 0x0962)) /* PC pin assign*/
#define	PCSO(base)	(CAST(VUINT16 *)((base) + 0x0964)) /* PC options */
#define	PCDAT(base)	(CAST(VUINT16 *)((base) + 0x0966)) /* PC data reg */
#define	PCINT(base)	(CAST(VUINT16 *)((base) + 0x0968)) /* PC intr ctrl */

#define	PDDIR(base)	(CAST(VUINT16 *)((base) + 0x0970)) /* PD data dir */
#define	PDPAR(base)	(CAST(VUINT16 *)((base) + 0x0972)) /* PD pin assign*/
#define	PDDAT(base)	(CAST(VUINT16 *)((base) + 0x0976)) /* PD data reg */

#define ECNCTL(base) 	(CAST(VUINT32 *)((base) + 0x0E40))
#define IEVENT(base) 	(CAST(VUINT32 *)((base) + 0x0E44))
#define MII_DATA(base)	(CAST(VUINT32 *)((base) + 0x0E80))
#define MII_SPEED(base)	(CAST(VUINT32 *)((base) + 0x0E84))


#endif

