//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIActivityIndicatorView, UIView;

@interface FBFullscreenSpinnerController : NSObject
{
    UIActivityIndicatorView *_spinner;
    UIView *_view;
    BOOL _hidden;
}

+ (id)showActivityIndicatorOverlayInWindow:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hide;
- (void)fadeOut;
- (id)initWithWindow:(id)arg1;
- (id)init;

@end

