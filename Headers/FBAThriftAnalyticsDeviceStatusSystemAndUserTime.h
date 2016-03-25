//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding-Protocol.h"
#import "TBase-Protocol.h"

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusSystemAndUserTime : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_systemTimeInMilliseconds;
    long long __thrift_userTimeInMilliseconds;
    BOOL __thrift_systemTimeInMilliseconds_set;
    BOOL __thrift_userTimeInMilliseconds_set;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetUserTimeInMilliseconds;
- (BOOL)userTimeInMillisecondsIsSet;
@property(nonatomic) long long userTimeInMilliseconds;
- (void)unsetSystemTimeInMilliseconds;
- (BOOL)systemTimeInMillisecondsIsSet;
@property(nonatomic) long long systemTimeInMilliseconds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemTimeInMilliseconds:(long long)arg1 userTimeInMilliseconds:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

