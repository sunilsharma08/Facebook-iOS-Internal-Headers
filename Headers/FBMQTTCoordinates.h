//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "TBase-Protocol.h"

@class NSString;

@interface FBMQTTCoordinates : NSObject <TBase, NSCoding>
{
    NSString *__thrift_latitude;
    NSString *__thrift_longitude;
    NSString *__thrift_accuracy;
    BOOL __thrift_latitude_set;
    BOOL __thrift_longitude_set;
    BOOL __thrift_accuracy_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetAccuracy;
- (BOOL)accuracyIsSet;
@property(retain, nonatomic) NSString *accuracy;
- (void)unsetLongitude;
- (BOOL)longitudeIsSet;
@property(retain, nonatomic) NSString *longitude;
- (void)unsetLatitude;
- (BOOL)latitudeIsSet;
@property(retain, nonatomic) NSString *latitude;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 accuracy:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

