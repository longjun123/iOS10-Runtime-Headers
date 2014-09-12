/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString;

@interface PKPaymentOptionGroup : NSObject  {
    NSArray *_items;
    NSString *_groupType;
    long long _indexForSelectedItem;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _selectionChangedHandler;

}

@property(retain) NSArray * items;
@property(copy) NSString * groupType;
@property(readonly) NSString * groupDisplayName;
@property long long indexForSelectedItem;
@property(copy) id selectionChangedHandler;


- (id)groupDisplayName;
- (void)prependGroupItems:(id)arg1 afterItem:(id)arg2;
- (id)selectionChangedHandler;
- (void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(bool)arg2;
- (void)setIndexForSelectedItem:(long long)arg1;
- (void)setSelectionChangedHandler:(id)arg1;
- (long long)indexForSelectedItem;
- (id)groupType;
- (void)setGroupType:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)init;
- (void)dealloc;

@end