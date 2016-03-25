//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "FBClassProvidable-Protocol.h"

@class NSString, UIButton, UIImage, UIImageView;

@interface ZREmbeddedMapInterstitial : UIControl <FBClassProvidable>
{
    UIImage *_backgroundImage;
    UIButton *_loadMapButton;
    UIImageView *_backgroundView;
}

- (void)_loadMapPressed:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

