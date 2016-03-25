//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface FBEventLineupEntryViewModel : FBValueObject <NSCopying>
{
    NSString *_artistFBID;
    NSString *_artistName;
    NSString *_artistSubtitle;
    NSURL *_profileImageURL;
}

@property(readonly, copy, nonatomic) NSURL *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
@property(readonly, copy, nonatomic) NSString *artistSubtitle; // @synthesize artistSubtitle=_artistSubtitle;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *artistFBID; // @synthesize artistFBID=_artistFBID;
- (void).cxx_destruct;
- (id)initWithArtistFBID:(id)arg1 artistName:(id)arg2 artistSubtitle:(id)arg3 profileImageURL:(id)arg4;

@end

