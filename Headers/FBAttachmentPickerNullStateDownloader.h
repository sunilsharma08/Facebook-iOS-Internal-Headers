//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAttachmentPickerInputData, FBUserSession, NSArray;
@protocol FBAttachmentPickerNullStateDownloaderDelegate;

@interface FBAttachmentPickerNullStateDownloader : NSObject
{
    FBUserSession *_session;
    unsigned int _embedsType;
    FBAttachmentPickerInputData *_inputData;
    NSArray *_edges;
    unsigned int _suggestionCount;
    BOOL _loading;
    id <FBAttachmentPickerNullStateDownloaderDelegate> _delegate;
}

@property(readonly, nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <FBAttachmentPickerNullStateDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_graphQLQuery;
- (void)load;
- (id)initWithSession:(id)arg1 embedsType:(unsigned int)arg2 inputData:(id)arg3;

@end

