//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBFacer : NSObject
{
    struct DetectorImpl *_detector;
    int _syncMode;
    unsigned int _facerType;
}

+ (id)facerOfType:(unsigned int)arg1 options:(id)arg2;
- (id)featuresInImage:(struct CGImage *)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1 options:(id)arg2;
- (id)init;

@end

