//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBComposerAnalyticsPayload, FBComposerCompositionChangePermissions, FBComposerCompositionDisplayState, FBComposerPostPayload, NSArray, NSDate, NSDictionary, NSString;

@interface FBComposerCompositionState : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isComposingAsAPage;
    BOOL _isPrivacyAvailableForSelection;
    BOOL _supportsCustomMediaPicker;
    NSString *_compositionID;
    NSString *_parentComposerSessionID;
    NSString *_contentOrigin;
    NSDate *_displayedTime;
    NSString *_contentType;
    NSString *_mediaType;
    NSString *_sourceType;
    NSDictionary *_extraAnalyticsDataForInitEvent;
    FBComposerAnalyticsPayload *_analyticsPayload;
    FBComposerPostPayload *_postPayload;
    NSString *_reviewPublishMechanism;
    NSString *_reviewPublishSurface;
    FBComposerCompositionDisplayState *_displayState;
    NSArray *_attachments;
    FBComposerCompositionChangePermissions *_changePermissions;
}

@property(readonly, copy, nonatomic) FBComposerCompositionChangePermissions *changePermissions; // @synthesize changePermissions=_changePermissions;
@property(readonly, copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy, nonatomic) FBComposerCompositionDisplayState *displayState; // @synthesize displayState=_displayState;
@property(readonly, copy, nonatomic) NSString *reviewPublishSurface; // @synthesize reviewPublishSurface=_reviewPublishSurface;
@property(readonly, copy, nonatomic) NSString *reviewPublishMechanism; // @synthesize reviewPublishMechanism=_reviewPublishMechanism;
@property(readonly, copy, nonatomic) FBComposerPostPayload *postPayload; // @synthesize postPayload=_postPayload;
@property(readonly, copy, nonatomic) FBComposerAnalyticsPayload *analyticsPayload; // @synthesize analyticsPayload=_analyticsPayload;
@property(readonly, copy, nonatomic) NSDictionary *extraAnalyticsDataForInitEvent; // @synthesize extraAnalyticsDataForInitEvent=_extraAnalyticsDataForInitEvent;
@property(readonly, copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) BOOL supportsCustomMediaPicker; // @synthesize supportsCustomMediaPicker=_supportsCustomMediaPicker;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) BOOL isPrivacyAvailableForSelection; // @synthesize isPrivacyAvailableForSelection=_isPrivacyAvailableForSelection;
@property(readonly, nonatomic) BOOL isComposingAsAPage; // @synthesize isComposingAsAPage=_isComposingAsAPage;
@property(readonly, copy, nonatomic) NSDate *displayedTime; // @synthesize displayedTime=_displayedTime;
@property(readonly, copy, nonatomic) NSString *contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(readonly, copy, nonatomic) NSString *parentComposerSessionID; // @synthesize parentComposerSessionID=_parentComposerSessionID;
@property(readonly, copy, nonatomic) NSString *compositionID; // @synthesize compositionID=_compositionID;
- (void).cxx_destruct;
- (id)initWithCompositionID:(id)arg1 parentComposerSessionID:(id)arg2 contentOrigin:(id)arg3 displayedTime:(id)arg4 isComposingAsAPage:(BOOL)arg5 isPrivacyAvailableForSelection:(BOOL)arg6 contentType:(id)arg7 mediaType:(id)arg8 supportsCustomMediaPicker:(BOOL)arg9 sourceType:(id)arg10 extraAnalyticsDataForInitEvent:(id)arg11 analyticsPayload:(id)arg12 postPayload:(id)arg13 reviewPublishMechanism:(id)arg14 reviewPublishSurface:(id)arg15 displayState:(id)arg16 attachments:(id)arg17 changePermissions:(id)arg18;

@end

