//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IHEALTHREPORT_H__GLYMPSE__
#define IHEALTHREPORT_H__GLYMPSE__

namespace Glympse
{
    
/*O*public**/ struct IHealthReport : public ICommon
{
    public: virtual GString getName() = 0;
    
    public: virtual GPrimitive getValue() = 0;
};
    
/*C*/typedef O< IHealthReport > GHealthReport;/**/
    
}

#endif // !IHEALTHREPORT_H__GLYMPSE__
