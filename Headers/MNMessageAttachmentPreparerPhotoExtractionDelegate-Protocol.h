//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MNPhotoViewModel, NSURL;
@protocol OutgoingAttachment;

@protocol MNMessageAttachmentPreparerPhotoExtractionDelegate <NSObject>
- (unsigned int)getSendQualityForImageAttachment:(id <OutgoingAttachment>)arg1;
- (NSURL *)getAnimatedExternalURLForImageAttachment:(id <OutgoingAttachment>)arg1;
- (int)getPhotoAttachmentTypeForImageAttachment:(id <OutgoingAttachment>)arg1;
- (MNPhotoViewModel *)getPhotoViewModelForImageAttachment:(id <OutgoingAttachment>)arg1;
@end

