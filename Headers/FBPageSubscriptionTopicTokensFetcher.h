//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSimpleNetworkerRequest, FBUserSession, NSPredicate, NSString;
@protocol FBPageSubscriptionTopicTokensFetcherDelegate;

@interface FBPageSubscriptionTopicTokensFetcher : NSObject
{
    FBSimpleNetworkerRequest *_searchRequest;
    FBUserSession *_session;
    NSString *_currentQuery;
    NSPredicate *_filter;
    id <FBPageSubscriptionTopicTokensFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPageSubscriptionTopicTokensFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSPredicate *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *currentQuery; // @synthesize currentQuery=_currentQuery;
- (void).cxx_destruct;
- (void)_handleFailure:(id)arg1;
- (void)_handleSearchResult:(id)arg1;
- (id)_parseResults:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

