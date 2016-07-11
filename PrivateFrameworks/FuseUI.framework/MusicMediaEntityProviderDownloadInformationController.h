/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaEntityProviderDownloadInformationController : MusicEntityProviderDownloadInformationController <MPStoreDownloadManagerObserver> {
    unsigned long long  _keepLocalEntityCount;
    MusicMediaEntityProvider * _mediaEntityProvider;
    unsigned long long  _nonPurgeableEntityCount;
    NSObject<OS_dispatch_queue> * _processingSerialQueue;
    NSArray * _relevantActiveDownloads;
    bool  _shouldUseDetailedDownloadProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MusicMediaEntityProvider *mediaEntityProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginGeneratingDownloadInformationChanges;
- (void)_endGeneratingDownloadInformationChanges;
- (void)_mediaEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_reloadMediaDownloadInformation;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (id)init;
- (id)initWithMediaEntityProvider:(id)arg1;
- (id)mediaEntityProvider;

@end