//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBRichStoryEntityVideoProtocol-Protocol.h"

@class NSNumber, NSString;
@protocol FBRichStoryEntityImageProtocol;

@interface FBRichStoryEntityVideo : NSObject <FBRichStoryEntityVideoProtocol>
{
    NSString *_hdURLString;
    id <FBRichStoryEntityImageProtocol> _previewImage;
    NSString *_sdURLString;
    NSNumber *_height;
    NSNumber *_width;
    NSString *_videoID;
    NSNumber *_bitrate;
    NSNumber *_atomSize;
    NSNumber *_hdBitrate;
    NSNumber *_hdAtomSize;
    int _playableDurationValue;
}

+ (id)videoWithHDURLString:(id)arg1 previewImage:(id)arg2 sdURLString:(id)arg3 height:(id)arg4 width:(id)arg5 videoID:(id)arg6 bitrate:(id)arg7 atomSize:(id)arg8 hdBitrate:(id)arg9 hdAtomSize:(id)arg10 playableDurationValue:(int)arg11;
@property(nonatomic) int playableDurationValue; // @synthesize playableDurationValue=_playableDurationValue;
@property(copy, nonatomic) NSNumber *hdAtomSize; // @synthesize hdAtomSize=_hdAtomSize;
@property(copy, nonatomic) NSNumber *hdBitrate; // @synthesize hdBitrate=_hdBitrate;
@property(copy, nonatomic) NSNumber *atomSize; // @synthesize atomSize=_atomSize;
@property(copy, nonatomic) NSNumber *bitrate; // @synthesize bitrate=_bitrate;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *sdURLString; // @synthesize sdURLString=_sdURLString;
@property(retain, nonatomic) id <FBRichStoryEntityImageProtocol> previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) NSString *hdURLString; // @synthesize hdURLString=_hdURLString;
- (void).cxx_destruct;
- (id)initWithHDURLString:(id)arg1 previewImage:(id)arg2 sdURLString:(id)arg3 height:(id)arg4 width:(id)arg5 videoID:(id)arg6 bitrate:(id)arg7 atomSize:(id)arg8 hdBitrate:(id)arg9 hdAtomSize:(id)arg10 playableDurationValue:(int)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

