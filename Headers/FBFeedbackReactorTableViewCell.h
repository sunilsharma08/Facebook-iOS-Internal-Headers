//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAvatarWithSecondaryActionsTableViewCell_DEPRECATED.h"

@class UIImageView;

@interface FBFeedbackReactorTableViewCell : FBAvatarWithSecondaryActionsTableViewCell_DEPRECATED
{
    int _reactionType;
    UIImageView *_reactionIconView;
}

@property(retain, nonatomic) UIImageView *reactionIconView; // @synthesize reactionIconView=_reactionIconView;
@property(nonatomic) int reactionType; // @synthesize reactionType=_reactionType;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)actionsView;

@end

