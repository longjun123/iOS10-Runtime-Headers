/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSessionHandle : NSObject {
    <NFSession> * _sessionHandle;
}

+ (id)paymentSessionHandleWithInternalSessionHandle:(id)arg1;

- (void).cxx_destruct;
- (id)initWithInternalSessionHandle:(id)arg1;
- (void)invalidateSession;
- (bool)isFirstInQueue;

@end