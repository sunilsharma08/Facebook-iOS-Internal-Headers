//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableURLRequest, NSString;

@interface FBEarlyFeedRequestInfo : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isInQE;
    NSMutableURLRequest *_request;
    NSString *_headCursor;
}

@property(readonly, nonatomic) BOOL isInQE; // @synthesize isInQE=_isInQE;
@property(readonly, copy, nonatomic) NSString *headCursor; // @synthesize headCursor=_headCursor;
@property(readonly, copy, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 headCursor:(id)arg2 isInQE:(BOOL)arg3;

@end

