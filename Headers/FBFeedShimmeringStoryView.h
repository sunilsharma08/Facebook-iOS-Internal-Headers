//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBShimmeringView, UIImageView;

@interface FBFeedShimmeringStoryView : UIView
{
    FBShimmeringView *_shimmeringView;
    UIImageView *_shimmeringImageView;
    BOOL _edgeToEdge;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupShimmer;
@property(nonatomic, getter=isShimmering) BOOL shimmering;
- (id)initWithFrame:(struct CGRect)arg1 edgeToEdge:(BOOL)arg2;

@end

