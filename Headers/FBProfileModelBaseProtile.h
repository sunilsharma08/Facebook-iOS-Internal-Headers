//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBProfileModelBaseProtile : FBValueObject <NSCopying>
{
    BOOL _shouldShowFooter;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
    NSString *_disclosureTitle;
    NSString *_headerIconUri;
    struct CGSize _headerIconSize;
}

@property(readonly, nonatomic) BOOL shouldShowFooter; // @synthesize shouldShowFooter=_shouldShowFooter;
@property(readonly, nonatomic) struct CGSize headerIconSize; // @synthesize headerIconSize=_headerIconSize;
@property(readonly, copy, nonatomic) NSString *headerIconUri; // @synthesize headerIconUri=_headerIconUri;
@property(readonly, copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(readonly, copy, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(readonly, copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (id)initWithHeaderTitle:(id)arg1 headerSubtitle:(id)arg2 disclosureTitle:(id)arg3 headerIconUri:(id)arg4 headerIconSize:(struct CGSize)arg5 shouldShowFooter:(BOOL)arg6;

@end

