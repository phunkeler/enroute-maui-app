//------------------------------------------------------------------------------
//
// Copyright (c) 2019 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICUSTOMERMESSAGE_H__ENROUTE__GLYMPSE__
#define ICUSTOMERMESSAGE_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
    
/*O*public**/ struct ICustomerMessage : public ICommon
{
    /**
     * Gets the message string for this Customer Message
     */
    public: virtual GString getMessage() = 0;
    
    /**
     * Gets the created time for this Customer Message
     */
    public: virtual int64 getCreatedTime() = 0;
    
};
    
/*C*/typedef O<ICustomerMessage> GCustomerMessage;/**/
    
}
}

#endif // !ICUSTOMERMESSAGE_H__ENROUTE__GLYMPSE__
