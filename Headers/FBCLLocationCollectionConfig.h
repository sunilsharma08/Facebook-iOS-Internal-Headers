//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface FBCLLocationCollectionConfig : NSObject <NSCopying>
{
    double _accuracyLevel;
    double _acquisitionTimeOut;
    double _minimumUpdateInterval;
}

@property(nonatomic) double minimumUpdateInterval; // @synthesize minimumUpdateInterval=_minimumUpdateInterval;
@property(nonatomic) double acquisitionTimeOut; // @synthesize acquisitionTimeOut=_acquisitionTimeOut;
@property(nonatomic) double accuracyLevel; // @synthesize accuracyLevel=_accuracyLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

