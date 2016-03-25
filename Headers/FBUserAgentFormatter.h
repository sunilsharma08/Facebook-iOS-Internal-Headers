//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBUserAgentFormatting-Protocol.h"

@class FBLocaleMap, NSString;

@interface FBUserAgentFormatter : NSObject <FBUserAgentFormatting>
{
    NSString *_appName;
    FBLocaleMap *_localeMap;
    CDUnknownBlockType _formatterBlock;
    NSString *_cachedUserAgent;
}

- (void).cxx_destruct;
- (id)formattedUserAgent;
- (id)initWithAppName:(id)arg1 localeMap:(id)arg2 formatterBlock:(CDUnknownBlockType)arg3;
- (id)initWithAppName:(id)arg1 localeMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

