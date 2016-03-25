//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppModule-Protocol.h"

@class FBExceptionHandler, FBProviderMap, FBUserSession, NSString;

@interface FBNativeAppModule : NSObject <FBAppModule>
{
    FBUserSession *_session;
    FBProviderMap *_providerMap;
}

+ (id)instanceForSession:(id)arg1 providerMap:(id)arg2;
@property(readonly, nonatomic) FBProviderMap *providerMap; // @synthesize providerMap=_providerMap;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)cleanupSession;
- (id)supportedURLSchemes;
- (id)supportedKeys;
- (id)viewControllerForMenuItem:(id)arg1;
- (id)URLSegues;
- (id)ID;
- (id)init;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FBExceptionHandler *exceptionHandler;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

