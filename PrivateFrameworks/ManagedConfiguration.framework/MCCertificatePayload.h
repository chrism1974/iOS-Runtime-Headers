/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDate, NSData, NSString;

@interface MCCertificatePayload : MCPayload  {
    NSData *_certificatePersistentID;
    NSString *_installedOnDeviceID;
}

@property(readonly) BOOL isRoot;
@property(readonly) BOOL isIdentity;
@property(readonly) NSDate * expiry;
@property(readonly) BOOL isSigned;
@property(copy) NSString * installedOnDeviceID;
@property(retain) NSData * certificatePersistentID;


- (id)title;
- (void)dealloc;
- (id)description;
- (struct __SecCertificate { }*)copyCertificate;
- (BOOL)isRoot;
- (BOOL)isIdentity;
- (id)certificatePersistentID;
- (BOOL)isSigned;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (id)expiry;
- (id)installedOnDeviceID;
- (void)setInstalledOnDeviceID:(id)arg1;
- (void)setCertificatePersistentID:(id)arg1;
- (id)subtitle1Description;
- (id)subtitle2Description;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;

@end