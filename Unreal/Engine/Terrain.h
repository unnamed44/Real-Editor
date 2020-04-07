//
//  Terrain.h
//  Real Editor
//
//  Created by Vladislav Skachkov on 01/01/2017.
//  Copyright © 2017 Vladislav Skachkov. All rights reserved.
//

#import "Actor.h"
#import "FArray.h"
#import "FString.h"

@interface Terrain : Actor

@property (strong) FArray *heights;
@property (strong) FArray *infoData;
@property (strong) FArray *weightedTextureMaps;
@property (strong) NSData *alphaMaps;
@property (strong) FArray *cachedTerrainMaterials;
@property (strong) FArray *cachedMaterialsDummy;

@property (assign) int numVerticesX;
@property (assign) int numVerticesY;

- (void)exportToT3D:(NSMutableString*)result padding:(unsigned)padding index:(unsigned)index;
- (CGImageRef)heightMap;
- (NSString *)info;

@end
