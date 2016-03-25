//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface FBVideoExportConfig : FBValueObject <NSCopying>
{
    BOOL _performStandardization;
    NSDictionary *_videoCompressionSettings;
    NSDictionary *_audioCompressionSettings;
    unsigned int _maxAvgVideoBitrateSD;
    unsigned int _maxAvgVideoBitrateHD;
    unsigned int _preferredResolution;
}

@property(readonly, nonatomic) unsigned int preferredResolution; // @synthesize preferredResolution=_preferredResolution;
@property(readonly, nonatomic) unsigned int maxAvgVideoBitrateHD; // @synthesize maxAvgVideoBitrateHD=_maxAvgVideoBitrateHD;
@property(readonly, nonatomic) unsigned int maxAvgVideoBitrateSD; // @synthesize maxAvgVideoBitrateSD=_maxAvgVideoBitrateSD;
@property(readonly, copy, nonatomic) NSDictionary *audioCompressionSettings; // @synthesize audioCompressionSettings=_audioCompressionSettings;
@property(readonly, copy, nonatomic) NSDictionary *videoCompressionSettings; // @synthesize videoCompressionSettings=_videoCompressionSettings;
@property(readonly, nonatomic) BOOL performStandardization; // @synthesize performStandardization=_performStandardization;
- (void).cxx_destruct;
- (id)initWithPerformStandardization:(BOOL)arg1 videoCompressionSettings:(id)arg2 audioCompressionSettings:(id)arg3 maxAvgVideoBitrateSD:(unsigned int)arg4 maxAvgVideoBitrateHD:(unsigned int)arg5 preferredResolution:(unsigned int)arg6;

@end

