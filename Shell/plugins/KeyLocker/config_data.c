#include <swilib.h>
#include <conf_loader.h>
#include <cfg_items.h>

__CFG_BEGIN(0)

	__root const CFG_HDR cfghdr0 = {CFG_UINT, "Desktop ID", 0, 100};
	__root const unsigned int cfg_desk_id = 0;

	__root const CFG_HDR cfghdr1 = {CFG_KEYCODE, "Key", 0, 99};
	__root const unsigned int cfg_key = '#';

	__root const CFG_HDR cfghdr2 = {CFG_CBOX,"Type keyboard lock", 0, 3};
	__root const unsigned int cfg_type_block = 2;
	__root const CFG_CBOX_ITEM cfgcbox0[3] = {"Key Down", "Long Press", "Double Click"};

	__root const CFG_HDR cfghdr3 = {CFG_UINT, "Wait time", 10, 200};
	__root const unsigned int cfg_wait_time = 65;

__CFG_END(0)
