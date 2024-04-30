//------------------------------------------------------------------------------
//
// Copyright (c) 2023 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IGROUPAD_H__GLYMPSE__
#define IGROUPAD_H__GLYMPSE__

namespace Glympse
{

/*C*/
struct IGroupAd;
typedef O< IGroupAd > GGroupAd;
/**/

/*O*public**/ struct IGroupAd : public ICommon
{
    public: virtual GString getLink() = 0;
    public: virtual GImage getImage() = 0;
};

}

#endif // !IGROUPAD_H__GLYMPSE__
