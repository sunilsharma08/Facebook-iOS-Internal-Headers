//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSMutableArray, NSString;
@protocol FBProfileFriendListHelper, FBProfileFriendListStreamDelegate, FBServiceTransactionMutating;

@interface FBProfileFriendListStream : NSObject
{
    FBUserSession *_session;
    NSString *_sourceID;
    id <FBProfileFriendListHelper> _helper;
    id <FBServiceTransactionMutating> _detailListToken;
    id <FBServiceTransactionMutating> _fullListToken;
    unsigned int _totalFriends;
    unsigned int _numDownloadedPages;
    unsigned int _maxPageForDownload;
    NSMutableArray *_indexPathArray;
    id <FBProfileFriendListStreamDelegate> _delegate;
}

@property(retain, nonatomic) id <FBProfileFriendListStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loadDetailedListFinishedWithResponse:(id)arg1 andError:(id)arg2;
- (void)_loadFullListFinishedWithResponse:(id)arg1 andError:(id)arg2;
- (void)_loadFullList;
- (void)_resetDetailListToken;
- (void)_resetFullListToken;
- (id)loadDetailedInformationForGraphQLIDs:(id)arg1;
- (void)reload;
- (void)dealloc;
- (id)initWithSession:(id)arg1 sourceID:(id)arg2 helper:(id)arg3;

@end

