//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSString;
@protocol FBPageCTAAdminFetcherDelegate;

@interface FBPageCTAAdminInfoFetcher : NSObject
{
    NSString *_pageId;
    FBUserSession *_userSession;
    id <FBPageCTAAdminFetcherDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleDownloadedResponse:(id)arg1 error:(id)arg2;
- (void)loadPageCreateCTAAdminInfo;
- (id)initWithSession:(id)arg1 pageId:(id)arg2 withDelegate:(id)arg3;

@end

