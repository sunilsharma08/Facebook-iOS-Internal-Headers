//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBCommentDetailView-Protocol.h"

@class FBMemComment, NSError, NSString;
@protocol FBCommentDetailViewDelegate;

@interface FBCommentCellPostingStateDetailView : UILabel <FBAccessibilityInvalidationEventsListener, FBCommentDetailView>
{
    FBMemComment *_comment;
    unsigned int _feedbackContainerType;
    NSError *_postingError;
    id <FBCommentDetailViewDelegate> _delegate;
}

+ (float)heightForWidth:(float)arg1 comment:(id)arg2 postingError:(id)arg3;
@property(nonatomic) __weak id <FBCommentDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *postingError; // @synthesize postingError=_postingError;
@property(readonly, nonatomic) unsigned int feedbackContainerType; // @synthesize feedbackContainerType=_feedbackContainerType;
@property(retain, nonatomic) FBMemComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)_updatePostingStateLabel;
- (void)didReceiveAccessibilityInvalidation;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFeedbackContainerType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

