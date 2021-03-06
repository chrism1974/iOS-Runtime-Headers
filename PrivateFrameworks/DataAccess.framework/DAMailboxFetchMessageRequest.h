/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
    int _bodyFormat;
    int _maxSize;
    NSString *_messageID;
}

- (int)bodyFormat;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)maxSize;
- (id)messageID;

@end
