//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerCommitedMentionsProvider-Protocol.h"
#import "FBComposerMentionDecoratorDelegate-Protocol.h"

@class FBComposerMentionDecorator, FBMentionsTaggingCollectionController, FBScenePath, FBSearchTableViewData, FBUserSession, NSArray, NSSet, NSString, UITableView, UITextView;
@protocol FBAvatarProtocol, FBCommentComposerMentionControllerDelegate, FBFeedbackTargetProtocol;

@interface FBCommentComposerMentionController : NSObject <FBComposerMentionDecoratorDelegate, FBComposerCommitedMentionsProvider>
{
    FBScenePath *_scenePath;
    FBComposerMentionDecorator *_lazy_mentionDecorator;
    FBMentionsTaggingCollectionController *_lazy_mentionCollectionController;
    id <FBCommentComposerMentionControllerDelegate> _delegate;
    UITableView *_mentionPicker;
    UITextView *_textView;
    NSSet *_taggableCollections;
    FBUserSession *_session;
    id <FBAvatarProtocol> _commentAuthor;
    id <FBFeedbackTargetProtocol> _feedbackTarget;
    FBSearchTableViewData *_mentions;
}

@property(retain, nonatomic) FBSearchTableViewData *mentions; // @synthesize mentions=_mentions;
@property(retain, nonatomic) id <FBFeedbackTargetProtocol> feedbackTarget; // @synthesize feedbackTarget=_feedbackTarget;
@property(retain, nonatomic) id <FBAvatarProtocol> commentAuthor; // @synthesize commentAuthor=_commentAuthor;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSSet *taggableCollections; // @synthesize taggableCollections=_taggableCollections;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UITableView *mentionPicker; // @synthesize mentionPicker=_mentionPicker;
@property(nonatomic) __weak id <FBCommentComposerMentionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBMentionsTaggingCollectionController *mentionCollectionController; // @synthesize mentionCollectionController=_lazy_mentionCollectionController;
@property(retain, nonatomic) FBComposerMentionDecorator *mentionDecorator; // @synthesize mentionDecorator=_lazy_mentionDecorator;
- (void).cxx_destruct;
- (void)_setMentionPickerHidden:(BOOL)arg1;
- (void)_updateMentionPicker;
- (void)setMentionPicker:(id)arg1;
- (void)_textViewDidChange:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)mentionDecoratorCommitedMentionsDidChange:(id)arg1;
- (void)mentionDecoratordidAbortProgressiveMentionalizing:(id)arg1;
- (void)mentionDecorator:(id)arg1 selectedMention:(id)arg2 inTableView:(id)arg3;
- (void)mentionDecoratorDidFinishFetchingResults:(id)arg1;
- (void)mentionDecorator:(id)arg1 hasSuggestedMentions:(id)arg2;
- (float)heightForNumberOfRowsWithContent:(unsigned int)arg1;
- (void)reset;
- (BOOL)shouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
@property(copy, nonatomic) NSArray *commitedMentions;
@property(nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // @dynamic syncingEnabled;
- (void)setDelegate:(id)arg1 mentionPicker:(id)arg2 textView:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 commentAuthor:(id)arg2 feedbackTarget:(id)arg3 scenePath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

