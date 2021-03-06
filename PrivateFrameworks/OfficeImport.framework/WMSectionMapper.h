/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDSection;

@interface WMSectionMapper : CMMapper {
    BOOL mBreakAtEnd;
    BOOL mBreakAtStart;
    BOOL mIsTitlePage;
    float mLeftMargin;
    float mTopMargin;
    WDSection *wdSection;
}

+ (BOOL)isContentEmpty:(id)arg1;

- (void)MapSectionStyleAt:(id)arg1;
- (id)initWithWDSection:(id)arg1 breakAtStart:(BOOL)arg2 breakAtEnd:(BOOL)arg3 parent:(id)arg4;
- (float)leftMargin;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapFooterAt:(id)arg1 withState:(id)arg2;
- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;
- (void)setLeftMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;

@end
