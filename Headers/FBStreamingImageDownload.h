//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBImageDownload.h"

@interface FBStreamingImageDownload : FBImageDownload
{
    unsigned int _nextFlagToNotify;
    unsigned int _nextFlagToDecode;
    unsigned int _desiredImageFlag;
    unsigned int _imageFlagsToBeNotified;
    CDUnknownBlockType _streamingBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType streamingBlock; // @synthesize streamingBlock=_streamingBlock;
@property(readonly, nonatomic) unsigned int imageFlagsToBeNotified; // @synthesize imageFlagsToBeNotified=_imageFlagsToBeNotified;
@property(readonly, nonatomic) unsigned int desiredImageFlag; // @synthesize desiredImageFlag=_desiredImageFlag;
- (void).cxx_destruct;
- (id)finalCachedImageToBeUsedFromCachedImage:(id)arg1;
- (unsigned int)_nextImageFlagInImageFlagsToBeNotifiedLargerThan:(unsigned int)arg1;
- (void)_updateNextFlagToNotify:(unsigned int)arg1;
- (BOOL)_shouldNotifyAboutImage:(id)arg1;
- (BOOL)decodeCachedImageIfNeeded:(id)arg1;
- (void)completeAndCleanupWithImage:(id)arg1 type:(unsigned int)arg2 error:(id)arg3 delegate:(id)arg4;
- (void)cleanUpAfterCompletionOrCancelation;
- (id)initWithURL:(id)arg1 scenePath:(id)arg2 priority:(int)arg3 options:(unsigned int)arg4 desiredImageFlag:(unsigned int)arg5 imageFlagsToBeNotified:(unsigned int)arg6 callPath:(id)arg7 callbackQueue:(id)arg8 streamingBlock:(CDUnknownBlockType)arg9;

@end

