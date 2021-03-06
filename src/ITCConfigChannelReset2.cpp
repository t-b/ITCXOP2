#include "ITC_StandardHeaders.h"

// This file is part of the `ITCXOP2` project and licensed under BSD-3-Clause.

// Operation template:
// ITCConfigChannelReset2/Z[=number:displayErrors]/DEV=number:deviceID

extern "C" int
ExecuteITCConfigChannelReset2(ITCConfigChannelReset2RuntimeParamsPtr p)
{
  BEGIN_OUTER_CATCH

  DeviceIDHelper DeviceID(p);

  ITCDLL::ITC_ResetChannels(DeviceID);

  END_OUTER_CATCH
}
