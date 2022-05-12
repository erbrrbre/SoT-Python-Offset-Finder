// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
struct IncomingMigrationPreventionZone
{
public:
	Struct Vector2D                                              Location;                                          // 0x0(0x8)
	float                                                        Radius;                                            // 0x8(0x4)
};


// Size 0x1
struct ServerMigrationSetupCompleteEvent
{
public:
};


// Size 0x1
struct ServerMigrationSetupRequestEvent
{
public:
};


// Size 0x90
struct ServerMigrationReadyToTransferActors
{
public:
};


// Size 0x10
struct PrepareForWorldSwitchRpc
{
public:
};


// Size 0x20
struct ServerMigrationAboutToStartEvent
{
public:
};


// Size 0x8
struct ServerMigrationConfigChangedEvent
{
public:
};


// Size 0x10
struct ServerMigrationAbortEvent
{
public:
};


// Size 0x1
struct ServerMigrationCompleteEvent
{
public:
};


// Size 0x78
struct ServerMigrationHeartbeatEvent
{
public:
	Struct Guid                                                  ServerId;                                          // 0x0(0x10)
	Struct FString                                               ServerLocation;                                    // 0x10(0x10)
	Struct FString                                               GameEndpoint;                                      // 0x20(0x10)
	Struct FString                                               MigrationEndpoint;                                 // 0x30(0x10)
	TArray<Struct ServerMigrationCrewMigrationStatus>            CrewsMigrationStatus;                              // 0x40(0x10)
	int                                                          SequenceId;                                        // 0x50(0x4)
	Struct Timespan                                              ServerUptime;                                      // 0x58(0x8)
	Struct Timespan                                              ExpectedServerLifetime;                            // 0x60(0x8)
	Struct Timespan                                              MessageInterval;                                   // 0x68(0x8)
	bool                                                         ContestMatchmaking;                                // 0x70(0x1)
};


// Size 0x20
struct ServerMigrationRefusedEvent
{
public:
	Struct Guid                                                  MigrationId;                                       // 0x0(0x10)
	Struct Guid                                                  CrewId;                                            // 0x10(0x10)
};


// Size 0x20
struct OutgoingServerMigrationAbortedEvent
{
public:
};


// Size 0x20
struct ServerMigrationInstanceEventBase
{
public:
	Struct Guid                                                  ServerId;                                          // 0x0(0x10)
	Struct Guid                                                  MigrationId;                                       // 0x10(0x10)
};


// Size 0x20
struct OutgoingServerMigrationCompletedEvent
{
public:
};


// Size 0x20
struct OutgoingServerMigrationStartedEvent
{
public:
};


// Size 0x8
struct ServerMigrationSetServerConfigMessage
{
public:
	Struct Timespan                                              ExpectedServerLifetime;                            // 0x0(0x8)
};


// Size 0x40
struct ServerMigrationRequestEvent
{
public:
	Struct Guid                                                  MigrationId;                                       // 0x0(0x10)
	Struct FString                                               DestinationAddress;                                // 0x10(0x10)
	Struct Guid                                                  CrewId;                                            // 0x20(0x10)
	Struct FString                                               SubMode;                                           // 0x30(0x10)
};


}