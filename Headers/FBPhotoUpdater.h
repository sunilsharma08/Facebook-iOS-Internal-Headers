//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBGraphQLMemResponseController, FBMediaSetStoreManager, FBUserSession;

@interface FBPhotoUpdater : NSObject
{
    FBGraphQLMemResponseController *_responseController;
    FBMediaSetStoreManager *_mediaSetStoreManager;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 photoIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updatePhotosWithPhotoIDs:(id)arg1 networkRequestThreshold:(int)arg2 callbackQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithMemResponseController:(id)arg1 mediaSetStoreManager:(id)arg2 session:(id)arg3;

@end

