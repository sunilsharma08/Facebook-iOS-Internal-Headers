//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBPresenceComposerInputView-Protocol.h"
#import "FBPresenceComposerListener-Protocol.h"
#import "FBPresenceFeedDataSourceListener-Protocol.h"

@class FBNetworkImageView, FBPresenceIconView, FBUserSession, NSString, UIImage, UITapGestureRecognizer, UIView;
@protocol FBPresenceComposerInputControl, FBPresenceComposerInputListener;

@interface FBPresenceComposerInputViewController : UIViewController <FBPresenceFeedDataSourceListener, FBPresenceComposerListener, FBPresenceComposerInputView>
{
    FBUserSession *_session;
    UIView *_searchFieldBackground;
    FBNetworkImageView *_profilePictureView;
    UIView *_iconViewContainer;
    FBPresenceIconView *_iconView;
    UIViewController<FBPresenceComposerInputControl> *_activitySearchFieldViewController;
    UIViewController<FBPresenceComposerInputControl> *_placeSearchFieldViewController;
    UIView *_searchFieldDivider;
    UIImage *_defaultIconImage;
    UITapGestureRecognizer *_iconTapRecognizer;
    struct UIEdgeInsets _insets;
    id <FBPresenceComposerInputListener> _inputListener;
}

- (void).cxx_destruct;
- (float)inputBackgroundHeight;
- (void)reset;
- (void)composerDidPublish:(id)arg1;
- (void)compositionUpdated:(id)arg1;
- (void)composerDidTransitionToStep:(unsigned int)arg1;
- (void)composerDidClose;
- (void)composerDidOpen;
- (void)noMoreMostRecentPages;
- (void)noMoreFavsPages;
- (void)mostRecentChanged:(id)arg1;
- (void)nearbyFriendsChanged:(id)arg1;
- (void)favsChanged:(id)arg1 isTailLoad:(BOOL)arg2;
- (void)pinnedChanged:(id)arg1;
- (void)feedChangedPinned:(id)arg1 favs:(id)arg2 nearby:(id)arg3 mostRecent:(id)arg4;
- (void)selfUpdateChanged:(id)arg1 likeSentence:(id)arg2 feedback:(id)arg3 isPending:(BOOL)arg4;
- (void)receivedAuthorName:(id)arg1 profilePicURL:(id)arg2;
- (void)iconViewTapped:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)setAuthorProfilePictureURL:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 activitySearchFieldViewController:(id)arg2 placeSearchFieldViewController:(id)arg3 inputListener:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

