/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class <SLFacebookRemoteSessionProtocol>;

@interface SLFacebookSession : NSObject  {
    <SLFacebookRemoteSessionProtocol> *_remoteSession;
}

+ (id)sharedSession;
+ (id)_remoteInterface;

- (BOOL)uploadProfilePicture:(id)arg1 error:(id*)arg2;
- (void)revokeAllAccessTokensForDevice;
- (BOOL)uploadPost:(id)arg1;
- (void)testCall;
- (id)tokenSecretForEntitledClientWithError:(id*)arg1;
- (BOOL)sessionHasAccountAccess;
- (id)accountForEntitledClientWithError:(id*)arg1;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)uploadsInProgress:(id)arg1;
- (void)uploadPost:(id)arg1 suppressAlerts:(BOOL)arg2 withPostCompletion:(id)arg3;
- (BOOL)uploadPost:(id)arg1 forPID:(int)arg2;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)unlikeURL:(id)arg1 completion:(id)arg2;
- (void)likeURL:(id)arg1 completion:(id)arg2;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned int)arg2 completion:(id)arg3;
- (id)init;
- (void).cxx_destruct;

@end