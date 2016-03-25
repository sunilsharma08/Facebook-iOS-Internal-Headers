//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerSproutsListener-Protocol.h"

@class NSString;

@interface FBComposerSproutsAnalyticsLogger : NSObject <FBComposerSproutsListener>
{
    NSString *_sessionIdentifier;
}

- (void).cxx_destruct;
- (void)_logEventForTappedSprout:(id)arg1;
- (void)_logEventForCancelSprout;
- (void)didTapPlatformSprout:(id)arg1;
- (void)didTapActivitySprout;
- (void)didTapEmbedsSprout;
- (void)didTapVideoBroadcastSprout;
- (void)didTapCameraSprout;
- (void)didTapQAndASprout;
- (void)didTapUploadAVideoOnlySprout;
- (void)didTapUploadAPhotoOnlySprout;
- (void)didTapUploadAPhotoSprout;
- (void)didTapShareLocationSprout;
- (void)didTapPostAStatusSprout;
- (void)didTapCreateLoopsSprout;
- (void)didTapCreateACollageSprout;
- (void)didTapCancelButton;
- (void)didTapBackground;
- (id)initWithSessionIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

