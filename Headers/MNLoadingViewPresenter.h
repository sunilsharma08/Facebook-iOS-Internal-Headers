//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MNActivityIndicatorViewController, UIWindow;

@interface MNLoadingViewPresenter : NSObject
{
    UIWindow *_window;
    MNActivityIndicatorViewController *_loadingViewController;
}

- (void).cxx_destruct;
- (void)_layoutInRect:(struct CGRect)arg1;
- (void)_loadViewIfNecessary;
- (void)dismiss;
- (void)presentInRect:(struct CGRect)arg1;

@end

