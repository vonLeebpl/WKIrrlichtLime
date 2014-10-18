#pragma once

#pragma unmanaged
#pragma warning(push, 3)
#include "irrlicht.h"
#pragma warning(pop)
#pragma managed

#include "Lime.h"
#include "NativeArray.h"
#include "NativeList.h"
#include "NativeIterator.h"

// enums
#include "AlphaSource.h"
#include "AnimatedMeshType.h"
#include "AnimationTypeMD2.h"
#include "AntiAliasingMode.h"
#include "AttributeReadWriteFlag.h"
#include "AttributeType.h"
#include "BlendFactor.h"
#include "BlendOperation.h"
#include "BoneAnimationMode.h"
#include "BoneSkinningSpace.h"
#include "ColorFormat.h"
#include "ColorMaterial.h"
#include "ColorPlane.h"
#include "ComparisonFunc.h"
#include "CullingType.h"
#include "CursorIcon.h"
#include "CursorPlatformBehavior.h"
#include "DebugSceneType.h"
#include "DeviceType.h"
#include "DriverType.h"
#include "EventType.h"
#include "FileArchiveType.h"
#include "FileSystemType.h"
#include "FocusFlag.h"
#include "FogType.h"
#include "GeometryShaderType.h"
#include "GPUShadingLanguage.h"
#include "GUIAlignment.h"
#include "GUIButtonState.h"
#include "GUIButtonImageState.h"
#include "GUIColumnOrdering.h"
#include "GUIContextMenuClose.h"
#include "GUIDefaultColor.h"
#include "GUIDefaultFont.h"
#include "GUIDefaultIcon.h"
#include "GUIDefaultSize.h"
#include "GUIDefaultText.h"
#include "GUIElementType.h"
#include "GUIEventType.h"
#include "GUIFontType.h"
#include "GUIListBoxColor.h"
#include "GUIMessageBoxFlag.h"
#include "GUIOrderingMode.h"
#include "GUISkinType.h"
#include "GUISpinBoxValidation.h"
#include "GUITableDrawFlag.h"
#include "HardwareBufferType.h"
#include "HardwareMappingHint.h"
#include "IndexType.h"
#include "InterpolationMode.h"
#include "JointUpdateOnRender.h"
#include "KeyAction.h"
#include "KeyCode.h"
#include "LightType.h"
#include "LogLevel.h"
#include "MaterialFlag.h"
#include "MaterialType.h"
#include "ModulateFunc.h"
#include "MouseEventType.h"
#include "ParticleAffectorType.h"
#include "ParticleBehavior.h"
#include "ParticleEmitterType.h"
#include "PixelShaderType.h"
#include "PolygonOffset.h"
#include "PrimitiveType.h"
#include "RenderTarget.h"
#include "SceneNodeAnimatorType.h"
#include "SceneNodeRenderPass.h"
#include "SceneNodeType.h"
#include "SceneParameters.h"
#include "TerrainPatchSize.h"
#include "TextureClamp.h"
#include "TextureCreationFlag.h"
#include "TextureLockMode.h"
#include "TextureSource.h"
#include "TransformationState.h"
#include "VertexShaderType.h"
#include "VertexType.h"
#include "VideoDriverFeature.h"
#include "VideoModeAspectRatio.h"

// basic types
#include "Vector.h"
#include "Plane.h"
#include "Line.h"
#include "Color.h"
#include "Fog.h"
#include "Vertex.h"
#include "Dimension.h"
#include "Rect.h"
#include "AABBox.h"
#include "Matrix.h"
#include "Quaternion.h"
#include "ViewFrustum.h"
#include "Triangle.h"
#include "VideoMode.h"
#include "KeyMap.h"
#include "ExposedVideoData.h"
#include "NamedPath.h"
#include "AttributeReadWriteOptions.h"

// inheritors
#include "EventReceiverInheritor.h"
#include "GUIElementInheritor.h"
#include "LightManagerInheritor.h"
#include "SceneNodeInheritor.h"
#include "SceneNodeAnimatorInheritor.h"
#include "ShaderCallBackInheritor.h"