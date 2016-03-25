//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBComposerPostChannelAppendedContent;

@interface FBComposerChannelsPostingSummary : FBValueObject <NSCopying, NSCoding>
{
    BOOL _allowContributors;
    FBComposerPostChannelAppendedContent *_appendedContent;
    unsigned int _originalContributorsState;
}

@property(readonly, nonatomic) BOOL allowContributors; // @synthesize allowContributors=_allowContributors;
@property(readonly, nonatomic) unsigned int originalContributorsState; // @synthesize originalContributorsState=_originalContributorsState;
@property(readonly, copy, nonatomic) FBComposerPostChannelAppendedContent *appendedContent; // @synthesize appendedContent=_appendedContent;
- (void).cxx_destruct;
- (id)initWithAppendedContent:(id)arg1 originalContributorsState:(unsigned int)arg2 allowContributors:(BOOL)arg3;

@end

