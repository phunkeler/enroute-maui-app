//------------------------------------------------------------------------------
//
// Copyright (c) 2020 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICHATMANAGER_H__GLYMPSE__
#define ICHATMANAGER_H__GLYMPSE__

namespace Glympse
{
    
/*O*public**/ struct IChatManager : public IEventSink
{
    /**
     * Determine if the ChatManager is synced with the server.
     *
     * @return True if the ChatManager has synced with the server.
     */
    public: virtual bool isSynced() = 0;
    
    /**
     * Is the chat service connection currently established?
     */
    public: virtual bool isConnected() = 0;
    
    /**
     * Register a room id to begin receiving events for a channel
     */
    public: virtual void registerChannel(const GString& roomId) = 0;
    
    /**
     * Unregister a room id to stop receiving events for a channel
     */
    public: virtual void unregisterChannel(const GString& roomId) = 0;
    
    /**
     * Gets the ChatRoom associated with a room id
     */
    public: virtual GChatRoom getChatRoom(const GString& roomId) = 0;
    
    /**
     * Returns a list of currently registered Chat Rooms
     */
    public: virtual GArray<GChatRoom>::ptr getChatRoomList() = 0;
    
    /**
     * Fetches the predefined messages for the specified org
     *
     * @return True if there is already a cached list of messages for this org
     */
    public: virtual bool fetchPredefinedMessages(const GString& orgId) = 0;
    
    /**
     * Gets the predefined messages for the specified org
     */
    public: virtual GArray<GPredefinedMessage>::ptr getPredefinedMessages(const GString& orgId) = 0;
    
    /**
     * Send a Chat Message to the specified room id
     *
     * @param message to be sent
     * @param roomId roomId to be used
     */
    public: virtual void sendMessage(const GString& message, const GString& roomId) = 0;
    
    /**
     * Send a Chat Message to the specified room id
     *
     * @param message to be sent
     * @param roomId roomId to be used
     * @param predefinedMessageId id of the predefined message that was used to create the message being sent.
     */
    public: virtual void sendMessage(const GString& message, const GString& roomId, int64 predefinedMessageId) = 0;
    
    /**
     * Updates the Chat Room so that the messages up to and including the most recent message
     * are marked as read
     */
    public: virtual void setRoomAsRead(const GString& roomId) = 0;
};

/*C*/typedef O< IChatManager > GChatManager;/**/
    
}

#endif // !ICHATMANAGER_H__GLYMPSE__
