//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface FBComposerPostContentTypePublishButtonTextBehaviour : FBValueObject <NSCopying, NSCoding>
{
    NSString *_titleForPublishingPost;
    NSString *_titleForSchedulingPost;
    NSString *_titleForBackdatePost;
    NSString *_titleForDraftPost;
}

@property(readonly, copy, nonatomic) NSString *titleForDraftPost; // @synthesize titleForDraftPost=_titleForDraftPost;
@property(readonly, copy, nonatomic) NSString *titleForBackdatePost; // @synthesize titleForBackdatePost=_titleForBackdatePost;
@property(readonly, copy, nonatomic) NSString *titleForSchedulingPost; // @synthesize titleForSchedulingPost=_titleForSchedulingPost;
@property(readonly, copy, nonatomic) NSString *titleForPublishingPost; // @synthesize titleForPublishingPost=_titleForPublishingPost;
- (void).cxx_destruct;
- (id)initWithTitleForPublishingPost:(id)arg1 titleForSchedulingPost:(id)arg2 titleForBackdatePost:(id)arg3 titleForDraftPost:(id)arg4;

@end

