//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCompositionLinkShare, FBDataDetector, FBNetworkerRequest, FBRequestDeviceAPIContext, FBTypedNSArrayOfNSString, FBUserSession, NSMutableArray;
@protocol FBCompositionLinkShareControllerDelegate;

@interface FBCompositionLinkShareController : NSObject
{
    struct RecursiveMutex _lock;
    FBDataDetector *_detector;
    FBCompositionLinkShare *_sharedLink;
    FBNetworkerRequest *_graphRequest;
    NSMutableArray *_deniedLinks;
    id <FBCompositionLinkShareControllerDelegate> _delegate;
    FBUserSession *_session;
    FBRequestDeviceAPIContext *_deviceAPIContext;
}

@property(retain, nonatomic) FBDataDetector *detector; // @synthesize detector=_detector;
@property(retain, nonatomic) FBNetworkerRequest *graphRequest; // @synthesize graphRequest=_graphRequest;
@property(retain, nonatomic) FBRequestDeviceAPIContext *deviceAPIContext; // @synthesize deviceAPIContext=_deviceAPIContext;
@property(readonly, retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBCompositionLinkShare *sharedLink; // @synthesize sharedLink=_sharedLink;
@property(nonatomic) id <FBCompositionLinkShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)removeImageURLFromCurrentSharedLink;
- (void)denyLinkWithLinkText:(id)arg1;
- (void)denyCurrentLink;
- (void)updateSharedLink:(id)arg1;
- (void)checkInText:(id)arg1 closeToRange:(struct _NSRange)arg2 textLengthChange:(int)arg3;
- (void)notifyDelegateLinkHasFullInformation;
- (void)_fetchGraphData:(id)arg1:(id)arg2;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfNSString *linksRemovedByUser;
- (void)_cancelEverything;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 deniedLinks:(id)arg2;

@end

