//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPageCTAAdminInfoFetcher, NSArray, NSError, NSString;

@protocol FBPageCTAAdminFetcherDelegate <NSObject>
- (void)ctaAdminInfoFetcher:(FBPageCTAAdminInfoFetcher *)arg1 didFailFetchWithError:(NSError *)arg2;
- (void)ctaAdminInfoFetcher:(FBPageCTAAdminInfoFetcher *)arg1 didFetchCTAItems:(NSArray *)arg2 createPrompt:(NSString *)arg3;
@end

