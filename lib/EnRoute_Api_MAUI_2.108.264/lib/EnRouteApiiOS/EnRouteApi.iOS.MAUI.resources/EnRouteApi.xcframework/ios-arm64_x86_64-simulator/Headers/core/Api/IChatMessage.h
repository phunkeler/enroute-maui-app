//------------------------------------------------------------------------------
//
// Copyright (c) 2020 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICHATMESSAGE_H__GLYMPSE__
#define ICHATMESSAGE_H__GLYMPSE__

namespace Glympse
{

/**
 * Exposes basic properties of chat message
 */
/*O*public**/ struct IChatMessage : public virtual IPersistable
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
    public: virtual GString getContents() = 0;
    
    /**
     *  @return The name of the Glympse user that sent this message.
     */
    public: virtual GString getAuthor() = 0;
    
    /**
     * @return The sequence id of this message
     */
    public: virtual int64 getSequenceId() = 0;
    
    /**
     * @return true if this message was sent by an Agent user
     */
    public: virtual bool isAgent() = 0;
};

/*C*/typedef O< IChatMessage > GChatMessage;/**/
    
}

#endif // !ICHATMESSAGE_H__GLYMPSE__
