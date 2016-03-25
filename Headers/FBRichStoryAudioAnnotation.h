//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBRichStoryAnnotation.h"

@class NSString, NSURL;

@interface FBRichStoryAudioAnnotation : FBRichStoryAnnotation
{
    NSURL *_audioURL;
    NSString *_title;
    unsigned int _playMode;
}

+ (id)annotationWithAudioURL:(id)arg1 title:(id)arg2 playMode:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int playMode; // @synthesize playMode=_playMode;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAudioURL:(id)arg1 title:(id)arg2 playMode:(unsigned int)arg3;

@end

