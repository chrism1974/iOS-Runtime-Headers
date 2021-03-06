/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<TSSPreset>;

@interface TSDShapeApplyPresetCommand : TSDStyledInfoSetStyleCommand {
    NSObject<TSSPreset> *mPreset;
}

@property(readonly) NSObject<TSSPreset> * preset;

- (const struct ShapeApplyPresetCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyledInfoSetStyleCommandArchive {} *x3; struct Reference {} *x4; struct Color {} *x5; struct FillArchive {} *x6; struct ShadowArchive {} *x7; int x8; unsigned int x9[1]; }*)shapeApplyPresetCommandArchiveFromUnarchiver:(id)arg1;
- (void)computeStyle;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithShape:(id)arg1 preset:(id)arg2;
- (id)initWithShape:(id)arg1 presetKind:(id)arg2 index:(unsigned int)arg3;
- (void)loadFromArchive:(const struct ShapeApplyPresetCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyledInfoSetStyleCommandArchive {} *x3; struct Reference {} *x4; struct Color {} *x5; struct FillArchive {} *x6; struct ShadowArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (id)preset;
- (void)saveToArchive:(struct ShapeApplyPresetCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyledInfoSetStyleCommandArchive {} *x3; struct Reference {} *x4; struct Color {} *x5; struct FillArchive {} *x6; struct ShadowArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
