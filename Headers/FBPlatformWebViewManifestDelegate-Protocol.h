//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBPlatformWebViewActionManifest, FBPlatformWebViewManifest, NSError;

@protocol FBPlatformWebViewManifestDelegate
- (void)platformWebViewManifest:(FBPlatformWebViewManifest *)arg1 didFailRefreshForActionManifest:(FBPlatformWebViewActionManifest *)arg2 withError:(NSError *)arg3;
- (void)platformWebViewManifest:(FBPlatformWebViewManifest *)arg1 didRefreshActionManifest:(FBPlatformWebViewActionManifest *)arg2;
- (void)platformWebViewManifest:(FBPlatformWebViewManifest *)arg1 didFailRefreshWithError:(NSError *)arg2;
- (void)platformWebViewManifestDidSuccessfullyRefresh:(FBPlatformWebViewManifest *)arg1;
@end

