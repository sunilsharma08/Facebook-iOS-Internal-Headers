//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBMThreadDescriptor : NSObject <NSCopying>
{
    NSString *_DEPRECATED_threadId;
    NSString *_threadFbId;
    NSString *_userIdForCanonicalThread;
}

@property(readonly, copy, nonatomic) NSString *userIdForCanonicalThread; // @synthesize userIdForCanonicalThread=_userIdForCanonicalThread;
@property(readonly, copy, nonatomic) NSString *threadFbId; // @synthesize threadFbId=_threadFbId;
@property(readonly, copy, nonatomic) NSString *DEPRECATED_threadId; // @synthesize DEPRECATED_threadId=_DEPRECATED_threadId;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initForThreadWithContact:(id)arg1;
- (id)initForCanonicalThreadWithOtherUserId:(id)arg1;
- (id)initWithThreadFbId:(id)arg1;
- (id)initWithThreadId_DEPRECATED:(id)arg1;
- (id)init;

@end

