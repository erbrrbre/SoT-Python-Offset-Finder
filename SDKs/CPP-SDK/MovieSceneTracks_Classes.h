// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class MovieScene3DConstraintSection: public MovieSceneSection
{
public:
	Struct Guid                                                  ConstraintId;                                      // 0x98(0x10)
};


// Size 0x18
class MovieScene3DAttachSection: public MovieScene3DConstraintSection
{
public:
	struct FName                                                 AttachSocketName;                                  // 0xa8(0x8)
	struct FName                                                 AttachComponentName;                               // 0xb0(0x8)
	bool                                                         bConstrainTx;                                      // 0xb8(0x1)
	bool                                                         bConstrainTy;                                      // 0xb8(0x1)
	bool                                                         bConstrainTz;                                      // 0xb8(0x1)
	bool                                                         bConstrainRx;                                      // 0xb8(0x1)
	bool                                                         bConstrainRy;                                      // 0xb8(0x1)
	bool                                                         bConstrainRz;                                      // 0xb8(0x1)
};


// Size 0x80
class MovieScene3DPathSection: public MovieScene3DConstraintSection
{
public:
	Struct RichCurve                                             TimingCurve;                                       // 0xa8(0x78)
	byte                                                         FrontAxisEnum;                                     // 0x120(0x1)
	byte                                                         UpAxisEnum;                                        // 0x121(0x1)
	bool                                                         bFollow;                                           // 0x124(0x1)
	bool                                                         bReverse;                                          // 0x124(0x1)
	bool                                                         bForceUpright;                                     // 0x124(0x1)
};


// Size 0x10
class MovieScene3DConstraintTrack: public MovieSceneTrack
{
public:
	TArray<class ConstraintSections*>                            ConstraintSections;                                // 0x88(0x10)
};


// Size 0x0
class MovieScene3DAttachTrack: public MovieScene3DConstraintTrack
{
public:
};


// Size 0x0
class MovieScene3DPathTrack: public MovieScene3DConstraintTrack
{
public:
};


// Size 0x440
class MovieScene3DTransformSection: public MovieSceneSection
{
public:
	Struct RichCurve                                             Translation;                                       // 0xa0(0x78)
	Struct RichCurve                                             Rotation;                                          // 0x208(0x78)
	Struct RichCurve                                             Scale;                                             // 0x370(0x78)
};


// Size 0x98
class MovieSceneActorReferenceSection: public MovieSceneSection
{
public:
	Struct IntegralCurve                                         ActorGuidIndexCurve;                               // 0xa0(0x70)
	TArray<Str ActorGuidStrings>                                 ActorGuidStrings;                                  // 0x120(0x10)
};


// Size 0x110
class MovieSceneAudioSection: public MovieSceneSection
{
public:
	Class SoundBase*                                             Sound;                                             // 0x98(0x8)
	float                                                        StartOffset;                                       // 0xa0(0x4)
	float                                                        AudioStartTime;                                    // 0xa4(0x4)
	float                                                        AudioDilationFactor;                               // 0xa8(0x4)
	float                                                        AudioVolume;                                       // 0xac(0x4)
	Struct RichCurve                                             SoundVolume;                                       // 0xb0(0x78)
	Struct RichCurve                                             PitchMultiplier;                                   // 0x128(0x78)
	bool                                                         bSuppressSubtitles;                                // 0x1a0(0x1)
};


// Size 0x10
class MovieSceneAudioTrack: public MovieSceneNameableTrack
{
public:
	TArray<class AudioSections*>                                 AudioSections;                                     // 0x88(0x10)
};


// Size 0x80
class MovieSceneBoolSection: public MovieSceneSection
{
public:
	bool                                                         DefaultValue;                                      // 0xa0(0x1)
	Struct IntegralCurve                                         BoolCurve;                                         // 0xa8(0x70)
};


// Size 0x0
class MovieSceneSpawnSection: public MovieSceneBoolSection
{
public:
};


// Size 0x78
class MovieSceneByteSection: public MovieSceneSection
{
public:
	Struct IntegralCurve                                         ByteCurve;                                         // 0xa0(0x70)
};


// Size 0x40
class MovieSceneCameraAnimSection: public MovieSceneSection
{
public:
	Struct MovieSceneCameraAnimSectionData                       AnimData;                                          // 0x98(0x20)
	Class CameraAnim*                                            CameraAnim;                                        // 0xb8(0x8)
	float                                                        PlayRate;                                          // 0xc0(0x4)
	float                                                        PlayScale;                                         // 0xc4(0x4)
	float                                                        BlendInTime;                                       // 0xc8(0x4)
	float                                                        BlendOutTime;                                      // 0xcc(0x4)
	bool                                                         bLooping;                                          // 0xd0(0x1)
};


// Size 0x10
class MovieSceneCameraAnimTrack: public MovieSceneNameableTrack
{
public:
	TArray<class CameraAnimSections*>                            CameraAnimSections;                                // 0x88(0x10)
};


// Size 0x10
class MovieSceneCameraCutSection: public MovieSceneSection
{
public:
	Struct Guid                                                  CameraGuid;                                        // 0x98(0x10)
};


// Size 0x10
class MovieSceneCameraCutTrack: public MovieSceneNameableTrack
{
public:
	TArray<class Sections*>                                      Sections;                                          // 0x88(0x10)
};


// Size 0x40
class MovieSceneCameraShakeSection: public MovieSceneSection
{
public:
	Struct MovieSceneCameraShakeSectionData                      ShakeData;                                         // 0x98(0x20)
	class                                                        ShakeClass;                                        // 0xb8(0x8)
	float                                                        PlayScale;                                         // 0xc0(0x4)
	byte                                                         PlaySpace;                                         // 0xc4(0x1)
	Struct Rotator                                               UserDefinedPlaySpace;                              // 0xc8(0xc)
};


// Size 0x10
class MovieSceneCameraShakeTrack: public MovieSceneNameableTrack
{
public:
	TArray<class CameraShakeSections*>                           CameraShakeSections;                               // 0x88(0x10)
};


// Size 0x1e8
class MovieSceneColorSection: public MovieSceneSection
{
public:
	Struct RichCurve                                             RedCurve;                                          // 0xa0(0x78)
	Struct RichCurve                                             GreenCurve;                                        // 0x118(0x78)
	Struct RichCurve                                             BlueCurve;                                         // 0x190(0x78)
	Struct RichCurve                                             AlphaCurve;                                        // 0x208(0x78)
};


// Size 0x78
class MovieSceneEnumSection: public MovieSceneSection
{
public:
	Struct IntegralCurve                                         EnumCurve;                                         // 0xa0(0x70)
};


// Size 0x110
class MovieSceneEventSection: public MovieSceneSection
{
public:
	Struct NameCurve                                             Events;                                            // 0x98(0x68)
	Struct MovieSceneEventSectionData                            EventData;                                         // 0x100(0x20)
};


// Size 0x20
class MovieSceneSpawnTrack: public MovieSceneTrack
{
public:
	TArray<class Sections*>                                      Sections;                                          // 0x88(0x10)
	Struct Guid                                                  ObjectGuid;                                        // 0x98(0x10)
};


// Size 0x18
class MovieSceneEventTrack: public MovieSceneNameableTrack
{
public:
	bool                                                         bFireEventsWhenForwards;                           // 0x88(0x1)
	bool                                                         bFireEventsWhenBackwards;                          // 0x88(0x1)
	TArray<class Sections*>                                      Sections;                                          // 0x90(0x10)
};


// Size 0x80
class MovieSceneFloatSection: public MovieSceneSection
{
public:
	Struct RichCurve                                             FloatCurve;                                        // 0xa0(0x78)
};


// Size 0x18
class MovieSceneFadeSection: public MovieSceneFloatSection
{
public:
	Struct LinearColor                                           FadeColor;                                         // 0x118(0x10)
	bool                                                         bFadeAudio;                                        // 0x128(0x1)
};


// Size 0x0
class MovieSceneSlomoSection: public MovieSceneFloatSection
{
public:
};


// Size 0x78
class MovieSceneIntegerSection: public MovieSceneSection
{
public:
	Struct IntegralCurve                                         IntegerCurve;                                      // 0xa0(0x70)
};


// Size 0x18
class MovieSceneLevelVisibilitySection: public MovieSceneSection
{
public:
	byte                                                         Visibility;                                        // 0x98(0x1)
	TArray<Struct FName>                                         LevelNames;                                        // 0xa0(0x10)
};


// Size 0x28
class MovieScenePropertyTrack: public MovieSceneNameableTrack
{
public:
	struct FName                                                 PropertyName;                                      // 0x88(0x8)
	Struct FString                                               PropertyPath;                                      // 0x90(0x10)
	TArray<class Sections*>                                      Sections;                                          // 0xa0(0x10)
};


// Size 0x10
class MovieSceneLevelVisibilityTrack: public MovieSceneNameableTrack
{
public:
	TArray<class Sections*>                                      Sections;                                          // 0x88(0x10)
};


// Size 0x30
class MovieSceneParameterSection: public MovieSceneSection
{
public:
	TArray<Struct ScalarParameterNameAndCurve>                   ScalarParameterNamesAndCurves;                     // 0x98(0x10)
	TArray<Struct VectorParameterNameAndCurves>                  VectorParameterNamesAndCurves;                     // 0xa8(0x10)
	TArray<Struct ColorParameterNameAndCurves>                   ColorParameterNamesAndCurves;                      // 0xb8(0x10)
};


// Size 0x10
class MovieSceneMaterialTrack: public MovieSceneNameableTrack
{
public:
	TArray<class Sections*>                                      Sections;                                          // 0x88(0x10)
};


// Size 0x8
class MovieSceneComponentMaterialTrack: public MovieSceneMaterialTrack
{
public:
	int                                                          MaterialIndex;                                     // 0x98(0x4)
};


// Size 0x10
class MovieSceneParticleParameterTrack: public MovieSceneNameableTrack
{
public:
	TArray<class Sections*>                                      Sections;                                          // 0x88(0x10)
};


// Size 0x70
class MovieSceneParticleSection: public MovieSceneSection
{
public:
	Struct IntegralCurve                                         ParticleKeys;                                      // 0x98(0x70)
};


// Size 0x10
class MovieSceneParticleTrack: public MovieSceneNameableTrack
{
public:
	TArray<class ParticleSections*>                              ParticleSections;                                  // 0x88(0x10)
};


// Size 0x0
class MovieScene3DTransformTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0
class MovieSceneActorReferenceTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0
class MovieSceneBoolTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0
class MovieSceneVisibilityTrack: public MovieSceneBoolTrack
{
public:
};


// Size 0x8
class MovieSceneByteTrack: public MovieScenePropertyTrack
{
public:
	Class Enum*                                                  Enum;                                              // 0xb0(0x8)
};


// Size 0x8
class MovieSceneColorTrack: public MovieScenePropertyTrack
{
public:
	bool                                                         bIsSlateColor;                                     // 0xb0(0x1)
};


// Size 0x8
class MovieSceneEnumTrack: public MovieScenePropertyTrack
{
public:
	Class Enum*                                                  Enum;                                              // 0xb0(0x8)
};


// Size 0x0
class MovieSceneFloatTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0
class MovieSceneFadeTrack: public MovieSceneFloatTrack
{
public:
};


// Size 0x0
class MovieSceneSlomoTrack: public MovieSceneFloatTrack
{
public:
};


// Size 0x0
class MovieSceneIntegerTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0
class MovieSceneStringTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x8
class MovieSceneVectorTrack: public MovieScenePropertyTrack
{
public:
	int                                                          NumChannelsUsed;                                   // 0xb0(0x4)
};


// Size 0xc0
class MovieSceneSkeletalAnimationSection: public MovieSceneSection
{
public:
	Struct MovieSceneSkeletalAnimationParams                     Params;                                            // 0x98(0x98)
	Class AnimSequence*                                          AnimSequence;                                      // 0x130(0x8)
	Class AnimSequenceBase*                                      Animation;                                         // 0x138(0x8)
	float                                                        StartOffset;                                       // 0x140(0x4)
	float                                                        EndOffset;                                         // 0x144(0x4)
	float                                                        PlayRate;                                          // 0x148(0x4)
	bool                                                         bReverse;                                          // 0x14c(0x1)
	struct FName                                                 SlotName;                                          // 0x150(0x8)
};


// Size 0x10
class MovieSceneSkeletalAnimationTrack: public MovieSceneNameableTrack
{
public:
	TArray<class AnimationSections*>                             AnimationSections;                                 // 0x88(0x10)
};


// Size 0x80
class MovieSceneStringSection: public MovieSceneSection
{
public:
	Struct StringCurve                                           StringCurve;                                       // 0xa0(0x78)
};


// Size 0x68
class MovieSceneSubSection: public MovieSceneSection
{
public:
	Struct MovieSceneSectionParameters                           Parameters;                                        // 0x98(0x10)
	float                                                        StartOffset;                                       // 0xa8(0x4)
	float                                                        TimeScale;                                         // 0xac(0x4)
	float                                                        PrerollTime;                                       // 0xb0(0x4)
	Class MovieSceneSequence*                                    SubSequence;                                       // 0xb8(0x8)
	Struct FString                                               TargetSequenceName;                                // 0xe0(0x10)
	Struct DirectoryPath                                         TargetPathToRecordTo;                              // 0xf0(0x10)
};


// Size 0x38
class MovieSceneCinematicShotSection: public MovieSceneSubSection
{
public:
	Struct FText                                                 DisplayName;                                       // 0x100(0x38)
};


// Size 0x10
class MovieSceneSubTrack: public MovieSceneNameableTrack
{
public:
	TArray<class Sections*>                                      Sections;                                          // 0x88(0x10)
};


// Size 0x0
class MovieSceneCinematicShotTrack: public MovieSceneSubTrack
{
public:
};


// Size 0x1f0
class MovieSceneVectorSection: public MovieSceneSection
{
public:
	Struct RichCurve                                             Curves;                                            // 0xa0(0x78)
	int                                                          ChannelsUsed;                                      // 0x280(0x4)
};


}