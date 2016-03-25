//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBLanguageNameFormatFactory, FBMParticipantNameFormatter, FBMThreadParticipantFilter;
@protocol FBMThreadNameFormatterDelegate;

@interface FBMThreadNameFormatter : NSObject
{
    id <FBMThreadNameFormatterDelegate> _delegate;
    FBLanguageNameFormatFactory *_languageNameFormatFactory;
    FBMParticipantNameFormatter *_participantNameFormatter;
    FBMThreadParticipantFilter *_threadParticipantFilter;
}

+ (id)formatterWithLanguageNameFormatFactory:(id)arg1 participantNameFormatter:(id)arg2 threadParticipantFilter:(id)arg3;
@property(retain, nonatomic) FBMThreadParticipantFilter *threadParticipantFilter; // @synthesize threadParticipantFilter=_threadParticipantFilter;
@property(retain, nonatomic) FBMParticipantNameFormatter *participantNameFormatter; // @synthesize participantNameFormatter=_participantNameFormatter;
@property(retain, nonatomic) FBLanguageNameFormatFactory *languageNameFormatFactory; // @synthesize languageNameFormatFactory=_languageNameFormatFactory;
@property(nonatomic) __weak id <FBMThreadNameFormatterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)unconstrainedDisplayNameForThread:(id)arg1;
- (id)unconstrainedDisplayNameForThread:(id)arg1 withCurrentUser:(id)arg2 withOtherUsers:(id)arg3;
- (id)displayNameForThread:(id)arg1 withFont:(id)arg2 constrainedToSize:(struct CGSize)arg3 allowCustomName:(BOOL)arg4;
- (id)displayNameForThread:(id)arg1 withFont:(id)arg2 constrainedToSize:(struct CGSize)arg3;
- (id)displayNameForThread:(id)arg1 withCurrentUser:(id)arg2 withOtherUsers:(id)arg3 withFont:(id)arg4 constrainedToSize:(struct CGSize)arg5 allowCustomName:(BOOL)arg6;
- (id)_composeThreadName:(id)arg1 withCurrentUser:(id)arg2 withOtherUsers:(id)arg3 withFont:(id)arg4 constrainedToSize:(struct CGSize)arg5 allowCustomName:(BOOL)arg6;

@end

