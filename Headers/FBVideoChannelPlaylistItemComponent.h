//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent, FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemModelObject, FBVideoChannelPlaylistItem, FBVideoChannelPlaylistItemComponentState, FBVideoChannelPlaylistScrollBlockingController, NSArray, NSString;
@protocol FBFeedbackTargetProtocol, FBIntentHandler, FBNavigationCoordinator, FBQueriedActorFieldsProtocol;

@interface FBVideoChannelPlaylistItemComponent : CKCompositeComponent
{
    id <FBQueriedActorFieldsProtocol> _actor;
    FBIntentAnalyticsInfo *_analyticsInfo;
    id <FBIntentHandler> _intentHandler;
    CKComponent *_scrollBlockingProgressComponent;
    CKComponent *_scrollBlockingInfoComponent;
    FBVideoChannelPlaylistScrollBlockingController *_scrollBlockingController;
    FBVideoChannelPlaylistItem *_item;
    FBMemModelObject<FBFeedbackTargetProtocol> *_feedbackTarget;
    FBFeedComponentToolbox *_toolbox;
    NSArray *_trackingCodes;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBVideoChannelPlaylistItemComponentState *_state;
    NSString *_videoID;
}

+ (float)yPositionOfVideoFrame;
+ (id)newWithVideoPlaylistItem:(id)arg1 playerComponent:(id)arg2 ufiComponent:(id)arg3 secondaryActionComponent:(id)arg4 scrollBlockingController:(id)arg5 feedbackTarget:(id)arg6 navigationCoordinator:(id)arg7 intentHandler:(id)arg8 analyticsInfo:(id)arg9 toolbox:(id)arg10;
+ (id)initialState;
@property(readonly, copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) FBVideoChannelPlaylistScrollBlockingController *scrollBlockingController; // @synthesize scrollBlockingController=_scrollBlockingController;
@property(readonly, nonatomic) FBVideoChannelPlaylistItemComponentState *state; // @synthesize state=_state;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, copy, nonatomic) NSArray *trackingCodes; // @synthesize trackingCodes=_trackingCodes;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBMemModelObject<FBFeedbackTargetProtocol> *feedbackTarget; // @synthesize feedbackTarget=_feedbackTarget;
- (void).cxx_destruct;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (void)didExpandItem;
- (void)didTapHeader;

@end

