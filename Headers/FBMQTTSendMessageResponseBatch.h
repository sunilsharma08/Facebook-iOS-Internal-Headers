//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "TBase-Protocol.h"

@class NSMutableArray, NSString;

@interface FBMQTTSendMessageResponseBatch : NSObject <TBase, NSCoding>
{
    long long __thrift_batchId;
    NSString *__thrift_fbTraceMeta;
    NSMutableArray *__thrift_responses;
    BOOL __thrift_supported;
    BOOL __thrift_batchId_set;
    BOOL __thrift_fbTraceMeta_set;
    BOOL __thrift_responses_set;
    BOOL __thrift_supported_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSupported;
- (BOOL)supportedIsSet;
@property(nonatomic) BOOL supported;
- (void)unsetResponses;
- (BOOL)responsesIsSet;
@property(retain, nonatomic) NSMutableArray *responses;
- (void)unsetFbTraceMeta;
- (BOOL)fbTraceMetaIsSet;
@property(retain, nonatomic) NSString *fbTraceMeta;
- (void)unsetBatchId;
- (BOOL)batchIdIsSet;
@property(nonatomic) long long batchId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBatchId:(long long)arg1 fbTraceMeta:(id)arg2 responses:(id)arg3 supported:(BOOL)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

