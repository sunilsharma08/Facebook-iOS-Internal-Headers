//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class RCTFPSGraph;

@interface RCTPerfStats : NSObject
{
    RCTFPSGraph *_jsGraph;
    RCTFPSGraph *_uiGraph;
}

@property(retain, nonatomic) RCTFPSGraph *uiGraph; // @synthesize uiGraph=_uiGraph;
@property(retain, nonatomic) RCTFPSGraph *jsGraph; // @synthesize jsGraph=_jsGraph;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end

