//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBDetailComponentController, UIImageView;

@interface FBDetailComponentCell : UITableViewCell
{
    UIImageView *_componentMaskImageView;
    BOOL _widthSensitiveLayout;
    FBDetailComponentController *_componentController;
    struct UIEdgeInsets _contentEdgeInset;
}

+ (struct UIEdgeInsets)componentMaskImageViewBoundsInset;
@property(nonatomic) __weak FBDetailComponentController *componentController; // @synthesize componentController=_componentController;
@property(readonly, nonatomic) struct UIEdgeInsets contentEdgeInset; // @synthesize contentEdgeInset=_contentEdgeInset;
@property(nonatomic) BOOL widthSensitiveLayout; // @synthesize widthSensitiveLayout=_widthSensitiveLayout;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)interiorColor;
- (id)borderImage;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

