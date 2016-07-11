/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexItem : NSObject {
    NSData * _bodyData;
    bool  _hasCompleteBodyData;
    NSString * _identifier;
    MFMailMessage * _message;
}

@property (nonatomic, retain) NSData *bodyData;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic) bool hasCompleteBodyData;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) MFMailMessage *message;
@property (nonatomic, readonly, retain) CSSearchableItem *searchableItem;

+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2;
+ (id)transactionAttributeKey;

- (bool)_isMessagePartOfExistingThreadWithHeaders:(id)arg1;
- (bool)_shouldAutoDownloadAttachment:(id)arg1;
- (id)bodyData;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)domainIdentifier;
- (id)fetchIndexableAttachments;
- (bool)hasCompleteBodyData;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2;
- (id)message;
- (id)searchableItem;
- (id)searchableItemWithClientState:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setHasCompleteBodyData:(bool)arg1;
- (bool)shouldExcludeFromIndex;

@end