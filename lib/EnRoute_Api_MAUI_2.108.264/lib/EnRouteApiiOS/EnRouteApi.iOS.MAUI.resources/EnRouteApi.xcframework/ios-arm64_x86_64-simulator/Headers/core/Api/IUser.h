//------------------------------------------------------------------------------
//
// Copyright (c) 2012 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IUSER_H__GLYMPSE__
#define IUSER_H__GLYMPSE__

namespace Glympse 
{

/**
 * Represents Glympse user on the system. 
 */
/*O*public**/ struct IUser : public IEventSink
{
    /**
     * Gets the internal user identifier of this user.
     */
    public: virtual GString getId() = 0;

    /**
     * @return true, if user represents self, false otherwise.
     */
    public: virtual bool isSelf() = 0;
    
    /**
     * Gets user nickname.
     */
    public: virtual GString getNickname() = 0;

    /**
     * Gets user avatar. This method never returns NULL.
     * IImage contains no image, if avatar is not set. 
     */
    public: virtual GImage getAvatar() = 0;
    
    /**
     * Gets a user's logo. This method never returns NULL.
     * IImage contains no image if the logo is not set.
     */
    public: virtual GImage getLogo() = 0;

    /**
     * Gets user's primary branding color or NULL if not set
     */
    public: virtual GString getPrimaryColor() = 0;
    
    /**
     * Gets user's secondary branding color or NULL if not set
     */
    public: virtual GString getSecondaryColor() = 0;
    
    /**
     * Gets last known user location.
     */
    public: virtual GLocation getLocation() = 0;
    
    /**
     * Gets active ticket for the user.
     */
    public: virtual GTicket getActive() = 0;
    
    /**
     * Gets active standalone ticket. 
     */
    public: virtual GTicket getActiveStandalone() = 0;
    
    /**
     * Gets list of tickets for the user.
     */
    public: virtual GArray<GTicket>::ptr getTickets() = 0;
    
    /**
     * Gets the ITicket object that matches the given invite code.
     *
     * @param code Invite code of the ticket you would like to find.
     * @return The ITicket object that matches the given invite code,
     * or NULL if the invite code was not found.
     */
    public: virtual GTicket findTicketByInviteCode(const GString& code) = 0;
    
    /**
     * Modifies nickname associated with self user profile.
     * The operation can only be performed against self user (see isSelf()).
     *
     * New nickname is synchronously propagated through the object model and becomes available
     * through getNickname() right after setNickname() method completes with success.
     *
     * @param nickname New user nickname.
     * @return true if operation is scheduled successfully.
     */
    public: virtual bool setNickname(const GString& nickname) = 0;
    
    /**
     * Modifies avatar associated with self user profile.
     * The operation can only be performed against self user (see isSelf()).
     *
     * Avatar properties (new URL and drawable) become available through getAvatar()
     * only upon receiving confirmation from server.
     *
     * Only single avatar upload operation can be going on at a time. Subsequent calls to
     * modify() will keep failing silently until previously scheduled operation completes.
     * Use isUploadingAvatar() before calling modify() when passing new avatar drawable.
     *
     * @param avatar New user avatar.
     * @return true if operation is scheduled successfully.
     */
    public: virtual bool setAvatar(const GDrawable& avatar) = 0;
    
    /**
     * Checks whether avatar is being uploaded at the moment.
     *
     * @return true if platform is currently busy uploading new user avatar.
     */
    public: virtual bool isUploadingAvatar() = 0;
    
    /**
     * Tells platform to stop watching all tickets received from this user. 
     * This also removes the user from the list (maintained by IUserManager).
     * This method takes no effect, when invoked against self user. 
     *
     * @return true upon success.
     */
    public: virtual bool stopWatching() = 0;
};
    
}

#endif // !IUSER_H__GLYMPSE__
