//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface FBStoryPermalinkFooterView : UIView
{
    CALayer *_footerImageLayer;
    float _footerImageHeight;
    struct UIEdgeInsets _footerImageInsets;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)storyPermalinkFooterViewForTableWidth:(float)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 edgeInsets:(struct UIEdgeInsets)arg2;

@end

