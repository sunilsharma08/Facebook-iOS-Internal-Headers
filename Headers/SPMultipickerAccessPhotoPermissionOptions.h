//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPAccessPhotoPermissionOptions-Protocol.h"

@class NSString;

@interface SPMultipickerAccessPhotoPermissionOptions : NSObject <SPAccessPhotoPermissionOptions>
{
    BOOL _isDisplayedCondensed;
    BOOL _onDarkBackground;
    int _viewStyle;
}

@property(nonatomic) BOOL onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(nonatomic) int viewStyle; // @synthesize viewStyle=_viewStyle;
- (BOOL)isDisplayedCondensed;
- (id)descriptionWhenUndetermined;
- (id)descriptionWhenDenied;
- (id)headerString;
- (int)style;
- (id)initWithStyle:(int)arg1 onDarkBackground:(BOOL)arg2 isDisplayedCondensed:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

