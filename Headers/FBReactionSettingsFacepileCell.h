//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBImageDownloader, UIControl, UIView;
@protocol FBReactionSettingsFacepileDelegate;

@interface FBReactionSettingsFacepileCell : UITableViewCell
{
    UIView *_borderBottom;
    struct UIEdgeInsets _contentInsets;
    UIControl *_scrollView;
    FBImageDownloader *_imageDownloader;
    id <FBReactionSettingsFacepileDelegate> _delegate;
}

@property(nonatomic) __weak id <FBReactionSettingsFacepileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_scrollViewTapped;
- (id)initWithProfileURIs:(id)arg1 reuseIdentifier:(id)arg2 contentInsets:(struct UIEdgeInsets)arg3 imageDownloader:(id)arg4;

@end

