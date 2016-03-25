//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerCancellationAlertListener-Protocol.h"
#import "FBFeedOutboxListListener-Protocol.h"

@class FBPublisherManager, NSString;
@protocol FBComposerAlertPresenter;

@interface FBFeedOutboxListPublisherUpdater : NSObject <FBComposerCancellationAlertListener, FBFeedOutboxListListener>
{
    id <FBComposerAlertPresenter> _alertPresenter;
    FBPublisherManager *_publisherManager;
    NSString *_publicationIdentifierForOutstandingCancellationAlert;
    BOOL _supportsOfflinePostingMessage;
}

- (void).cxx_destruct;
- (void)progressAnimationFinishedForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)storyProgressNoLongerVisibleForPublicationWithIdentifier:(id)arg1;
- (void)tappedRetryButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)tappedPauseButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)tappedErrorButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)reapedStoriesDueToTimeoutWithOutboxStoriesStillBeingDisplayedForCompletedPublications:(id)arg1;
- (void)reapedStoriesDueToTimeoutWithNoOutboxStoriesStillBeingDisplayedForCompletedPublications:(id)arg1;
- (void)feedUpdatedAndOutboxStoriesStillBeingDisplayedForPublicationsWithIdentifiers:(id)arg1 storiesReapedFromMutationIdentifiers:(id)arg2 storiesReapedFromFeedChange:(id)arg3;
- (void)feedUpdatedAndNoOutboxStoriesStillBeingDisplayedWithStoriesReapedFromMutationIdentifiers:(id)arg1 storiesReapedFromFeedChange:(id)arg2;
- (void)cancellationEditPostButtonPressed;
- (void)cancellationSaveAsDraftButtonPressed;
- (void)cancellationDiscardButtonPressed;
- (void)cancellationCancelButtonPressed;
- (void)tappedCancelButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)supportShowingOfflinePostingMessage;
- (void)doNotSupportShowingOfflinePostingMessage;
- (id)initWithPublisherManager:(id)arg1 alertPresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

