//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PATextMetricTuple : NSObject
{
    unsigned int _deviceType;
    struct FBTextMetrics _textMetrics;
}

@property(nonatomic) struct FBTextMetrics textMetrics; // @synthesize textMetrics=_textMetrics;
@property(nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDeviceType:(unsigned int)arg1 metrics:(struct FBTextMetrics)arg2;

@end

