#pragma once

#include "IAppSystem.h"


struct ParticleFilterType_t;
struct ParticleFunctionType_t;

struct ParticleFullRenderData_Scalar_View;

class CParticleVisibilityData;
class IParticleCollection;
class IParticleSnapshot;
class IParticleSystemQuery;
class ISceneWorld;

// Xref "CParticleSystemMgr::CreateParticleCollection" (libparticles.so)
class CParticleSystemMgr : IAppSystem
{
public:
    virtual void SetFallbackParameters( float, float, float, float ) = 0; // 11
    virtual void SetSystemLevel( int, int ) = 0;
    virtual void SetLowViolence( bool status ) = 0;
    virtual bool IsLowViolence( void ) = 0;
    virtual void* FindParticleSystem( const char *, bool ) = 0;
    virtual void* GetParticleSystemDefinitionBinding( void ) = 0;
    virtual IParticleCollection* CreateParticleCollection( const char *, void *, IParticleSystemQuery *, bool, float, int ) = 0;
    virtual IParticleCollection* CreateParticleCollection_Handle( void *CWeakHandle_InfoForResourceTypeIParticleSystemDefinition, void *, IParticleSystemQuery *, bool, float, int ) = 0;
    virtual void DestroyParticleCollection( IParticleCollection * ) = 0;
    virtual void sub_135CC0() = 0;
    virtual void sub_135CC0_2() = 0;
    virtual void sub_135CD0() = 0;
    virtual const char *GetParticleFieldName( ParticleFilterType_t ) = 0;
    virtual int  GetParticleOperatorCount( ParticleFunctionType_t ) = 0;
    virtual void* GetParticleOperator(ParticleFunctionType_t, int) = 0;
    virtual void SetLastSimulationTime( float time ) = 0;
    virtual float GetLastSimulationTime( void ) = 0;
    virtual void SetLastSimulationDuration( float duration ) = 0;
    virtual float GetLastSimulationDuration( void ) = 0;
    virtual void CommitProfileInformation( bool ) = 0;
    virtual void DumpProfileInformation( void ) = 0;
    virtual void DumpParticleList( const char * ) = 0;
    virtual void CreateParticleSceneObject( const char *, ISceneWorld *, IParticleSystemQuery *, float, int ) = 0;
    virtual void CreateParticleSceneObject2( void *CWeakHandle_InfoForResourceTypeIParticleSystemDefinition, ISceneWorld *, IParticleSystemQuery *, float, int ) = 0;
    virtual void CreateParticleSceneObject3( IParticleCollection *, ISceneWorld *, bool ) = 0;
    virtual void GenerateExtendedSortedIndexList( Vector, const Vector *, CParticleVisibilityData *, IParticleCollection *, bool, void *, ParticleFullRenderData_Scalar_View **, bool ) = 0;
    virtual int ParticleRandomInt( IParticleCollection *, int min, int max ) = 0;
    virtual float ParticleRandomFloat( IParticleCollection *, float min, float max ) = 0;
    virtual const char *GetParticleAttributeName( int ) = 0;
    virtual void sub_135B00() = 0;
    virtual void sub_1362F0() = 0;
    virtual void sub_135AB0() = 0;
    virtual void sub_1183B0() = 0;
    virtual void sub_135B20() = 0;
    virtual void sub_135B30() = 0;
    virtual void GetByte() = 0;
    virtual void SetByte() = 0;
    virtual void sub_135BA0() = 0;
    virtual void sub_135BB0() = 0;
    virtual void sub_135BE0() = 0;
    virtual void sub_1387B0() = 0;
    virtual IParticleSnapshot CreateParticleSnapshot( void ) = 0;
    virtual void DestroyParticleSnapshot( IParticleSnapshot * ) = 0;
    virtual void sub_135A80() = 0;
    virtual void sub_135A90() = 0;
    virtual void sub_135D60() = 0;
};