//
//  GLTexture+CoreVideo.h
//  CeedGL
//
//  Created by Raphael Sebbe on 30/07/14.
//  Copyright (c) 2014 Creaceed. All rights reserved.
//

#import <CeedGL/GLTexture.h>
#import <CoreVideo/CoreVideo.h>

typedef NS_ENUM(NSInteger, GLVideoTextureType) {
	GLVideoTextureTypeRGBA,		// not planar
	GLVideoTextureTypeR,		// not planar
	GLVideoTextureTypeR16h,		// not planar
	
	GLVideoTextureTypeLuma = 64,// plane 0
	GLVideoTextureTypeChroma	// plane 1
};

@interface GLTexture (CoreVideo)

+ (GLTexture*)textureFromPixelBuffer:(CVPixelBufferRef)pixelBuffer inTextureCache:(CVOpenGLESTextureCacheRef)textureCache type:(GLVideoTextureType)type outTarget:(GLenum*)otarget;

@end