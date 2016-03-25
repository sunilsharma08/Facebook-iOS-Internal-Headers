//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLDownloadRequest.h"

@class FBUserSession, NSArray, NSString;

@interface FBProtilesEntityCardTimelineHeaderBaseMultiPersonDownloadRequest : FBGraphQLDownloadRequest
{
    FBUserSession *_session;
    NSArray *_targetIDs;
    NSString *_coverWidth;
    NSString *_coverHeight;
    float _contextItemImageSize;
}

@property(nonatomic) float contextItemImageSize; // @synthesize contextItemImageSize=_contextItemImageSize;
@property(copy, nonatomic) NSString *coverHeight; // @synthesize coverHeight=_coverHeight;
@property(copy, nonatomic) NSString *coverWidth; // @synthesize coverWidth=_coverWidth;
@property(copy, nonatomic) NSArray *targetIDs; // @synthesize targetIDs=_targetIDs;
- (void).cxx_destruct;
- (id)initWithTargetIDs:(id)arg1 coverWidth:(id)arg2 coverHeight:(id)arg3 contextItemImageSize:(float)arg4 callbackPerformer:(id)arg5 session:(id)arg6;
- (id)newQuery;
- (id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2;

@end

