//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, CKComponentHostingView, FBFeedComponentToolbox;

@interface FBGroupFeedForSaleIslandViewCell : UICollectionViewCell
{
    CKComponentHostingView *_hostingView;
    CALayer *_cardBackgroundLayer;
    FBFeedComponentToolbox *_toolbox;
}

+ (float)desiredHeightWithStories:(id)arg1 session:(id)arg2;
+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateIslandStoriesFromGroup:(id)arg1 toolbox:(id)arg2;

@end

