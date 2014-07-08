/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class AASetupAssistantService, UINavigationItem, NSURL, UINavigationController, RUILoader, AAGrandSlamSigner, NSMutableArray, <AAUIChildAccountCreationDelegate>, UIActivityIndicatorView, UIBarButtonItem;

@interface AAUIChildAccountCreationController : NSObject <RUIObjectModelDelegate> {
    AASetupAssistantService *_setupService;
    AAGrandSlamSigner *_grandSlamSigner;
    NSURL *_launchingURL;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    bool_isShowingSpinner;
    <AAUIChildAccountCreationDelegate> *_delegate;
    UINavigationController *_navigationController;
}

@property <AAUIChildAccountCreationDelegate> * delegate;
@property UINavigationController * navigationController;


- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)loadRemoteUI;
- (void)_createChildAccount;
- (void)_cleanupRemoteUILoader;
- (void)_displayConnectionErrorAndCancel;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_popObjectModelAnimated:(bool)arg1;
- (void)_addHeadersToRequest:(id)arg1;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void)_cancel;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;

@end