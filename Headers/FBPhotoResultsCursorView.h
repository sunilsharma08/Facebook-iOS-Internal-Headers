//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface FBPhotoResultsCursorView : UIView
{
    UILabel *_infoLabel;
    UIImageView *_clockImageView;
    NSString *_cursorInfo;
}

@property(copy, nonatomic) NSString *cursorInfo; // @synthesize cursorInfo=_cursorInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

