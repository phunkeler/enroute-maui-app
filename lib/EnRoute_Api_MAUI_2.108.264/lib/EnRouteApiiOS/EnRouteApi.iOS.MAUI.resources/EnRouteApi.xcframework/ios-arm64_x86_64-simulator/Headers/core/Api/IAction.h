//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IACTION_H__GLYMPSE__
#define IACTION_H__GLYMPSE__

namespace Glympse
{
    
/**
 * Generic Action interface for exposing Action properties
 */
/*O*public**/ struct IAction : public IPersistable
{
    public: virtual GString getType() = 0;
    
    public: virtual GString getUrl() = 0;
    
    public: virtual GPrimitive getHeaders() = 0;
    
    public: virtual GString getMethod() = 0;
    
    public: virtual GPrimitive getJson() = 0;
};
    
/*C*/typedef O< IAction > GAction;/**/
    
}

#endif // !IACTION_H__GLYMPSE__
