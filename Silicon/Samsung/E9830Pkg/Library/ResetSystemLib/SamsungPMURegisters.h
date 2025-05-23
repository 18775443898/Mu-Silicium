#ifndef __SAMSUNGPMUREGISTERS_H_
#define __SAMSUNGPMUREGISTERS_H_

#define EXYNOS_PMU_BASE             0x15860000
#define PS_HOLD			    0x030C
#define SWRESET		            0x3A00
#define RST_STAT	            0x0404
#define SWRESET_TRIGGER	            (1 << 1)
#define EXYNOS_PMU_SYSIP_DAT0	    0x0810

#define SEC_DEBUG_MAGIC_INFORM      0x0808
#define SEC_DEBUG_PANIC_INFORM      0x080C

#define SEC_REBOOT_END_OFFSET	    (16)

#define SEC_REBOOT_NORMAL           0x4E

#define SEC_RESET_REASON_PREFIX     0x12345600

#define SEC_RESET_REASON_UNKNOWN    (SEC_RESET_REASON_PREFIX | 0x00)
#define SEC_RESET_REASON_DOWNLOAD   (SEC_RESET_REASON_PREFIX | 0x01)
#define SEC_RESET_REASON_RECOVERY   (SEC_RESET_REASON_PREFIX | 0x04)
#define SEC_RESET_REASON_BOOTLOADER (SEC_RESET_REASON_PREFIX | 0x0D)

#define REBOOT_MODE_FASTBOOT	    0xFA

#endif //__SAMSUNGPMUREGISTERS_H_
