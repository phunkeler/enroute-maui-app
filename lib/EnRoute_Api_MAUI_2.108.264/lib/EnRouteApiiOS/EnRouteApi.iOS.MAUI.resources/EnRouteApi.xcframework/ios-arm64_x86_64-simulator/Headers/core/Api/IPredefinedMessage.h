//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPREDEFINEDMESSAGE_H__GLYMPSE__
#define IPREDEFINEDMESSAGE_H__GLYMPSE__

namespace Glympse
{

/**
 * Predefined chat message
 */
/*O*public**/ struct IPredefinedMessage : public virtual IPersistable
{
    /**
     * @return The unique id for this message
     */
    public: virtual int64 getId() = 0;
    
    /**
     * @return The time that the message was created. Epoch ms.
     */
    public: virtual int64 getCreatedTime() = 0;
    
    /**
     * @return The text content of this message.
     */
    public: virtual GString getMessage() = 0;
};

/*C*/typedef O< IPredefinedMessage > GPredefinedMessage;/**/
    
}

#endif // !IPREDEFINEDMESSAGE_H__GLYMPSE__
