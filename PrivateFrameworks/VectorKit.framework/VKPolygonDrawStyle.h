/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray, NSString;

@interface VKPolygonDrawStyle : VKDrawStyle {
    struct VKProfileSparseRamp<signed char> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct VKProfileSparseRamp<int> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                int value; 
                unsigned char hi; 
            } v[2]; 
            int *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<signed char> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<signed char> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    unsigned int hasFillColor : 1;
    unsigned int hasFillTexture : 1;
    unsigned int hasStrokeColor : 1;
    } _casingColor;
    NSString *_name;
    float _variation;
    } casingsVisible;
    NSString *descriptionKey;
    } fancyCasingsVisible;
    } fillColor;
    } outerStrokeColor;
    } outerStrokeWidth;
    int polygonType;
    int secondTextureBlendMode;
    } secondTextureOpacity;
    NSMutableArray *secondTextures;
    } strokeColor;
    } strokeWidth;
    int textureBlendMode;
    } textureOpacity;
    NSMutableArray *textures;
    int thirdTextureBlendMode;
    } thirdTextureOpacity;
    NSMutableArray *thirdTextures;
    } visibility;
    } zIndices;
}

@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } casingColor;
@property(retain) NSString * name;
@property float variation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })casingColor;
- (BOOL)casingsVisibleAtZoom:(float)arg1;
- (void)dealloc;
- (id)descriptionAtZoom:(float)arg1;
- (BOOL)fancyCasingsVisibleAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })fillColorAtZoom:(float)arg1;
- (BOOL)hasFillColor;
- (BOOL)hasFillTexture;
- (id)initWithStyle:(id)arg1;
- (BOOL)isNotDrawn;
- (id)name;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })nonAnimatedFillColorAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })outerStrokeColorAtZoom:(float)arg1;
- (float)outerStrokeWidthAtZoom:(float)arg1;
- (int)polygonType;
- (id)preferredTextureNameAtZoom:(float)arg1;
- (id)secondTextureAtZoom:(float)arg1;
- (int)secondTextureBlendMode;
- (float)secondTextureOpacityAtZoom:(float)arg1;
- (void)setName:(id)arg1;
- (void)setVariation:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })strokeColorAtZoom:(float)arg1;
- (float)strokeWidthAtZoom:(float)arg1;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned int)arg2 globals:(id)arg3;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (id)textureAtZoom:(float)arg1;
- (int)textureBlendMode;
- (float)textureOpacityAtZoom:(float)arg1;
- (id)textureVariantAtZoom:(float)arg1;
- (id)thirdTextureAtZoom:(float)arg1;
- (int)thirdTextureBlendMode;
- (float)thirdTextureOpacityAtZoom:(float)arg1;
- (id)variant;
- (float)variation;
- (BOOL)visibleAtZoom:(float)arg1;
- (unsigned int)zIndexAtZoom:(float)arg1;

@end