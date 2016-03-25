//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerCompositionStateChangedListener-Protocol.h"
#import "FBComposerMentionDecoratorDelegate-Protocol.h"
#import "FBPrefetchPlacesListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBComposerCompositionState, FBComposerMentionDecorator, FBComposerMentionsContainerView, FBComposerMutableTaggableCollectionProvider, FBMemAvatarTaggingSearchProvider, FBMutableTaggableCollection, FBNearbyDataSet, FBUserSession, NSString, UITapGestureRecognizer, UITextView, UIView;
@protocol FBAvatarTaggingSearchProviderProtocol, FBComposerMentionControllerDelegate, FBComposerMentionHosting, FBMentionsListener, FBSimpleSearchTaggingProviderProtocol;

@interface FBComposerMentionController : NSObject <FBComposerMentionDecoratorDelegate, UIGestureRecognizerDelegate, FBPrefetchPlacesListener, FBComposerCompositionStateChangedListener>
{
    FBComposerMentionDecorator *_mentionDecorator;
    FBComposerMentionsContainerView *_mentionsViewBackingStore;
    id <FBAvatarTaggingSearchProviderProtocol> _searchProvider;
    FBMutableTaggableCollection *_taggableUsers;
    FBUserSession *_userSession;
    FBComposerCompositionState *_compositionState;
    FBNearbyDataSet *_nearbyDataSet;
    FBMemAvatarTaggingSearchProvider *_memAvatarSearchProvider;
    FBComposerMutableTaggableCollectionProvider *_mutableTaggableCollectionProvider;
    id <FBSimpleSearchTaggingProviderProtocol> _simpleSearchTaggingProvider;
    BOOL _useSimpleSearchTaggingProvider;
    BOOL _usePrefetchedPlacesMentions;
    NSString *_tagAnyoneSearchProviderActorOverrideFBID;
    NSString *_tagAnyoneSearchProviderSearchContext;
    UITapGestureRecognizer *_windowTapGestureRecognizer;
    UITextView *_mentionableView;
    UIView<FBComposerMentionHosting> *_mentionContainerView;
    id <FBMentionsListener> _listener;
    id <FBComposerMentionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerMentionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBMentionsListener> listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) FBComposerMentionDecorator *mentionDecorator; // @synthesize mentionDecorator=_mentionDecorator;
@property(retain, nonatomic) UIView<FBComposerMentionHosting> *mentionContainerView; // @synthesize mentionContainerView=_mentionContainerView;
@property(retain, nonatomic) UITextView *mentionableView; // @synthesize mentionableView=_mentionableView;
- (void).cxx_destruct;
- (BOOL)_isMentionPrefetchedPlaces:(id)arg1;
- (id)_getPrefetchedTaggablePlaces;
- (void)didFinishPrefetchingPlacesWithNearbyDataSet:(id)arg1;
- (void)_setupTagAnyoneSearchProviderAndResetIfNewProviderAndAuthorHasBeenPreviouslySet:(BOOL)arg1;
- (void)mentionDecoratorCommitedMentionsDidChange:(id)arg1;
- (void)mentionDecoratordidAbortProgressiveMentionalizing:(id)arg1;
- (void)mentionDecorator:(id)arg1 selectedMention:(id)arg2 inTableView:(id)arg3;
- (void)mentionDecoratorDidFinishFetchingResults:(id)arg1;
- (void)mentionDecorator:(id)arg1 hasSuggestedMentions:(id)arg2;
- (void)_setMentionsHidden:(BOOL)arg1;
- (void)_fetchTaggableCollection;
- (void)_authorOrPublishTargetDidChange;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)mentionsView;
- (void)mentioningDidFinish;
- (void)dealloc;
- (void)_keyboardHide:(id)arg1;
- (void)_tapped:(id)arg1;
- (id)initWithUserSession:(id)arg1 listener:(id)arg2 mutableTaggableCollectionProvider:(id)arg3 publishTarget:(id)arg4 forceSimpleSearch:(BOOL)arg5 scenePath:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

