
#ifndef __SII8240_PLATFORM_H__
#define __SII8240_PLATFORM_H__
#include <linux/i2c.h>
#include "sii8240_driver.h"
#include <linux/power_supply.h>
#include "../../../../video/edid.h"

struct sii8240_platform_data* platform_init_data(struct i2c_client *client);
int platform_ap_hdmi_hdcp_auth(struct sii8240_data *sii8240);
bool platform_hdmi_hpd_status(void);
extern int muic_otg_control(int enable);
#endif /* __SII8240_PLATFORM_H__ */
