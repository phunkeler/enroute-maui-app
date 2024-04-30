//------------------------------------------------------------------------------
//
// Copyright (c) 2020 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICHATROOM_H__GLYMPSE__
#define ICHATROOM_H__GLYMPSE__

namespace Glympse
{

/**
 * Collection of messages and extra data about a chat conversation
 */
/*O*public**/ struct IChatRoom : public virtual IPersistable
{
    /**
     * @return The time that the room was created. Epoch ms.
     */
    public: virtual int64 getCreatedTime() = 0;
    
    /**
     * @return The name of the room
     */
    public: virtual GString getName() = 0;
    
    /**
     *  @return The list of ChatMessages in this room
     */
    public: virtual GArray<GChatMessage>::ptr getChatMessages() = 0;
    
    /**
     * A monotonically increasing number indicating the 'sequence number' of the latest message sent in the channel.
     * Useful for getting all the messages sent since the last message you recieved.
     */
    public: virtual int64 getSequenceNumber() = 0;
    
    /**
     * Gets the sequence number of the most recent message that has been read by the user.
     */
    public: virtual int64 getLastReadSequenceNumber() = 0;
};

/*C*/typedef O< IChatRoom > GChatRoom;/**/
    
}

#endif // !ICHATROOM_H__GLYMPSE__
