//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthenticationViewConfiguration-Protocol.h"

@class FBGatekeeper, FBImageDownloader, NSString;

@interface FBWildeAuthenticationViewConfiguration : NSObject <FBAuthenticationViewConfiguration>
{
    FBImageDownloader *_imageDownloader;
    FBGatekeeper *_gatekeeper;
    BOOL _shouldSkipSSOLogin;
}

@property(nonatomic) BOOL shouldSkipSSOLogin; // @synthesize shouldSkipSSOLogin=_shouldSkipSSOLogin;
- (void).cxx_destruct;
- (id)actionSheetButtonMetrics;
- (int)preferredStatusBarStyle;
- (id)newEnterPasscodeViewToShowNumbers:(BOOL)arg1 secondaryActionText:(id)arg2;
- (id)newLogoutView;
- (id)newAuthenticationView;
- (id)init;
- (id)initWithImageDownloader:(id)arg1 gatekeeper:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

