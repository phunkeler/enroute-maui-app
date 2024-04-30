//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyGEP : NSObject
{
}

+ (int)LISTENER_PLATFORM;

+ (int)LISTENER_PERSONS;

+ (int)LISTENER_CALENDAR;

+ (int)LISTENER_PUSH;

+ (int)LISTENER_MESSAGES;

+ (int)LISTENER_RPC;

+ (int)SEARCH_COMPLETED;

+ (int)PLATFORM_URL_INVITES;

+ (int)PLATFORM_URL_TICKET;

+ (int)PLATFORM_URL_SCREEN;

+ (int)PLATFORM_URL_GROUPS;

+ (int)PLATFORM_NOTIFICATION;

+ (int)PLATFORM_STANDALONE_USER_ADDED;

+ (int)PLATFORM_STANDALONE_USER_REMOVED;

+ (int)PLATFORM_LOGGING_ENABLED;

+ (int)PLATFORM_LOGGING_DISABLED;

+ (int)PLATFORM_DEVICE_REGISTERED;

+ (int)PLATFORM_DEVICE_UNREGISTERED;

+ (int)PLATFORM_USER_MESSAGE;

+ (int)PLATFORM_SHARING;

+ (int)PLATFORM_NOT_SHARING;

+ (int)PLATFORM_WRONG_SERVER;

+ (int)PLATFORM_DEVICE_REGISTER_FAILED;

+ (int)PLATFORM_DEVICE_UNREGISTER_FAILED;

+ (int)CALENDAR_CHANGED;

+ (int)PUSH_INVITE;

+ (int)PUSH_GROUP;

+ (int)PUSH_VIEWER;

+ (int)PUSH_DATA_VALUE;

+ (int)PUSH_REFRESH;

+ (int)PUSH_ECHO;

+ (int)PUSH_SYNC;

+ (int)PUSH_CONFIG;

+ (int)PUSH_CARDS_FEED;

+ (int)PUSH_CARD;

+ (int)MESSAGES_RECEIVED;

+ (int)RPC_FAVORITES_READY;

+ (int)RPC_INVITE_READY;

@end