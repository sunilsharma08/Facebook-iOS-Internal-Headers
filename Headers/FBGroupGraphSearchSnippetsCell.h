//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, NSAttributedString, UILabel;

@interface FBGroupGraphSearchSnippetsCell : UICollectionViewCell
{
    CALayer *_cardBackgroundLayer;
    UILabel *_bodyLabel;
    NSAttributedString *_graphSearchSnippets;
}

+ (float)desiredHeightWithAttributedString:(id)arg1 withWidth:(float)arg2;
@property(copy, nonatomic) NSAttributedString *graphSearchSnippets; // @synthesize graphSearchSnippets=_graphSearchSnippets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initialSetup;

@end

