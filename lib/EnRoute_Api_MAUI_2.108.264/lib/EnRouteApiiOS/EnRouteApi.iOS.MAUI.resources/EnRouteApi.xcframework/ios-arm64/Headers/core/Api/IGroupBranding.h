//------------------------------------------------------------------------------
//
// Copyright (c) 2023 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IGROUPBRANDING_H__GLYMPSE__
#define IGROUPBRANDING_H__GLYMPSE__

namespace Glympse
{

/*C*/
struct IGroupBranding;
typedef O< IGroupBranding > GGroupBranding;
/**/

/*O*public**/ struct IGroupBranding : public ICommon
{
    public: virtual GArray<GDefinedRoute>::ptr getDefinedRoutes() = 0;
    // Current theme values
    public: virtual GString getPrimaryColor() = 0;
    public: virtual GString getSecondaryColor() = 0;
    public: virtual GString getTertiaryColor() = 0;
    public: virtual GString getHeaderColor() = 0;
    public: virtual GImage getAvatar() = 0;
    public: virtual bool isAvatarAppliedToMembers() = 0;
    public: virtual GImage getLogo() = 0;
    public: virtual GString getHeaderHref() = 0;
    public: virtual GString getTagNickname() = 0;
    public: virtual bool isNicknameAppliedToMembers() = 0;
    public: virtual bool shouldDisplayEntireRoute() = 0;
    public: virtual GArray<GGroupAd>::ptr getAds() = 0;
};

}

#endif // !IGROUPBRANDING_H__GLYMPSE__
