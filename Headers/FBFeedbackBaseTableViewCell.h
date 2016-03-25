//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FBDisabling-Protocol.h"

@class FBUserSession, NSString, UIView;

@interface FBFeedbackBaseTableViewCell : UITableViewCell <FBDisabling>
{
    FBUserSession *_session;
    UIView *_disabledOverlayView;
    UIView *_topBorderView;
    BOOL _disabled;
    BOOL _showTopBorder;
    UIView *_contentContainerView;
    unsigned int _feedbackContainerType;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)feedbackViewCellBackgroundViewWithCapInsets:(struct UIEdgeInsets)arg1;
+ (struct UIEdgeInsets)contentInsetForFeedbackContainerType:(unsigned int)arg1;
+ (id)reuseIdentifier;
+ (void)initialize;
@property(nonatomic) BOOL showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) unsigned int feedbackContainerType; // @synthesize feedbackContainerType=_feedbackContainerType;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateDisabledState;
- (id)_topBorderColorForContainerType:(unsigned int)arg1;
- (id)initWithFeedbackContainerType:(unsigned int)arg1 edgeInsets:(struct UIEdgeInsets)arg2 reusable:(BOOL)arg3 session:(id)arg4;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

