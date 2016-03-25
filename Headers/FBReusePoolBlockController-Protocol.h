//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol FBReuseInstanceProvider;

@protocol FBReusePoolBlockController <NSObject>
+ (unsigned int)maximumCapacity;
+ (void)prepareInstanceForReuse:(id)arg1;
+ (id)generateReuseInstance;
+ (Class)reuseClass;
@property(nonatomic) __weak id <FBReuseInstanceProvider> reuseProvider;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier;
- (void)didReclaimInstance;

@optional
+ (unsigned int)initialCapacity;
@end

