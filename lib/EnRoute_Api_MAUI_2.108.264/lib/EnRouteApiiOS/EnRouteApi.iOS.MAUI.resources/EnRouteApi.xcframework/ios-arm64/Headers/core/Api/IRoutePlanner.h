//------------------------------------------------------------------------------
//
// Copyright (c) 2023 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IROUTEPLANNER_H__GLYMPSE__
#define IROUTEPLANNER_H__GLYMPSE__

namespace Glympse
{
    
/*O*public**/ struct IRoutePlanner : public IEventSink
{
    public: virtual void addStop(const GPlace& place) = 0;
    
    public: virtual void addStops(const GArray<GPlace>::ptr& places) = 0;
    
    public: virtual void removeStop(const GPlace& place) = 0;
    
    public: virtual void moveStop(int32 fromIndex, int32 toIndex) = 0;
    
    public: virtual GArray<GLocation>::ptr getRoute() = 0;
    
    public: virtual GArray<GPlace>::ptr getStops() = 0;
};
    
/*C*/typedef O< IRoutePlanner > GRoutePlanner;/**/
    
}

#endif // !IROUTEPLANNER_H__GLYMPSE__
