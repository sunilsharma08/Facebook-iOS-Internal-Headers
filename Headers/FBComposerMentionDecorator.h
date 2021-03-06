//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMemAvatarTaggingSearchProviderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBComposerMentionProviderExperimentContext, FBNetworkErrorBar, FBSearchTableViewData, FBTagAnyoneSearchProvider, FBUserSession, NSArray, NSDictionary, NSMutableArray, NSMutableCharacterSet, NSMutableDictionary, NSString, UIActivityIndicatorView, UITableView;
@protocol FBAvatarTaggingSearchProviderProtocol, FBComposerMentionDecoratorDelegate;

@interface FBComposerMentionDecorator : NSObject <UITableViewDelegate, UITableViewDataSource, FBMemAvatarTaggingSearchProviderDelegate>
{
    FBSearchTableViewData *_tableMentions;
    struct _NSRange _inProgressRange;
    NSMutableArray *_mentions;
    struct _NSRange _changedRange;
    NSString *_changedText;
    NSString *_previousFullText;
    NSString *_expectedFullText;
    NSString *_mentionalizeTriggerText;
    BOOL _skipNextMentionEdit;
    BOOL _mentionalizeOnPrefixChar;
    BOOL _skipShouldChangeLogicOnHighlight;
    int _searchCookie;
    struct _NSRange _progressiveStartRange;
    UITableView *_tableView;
    FBNetworkErrorBar *_networkErrorBar;
    UIActivityIndicatorView *_loadingIndicatorView;
    NSMutableCharacterSet *_boundarySet;
    NSMutableDictionary *_mentionLayersByGraphQLID;
    NSMutableArray *_impressions;
    NSString *_mentionsSessionID;
    unsigned int _keypressCount;
    unsigned int _endSessionReason;
    NSDictionary *_clickEvent;
    BOOL _isExpectingTextDidChange;
    NSArray *_collectionSearchProviderResults;
    NSArray *_tagAnyoneSearchProviderResults;
    unsigned int _loadingState;
    FBComposerMentionProviderExperimentContext *_composerExperimentConfig;
    id <FBComposerMentionDecoratorDelegate> _delegate;
    id <FBAvatarTaggingSearchProviderProtocol> _searchProvider;
    FBTagAnyoneSearchProvider *_tagAnyoneSearchProvider;
    FBUserSession *_session;
    NSString *_inProgressMentionText;
}

@property(copy, nonatomic) NSString *inProgressMentionText; // @synthesize inProgressMentionText=_inProgressMentionText;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *expectedFullText; // @synthesize expectedFullText=_expectedFullText;
@property(copy, nonatomic) NSString *previousFullText; // @synthesize previousFullText=_previousFullText;
@property(copy, nonatomic) NSString *changedText; // @synthesize changedText=_changedText;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) BOOL mentionalizeOnPrefixChar; // @synthesize mentionalizeOnPrefixChar=_mentionalizeOnPrefixChar;
@property(retain, nonatomic) FBTagAnyoneSearchProvider *tagAnyoneSearchProvider; // @synthesize tagAnyoneSearchProvider=_tagAnyoneSearchProvider;
@property(retain, nonatomic) id <FBAvatarTaggingSearchProviderProtocol> searchProvider; // @synthesize searchProvider=_searchProvider;
@property(nonatomic) __weak id <FBComposerMentionDecoratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_logStringForMenitonsEndReasonType:(unsigned int)arg1;
- (BOOL)_isExplicitMention;
- (BOOL)_hasMentionedAvatar:(id)arg1;
- (id)_searchText;
- (struct _NSRange)_detectChangedRangeIn:(id)arg1 from:(id)arg2 probableChangeEnd:(unsigned int)arg3 replacedText:(id *)arg4 replacedRange:(struct _NSRange *)arg5;
- (struct _NSRange)_wordRangeAtRange:(struct _NSRange)arg1 forBoundarySet:(id)arg2 inText:(id)arg3;
- (void)_replaceRange:(struct _NSRange)arg1 withString:(id)arg2 inTextView:(id)arg3;
- (void)_exchangeImpOfSelector:(SEL)arg1 onObject:(id)arg2 withImpOfSelector:(SEL)arg3 fromObject:(id)arg4;
- (void)_setContentOffset:(struct CGPoint)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (id)_findMentionsWithRange:(struct _NSRange)arg1;
- (BOOL)_skipShouldChangeLogic;
- (BOOL)_shouldStartMentionalizeProgressively:(id)arg1;
- (void)searchProviderDidFinishFetchingResults:(id)arg1;
- (void)searchProvider:(id)arg1 foundResults:(id)arg2 forText:(id)arg3;
- (void)logMentionSessionEnd;
- (void)logMentionSessionStart;
- (id)analyticsModule;
- (void)_logImpressionForMention:(id)arg1 position:(unsigned int)arg2;
- (void)_logSelectedMention:(id)arg1 selectedPosition:(unsigned int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)heightForRow:(unsigned int)arg1 inSectionWithIndex:(unsigned int)arg2;
- (BOOL)rowWithIndex:(unsigned int)arg1 representsTitleOfSection:(unsigned int)arg2;
- (unsigned int)numberOfRowsInSection:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)displayMentions:(id)arg1 inTableView:(id)arg2;
- (void)_showLoadingIndicatorIfNeeded;
- (void)_updateMentionHighlights:(id)arg1 inTextView:(id)arg2;
- (BOOL)_canDoHighlights;
- (void)_removeMention:(id)arg1;
- (void)commitExistingMentions:(id)arg1 inTextView:(id)arg2;
- (void)commitMention:(id)arg1 inTextView:(id)arg2;
- (BOOL)_checkAndFixMentionIfApplicable:(id)arg1 textViewText:(id)arg2;
- (void)_reportCollectionMentions:(id)arg1 forText:(id)arg2;
- (void)_reportTagAnyoneMentions:(id)arg1 forText:(id)arg2 fromProvider:(id)arg3;
- (void)_reportSimpleSearchMentions:(id)arg1 forText:(id)arg2;
- (id)_combinedSearchProviderMentions;
- (id)_composerMentionsForAvatars:(id)arg1;
- (void)_updateLoadingState:(unsigned int)arg1;
- (void)_mentionalizeRange:(struct _NSRange)arg1 inText:(id)arg2;
- (void)mentionalizeAtCursorInTextView:(id)arg1;
- (void)stopProgressiveMentionalizingWithEndReason:(unsigned int)arg1;
- (void)mentionalizeProgressivelyAtCursorInTextView:(id)arg1;
- (void)reset;
- (void)removeAllHighlights;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)_isTextViewShakeToUndoAfterTokenDelete:(id)arg1 changeTextInRange:(struct _NSRange)arg2;
@property(readonly, nonatomic, getter=isFetchingResults) BOOL fetchingResults;
@property(readonly, nonatomic) NSArray *commitedMentions;
@property(readonly, nonatomic) BOOL isProgressiveMentionalizing;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

