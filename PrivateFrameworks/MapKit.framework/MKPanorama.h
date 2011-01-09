/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class MKPanoramaInternal;



@interface MKPanorama : NSObject 
{
    MKPanoramaInternal *_internal;
}

@property(readonly) BOOL isPresent;
@property(readonly) BOOL hasPreview;
@property(readonly) BOOL hasMetadata;
@property(readonly) BOOL hasGeometry;
@property(readonly) NSString *panoramaID;
@property(readonly) BOOL isDisabled;
@property(readonly) BOOL isServiceThrottled;
@property(readonly) NSUInteger maxZoomLevel;
@property CGImage *mapImageRef;
@property(readonly) CGSize imageSize;
@property(readonly) CGSize tileSize;
@property(readonly) BOOL hasCoordinate;
@property(readonly) ? coordinate;
@property(readonly) GMMMapPoint *mapPoint;
@property(readonly) NSString *streetNumber;
@property(readonly) NSString *streetName;
@property MKStreetView *view;
@property(readonly) double yaw;
@property(readonly) double tiltYaw;
@property(readonly) double tiltPitch;
@property(readonly) double cameraPitch;
@property(readonly) double horizontalFOV;
@property(readonly) double minVisiblePitch;
@property(readonly) double maxVisiblePitch;
@property(readonly) NSArray *annotations;
@property(readonly) float annotationHeight;
@property(readonly) float annotationHorizonHeight;

+ (NSUInteger)tileByteCount;
+ (void)incrementTileByteCount:(NSInteger)arg1;
+ (double)nextFetchTime;
+ (void)incrementNextFetchTime:(double)arg1;
+ (BOOL)shouldDelayLoad:(double*)arg1;

- (id)initWithId:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 tileSize:(struct CGSize { float x1; float x2; })arg3 maxZoomLevel:(NSUInteger)arg4;
- (id)initWithId:(id)arg1;
- (void)dealloc;
- (id)panoramaID;
- (NSUInteger)maxZoomLevel;
- (struct CGImage { }*)mapImageRef;
- (void)setMapImageRef:(struct CGImage { }*)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (struct CGSize { float x1; float x2; })tileSize;
- (id)mapPoint;
- (void)setMapPoint:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (id)annotations;
- (void)setAnnotations:(id)arg1;
- (id)streetNumber;
- (id)streetName;
- (id)view;
- (void)setView:(id)arg1;
- (double)yaw;
- (double)tiltYaw;
- (double)tiltPitch;
- (double)cameraPitch;
- (double)horizontalFOV;
- (double)minVisiblePitch;
- (double)maxVisiblePitch;
- (float)annotationHeight;
- (float)annotationHorizonHeight;
- (BOOL)hasGeometry;
- (BOOL)isPresent;
- (BOOL)hasCoordinate;
- (BOOL)hasMetadata;
- (BOOL)hasPreview;
- (id)previewTilePaths;
- (void)_invalidateTilePaths;
- (NSUInteger)tileByteCount;
- (void)setTileByteCount:(NSUInteger)arg1;
- (void)incrementTileByteCount:(NSInteger)arg1;
- (void)_updateGeometry;
- (void)getTileZoomLevel:(NSUInteger)arg1 xCount:(NSUInteger*)arg2 yCount:(NSUInteger*)arg3;
- (NSUInteger)tileCountForZoomLevel:(NSUInteger)arg1;
- (id)tilePathsForZoomLevel:(NSUInteger)arg1;
- (id)tilePaths;
- (void)_setTilePaths:(id)arg1;
- (id)loadedTilePaths;
- (void)addTileData:(id)arg1 path:(id)arg2;
- (BOOL)hasTileDataForPath:(id)arg1;
- (id)tileDataForPath:(id)arg1;
- (void)_updateTileByteCount;
- (void)removeTileDataAtZoomLevel:(NSUInteger)arg1;
- (void)removeAllTileData;
- (id)description;
- (BOOL)isServiceThrottled;
- (double)throttleTimeInterval;
- (BOOL)isDisabled;
- (BOOL)_readDataProperties:(id)arg1 error:(id*)arg2;
- (BOOL)_readProjectionProperties:(id)arg1 error:(id*)arg2;
- (BOOL)_readAnotationProperties:(id)arg1 error:(id*)arg2;
- (BOOL)readMetadata:(id)arg1 error:(id*)arg2;
- (id)key;
- (NSUInteger)heapTime;
- (void)setHeapTime:(NSUInteger)arg1;
- (NSUInteger)updateTime;
- (void)setUpdateTime:(NSUInteger)arg1;
- (void)compact;

@end