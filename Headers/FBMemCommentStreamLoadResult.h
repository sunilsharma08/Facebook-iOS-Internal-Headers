//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBStreamLoadResult.h"

@class FBMemFeedback, FBMemTopLevelCommentsConnection;

@interface FBMemCommentStreamLoadResult : FBStreamLoadResult
{
    BOOL _shouldResetPagingInfo;
    BOOL _gapWasDetected;
    FBMemFeedback *_feedback;
    FBMemTopLevelCommentsConnection *_commentSequence;
}

@property(readonly, nonatomic) FBMemTopLevelCommentsConnection *commentSequence; // @synthesize commentSequence=_commentSequence;
@property(readonly, nonatomic) FBMemFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) BOOL gapWasDetected; // @synthesize gapWasDetected=_gapWasDetected;
@property(nonatomic) BOOL shouldResetPagingInfo; // @synthesize shouldResetPagingInfo=_shouldResetPagingInfo;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasPreviousPage:(BOOL)arg3 hasNextPage:(BOOL)arg4 feedback:(id)arg5 commentSequence:(id)arg6;

@end

