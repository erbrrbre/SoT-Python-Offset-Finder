// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
struct MysteriousNotesCompletionEventsModel
{
public:
	struct FName                                                 CompletionIdent;                                   // 0x0(0x8)
};


// Size 0x8
struct MysteriousNotesCompletionEventsModelEntry
{
public:
	struct FName                                                 CompletionIdent;                                   // 0x0(0x8)
};


// Size 0x1
struct EventListenForCinematicEndEvent
{
public:
};


// Size 0x10
struct EventTriggerMysteriousNotesPopup
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
	bool                                                         CinematicSkipped;                                  // 0x8(0x1)
};


// Size 0x18
struct EventMarkNoteDeleted
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
	Struct Guid                                                  NoteId;                                            // 0x8(0x10)
};


// Size 0x10
struct EventNoteClientCompletionStep
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
	struct FName                                                 CompletionStepID;                                  // 0x8(0x8)
};


// Size 0x10
struct EventNoteCompletionStep
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
	struct FName                                                 CompletionStepID;                                  // 0x8(0x8)
};


// Size 0x1
struct EventNotesUpdated
{
public:
};


// Size 0x18
struct EventMarkNoteRead
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
	Struct Guid                                                  NoteId;                                            // 0x8(0x10)
};


// Size 0x8
struct EventOnlineAthenaPlayerControllerUnpossessed
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
};


// Size 0x8
struct EventPlayerControllerPossessed
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
};


// Size 0x10
struct EventMysteriousNoteContentUpdated
{
public:
};


// Size 0x1
struct EventMysteriousNoteSettingsLoaded
{
public:
};


// Size 0x1
struct EventMysteriousNoteCustomContentUpdate
{
public:
};


// Size 0x10
struct EventMysteriousNoteRemoved
{
public:
};


// Size 0x14
struct MysteriousNoteInfo
{
public:
	Struct Guid                                                  NoteId;                                            // 0x0(0x10)
	bool                                                         NoteRead;                                          // 0x10(0x1)
	bool                                                         ShowNoteAnimation;                                 // 0x11(0x1)
};


// Size 0x10
struct MysteriousNoteTheme
{
public:
	Struct FString                                               NoteType;                                          // 0x0(0x10)
};


// Size 0xd0
struct WieldableMysteriousNoteLayoutItem
{
public:
	Struct FString                                               Theme;                                             // 0x0(0x10)
	Class Font*                                                  Font;                                              // 0x10(0x8)
	Struct TreasureMapWidgetStreamedTexture                      Image;                                             // 0x18(0x30)
	Struct StringAssetReference                                  RadialIcon;                                        // 0x48(0x10)
	Struct TreasureMapWidgetText                                 NoteTitleWidgetText;                               // 0x58(0x38)
	Struct TreasureMapWidgetText                                 NoteBodyWidgetText;                                // 0x90(0x38)
	float                                                        NoteWidth;                                         // 0xc8(0x4)
};


// Size 0x30
struct ActiveNoteData
{
public:
	TArray<Struct NotesRemoteServiceNoteModel>                   NotesRemoteServiceNoteModels;                      // 0x0(0x10)
	TArray<Struct NoteCompletionEntry>                           PendingCompletionEntries;                          // 0x10(0x10)
	TArray<Struct Guid>                                          PendingDetailRequestIDs;                           // 0x20(0x10)
};


// Size 0x20
struct NoteCompletionEntry
{
public:
	Struct Guid                                                  NoteId;                                            // 0x0(0x10)
	TArray<Str CompletionEventIds>                               CompletionEventIds;                                // 0x10(0x10)
};


// Size 0x80
struct MysteriousNoteRequest
{
public:
	Class PlayerController*                                      PlayerController;                                  // 0x0(0x8)
	Struct PirateIdentity                                        PirateIdentity;                                    // 0x8(0x78)
};


// Size 0x48
struct PlayerMysteriousNoteItem
{
public:
	Struct Guid                                                  OriginalNoteID;                                    // 0x0(0x10)
	Struct FString                                               LocalisedTitle;                                    // 0x10(0x10)
	Struct FString                                               LocalisedBody;                                     // 0x20(0x10)
	Struct FString                                               NoteType;                                          // 0x30(0x10)
};


// Size 0x18
struct ClientNoteData
{
public:
	bool                                                         NotifyArrival;                                     // 0x0(0x1)
	TArray<Struct MysteriousNoteInfo>                            PendingNotes;                                      // 0x8(0x10)
};


// Size 0x4
struct PlayerSentNotesTelemetryEvent
{
public:
	int                                                          NoteCount;                                         // 0x0(0x4)
};


// Size 0x20
struct PlayerNoteStateChangeTelemetryEvent
{
public:
	Struct Guid                                                  NoteId;                                            // 0x0(0x10)
	Struct FString                                               NoteState;                                         // 0x10(0x10)
};


}