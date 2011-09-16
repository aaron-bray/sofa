/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, version 1.0 beta 4      *
*                (c) 2006-2010 MGH, INRIA, USTL, UJF, CNRS                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                               SOFA :: Modules                               *
*                                                                             *
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/



// File automatically generated by "generateTypedef"


#ifndef SOFA_TYPEDEF_Engine_float_H
#define SOFA_TYPEDEF_Engine_float_H

//Default files containing the declaration of the vector type
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/defaulttype/Mat.h>


#ifdef SOFA_GPU_CUDA
#include <sofa/gpu/cuda/CudaTypesBase.h>
#include <sofa/gpu/cuda/CudaTypes.h>
#endif
#ifdef SOFA_GPU_OPENCL
#include <sofa/gpu/opencl/OpenCLTypes.h>
#endif


#include <sofa/component/engine/AverageCoord.h>
#include <sofa/component/engine/BoxROI.h>
#include <sofa/component/engine/Distances.h>
#include <sofa/component/engine/ExtrudeQuadsAndGenerateHexas.h>
#include <sofa/component/engine/ExtrudeSurface.h>
#include <sofa/component/engine/GenerateRigidMass.h>
#include <sofa/component/engine/GroupFilterYoungModulus.h>
#include <sofa/component/engine/IndexValueMapper.h>
#include <sofa/component/engine/JoinPoints.h>
#include <sofa/component/engine/MergeMeshes.h>
#include <sofa/component/engine/MergePoints.h>
#include <sofa/component/engine/MeshBarycentricMapperEngine.h>
#include <sofa/component/engine/NormalsFromPoints.h>
#include <sofa/component/engine/PlaneROI.h>
#include <sofa/component/engine/PointsFromIndices.h>
#include <sofa/component/engine/QuatToRigidEngine.h>
#include <sofa/component/engine/RandomPointDistributionInSurface.h>
#include <sofa/component/engine/RigidToQuatEngine.h>
#include <sofa/component/engine/SphereROI.h>
#include <sofa/component/engine/Spiral.h>
#include <sofa/component/engine/SubsetTopology.h>
#include <sofa/component/engine/TextureInterpolation.h>
#include <sofa/component/engine/TransformEngine.h>
#include <sofa/component/engine/TransformPosition.h>
#include <sofa/component/engine/ValuesFromPositions.h>
#include <sofa/component/engine/Vertex2Frame.h>



//---------------------------------------------------------------------------------------------
//Typedef for AverageCoord
typedef sofa::component::engine::AverageCoord<sofa::defaulttype::StdRigidTypes<2, float> > AverageCoordRigid2f;
typedef sofa::component::engine::AverageCoord<sofa::defaulttype::StdRigidTypes<3, float> > AverageCoordRigid3f;
typedef sofa::component::engine::AverageCoord<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float> > AverageCoord2f;
typedef sofa::component::engine::AverageCoord<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > AverageCoord3f;



//---------------------------------------------------------------------------------------------
//Typedef for BoxROI
typedef sofa::component::engine::BoxROI<sofa::defaulttype::StdRigidTypes<3, float> > BoxROIRigid3f;
typedef sofa::component::engine::BoxROI<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > BoxROI3f;
typedef sofa::component::engine::BoxROI<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, float>, sofa::defaulttype::Vec<6, float>, float> > BoxROI6f;
typedef sofa::component::engine::BoxROI<sofa::gpu::cuda::CudaVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > BoxROICuda3f;



//---------------------------------------------------------------------------------------------
//Typedef for Distances
typedef sofa::component::engine::Distances<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > Distances3f;



//---------------------------------------------------------------------------------------------
//Typedef for ExtrudeQuadsAndGenerateHexas
typedef sofa::component::engine::ExtrudeQuadsAndGenerateHexas<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > ExtrudeQuadsAndGenerateHexas3f;



//---------------------------------------------------------------------------------------------
//Typedef for ExtrudeSurface
typedef sofa::component::engine::ExtrudeSurface<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > ExtrudeSurface3f;



//---------------------------------------------------------------------------------------------
//Typedef for GenerateRigidMass
typedef sofa::component::engine::GenerateRigidMass<sofa::defaulttype::StdRigidTypes<3, float>, sofa::defaulttype::RigidMass<3, float> > GenerateRigidMassRigid3f;



//---------------------------------------------------------------------------------------------
//Typedef for GroupFilterYoungModulus
typedef sofa::component::engine::GroupFilterYoungModulus<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > GroupFilterYoungModulus3f;



//---------------------------------------------------------------------------------------------
//Typedef for IndexValueMapper
typedef sofa::component::engine::IndexValueMapper<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > IndexValueMapper3f;
typedef sofa::component::engine::IndexValueMapper<sofa::gpu::cuda::CudaVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > IndexValueMapperCuda3f;



//---------------------------------------------------------------------------------------------
//Typedef for JoinPoints
typedef sofa::component::engine::JoinPoints<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > JoinPoints3f;



//---------------------------------------------------------------------------------------------
//Typedef for MergeMeshes
typedef sofa::component::engine::MergeMeshes<sofa::defaulttype::StdRigidTypes<2, float> > MergeMeshesRigid2f;
typedef sofa::component::engine::MergeMeshes<sofa::defaulttype::StdRigidTypes<3, float> > MergeMeshesRigid3f;
typedef sofa::component::engine::MergeMeshes<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float> > MergeMeshes1f;
typedef sofa::component::engine::MergeMeshes<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float> > MergeMeshes2f;
typedef sofa::component::engine::MergeMeshes<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > MergeMeshes3f;



//---------------------------------------------------------------------------------------------
//Typedef for MergePoints
typedef sofa::component::engine::MergePoints<sofa::defaulttype::StdRigidTypes<2, float> > MergePointsRigid2f;
typedef sofa::component::engine::MergePoints<sofa::defaulttype::StdRigidTypes<3, float> > MergePointsRigid3f;
typedef sofa::component::engine::MergePoints<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float> > MergePoints1f;
typedef sofa::component::engine::MergePoints<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float> > MergePoints2f;
typedef sofa::component::engine::MergePoints<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > MergePoints3f;



//---------------------------------------------------------------------------------------------
//Typedef for MeshBarycentricMapperEngine
typedef sofa::component::engine::MeshBarycentricMapperEngine<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > MeshBarycentricMapperEngine3f;



//---------------------------------------------------------------------------------------------
//Typedef for NormalsFromPoints
typedef sofa::component::engine::NormalsFromPoints<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > NormalsFromPoints3f;



//---------------------------------------------------------------------------------------------
//Typedef for PlaneROI
typedef sofa::component::engine::PlaneROI<sofa::defaulttype::StdRigidTypes<3, float> > PlaneROIRigid3f;
typedef sofa::component::engine::PlaneROI<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > PlaneROI3f;



//---------------------------------------------------------------------------------------------
//Typedef for PointsFromIndices
typedef sofa::component::engine::PointsFromIndices<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > PointsFromIndices3f;



//---------------------------------------------------------------------------------------------
//Typedef for QuatToRigidEngine
typedef sofa::component::engine::QuatToRigidEngine<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > QuatToRigidEngine3f;



//---------------------------------------------------------------------------------------------
//Typedef for RandomPointDistributionInSurface
typedef sofa::component::engine::RandomPointDistributionInSurface<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > RandomPointDistributionInSurface3f;



//---------------------------------------------------------------------------------------------
//Typedef for RigidToQuatEngine
typedef sofa::component::engine::RigidToQuatEngine<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > RigidToQuatEngine3f;



//---------------------------------------------------------------------------------------------
//Typedef for SphereROI
typedef sofa::component::engine::SphereROI<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > SphereROI3f;
typedef sofa::component::engine::SphereROI<sofa::gpu::cuda::CudaVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > SphereROICuda3f;



//---------------------------------------------------------------------------------------------
//Typedef for Spiral
typedef sofa::component::engine::Spiral<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > Spiral3f;



//---------------------------------------------------------------------------------------------
//Typedef for SubsetTopology
typedef sofa::component::engine::SubsetTopology<sofa::defaulttype::StdRigidTypes<3, float> > SubsetTopologyRigid3f;
typedef sofa::component::engine::SubsetTopology<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > SubsetTopology3f;



//---------------------------------------------------------------------------------------------
//Typedef for TextureInterpolation
typedef sofa::component::engine::TextureInterpolation<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float> > TextureInterpolation1f;
typedef sofa::component::engine::TextureInterpolation<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float> > TextureInterpolation2f;
typedef sofa::component::engine::TextureInterpolation<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > TextureInterpolation3f;



//---------------------------------------------------------------------------------------------
//Typedef for TransformEngine
typedef sofa::component::engine::TransformEngine<sofa::defaulttype::ExtVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > TransformEngineExt3f;
typedef sofa::component::engine::TransformEngine<sofa::defaulttype::StdRigidTypes<2, float> > TransformEngineRigid2f;
typedef sofa::component::engine::TransformEngine<sofa::defaulttype::StdRigidTypes<3, float> > TransformEngineRigid3f;
typedef sofa::component::engine::TransformEngine<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float> > TransformEngine1f;
typedef sofa::component::engine::TransformEngine<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float> > TransformEngine2f;
typedef sofa::component::engine::TransformEngine<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > TransformEngine3f;



//---------------------------------------------------------------------------------------------
//Typedef for TransformPosition
typedef sofa::component::engine::TransformPosition<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > TransformPosition3f;



//---------------------------------------------------------------------------------------------
//Typedef for ValuesFromPositions
typedef sofa::component::engine::ValuesFromPositions<sofa::defaulttype::StdRigidTypes<3, float> > ValuesFromPositionsRigid3f;
typedef sofa::component::engine::ValuesFromPositions<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > ValuesFromPositions3f;



//---------------------------------------------------------------------------------------------
//Typedef for Vertex2Frame
typedef sofa::component::engine::Vertex2Frame<sofa::defaulttype::StdRigidTypes<3, float> > Vertex2FrameRigid3f;





#ifdef SOFA_FLOAT
typedef AverageCoordRigid2f AverageCoordRigid2;
typedef AverageCoordRigid3f AverageCoordRigid3;
typedef AverageCoord2f AverageCoord2;
typedef AverageCoord3f AverageCoord3;
typedef BoxROIRigid3f BoxROIRigid3;
typedef BoxROI3f BoxROI3;
typedef BoxROI6f BoxROI6;
typedef BoxROICuda3f BoxROICuda3;
typedef Distances3f Distances3;
typedef ExtrudeQuadsAndGenerateHexas3f ExtrudeQuadsAndGenerateHexas3;
typedef ExtrudeSurface3f ExtrudeSurface3;
typedef GenerateRigidMassRigid3f GenerateRigidMassRigid3;
typedef GroupFilterYoungModulus3f GroupFilterYoungModulus3;
typedef IndexValueMapper3f IndexValueMapper3;
typedef IndexValueMapperCuda3f IndexValueMapperCuda3;
typedef JoinPoints3f JoinPoints3;
typedef MergeMeshesRigid2f MergeMeshesRigid2;
typedef MergeMeshesRigid3f MergeMeshesRigid3;
typedef MergeMeshes1f MergeMeshes1;
typedef MergeMeshes2f MergeMeshes2;
typedef MergeMeshes3f MergeMeshes3;
typedef MergePointsRigid2f MergePointsRigid2;
typedef MergePointsRigid3f MergePointsRigid3;
typedef MergePoints1f MergePoints1;
typedef MergePoints2f MergePoints2;
typedef MergePoints3f MergePoints3;
typedef MeshBarycentricMapperEngine3f MeshBarycentricMapperEngine3;
typedef NormalsFromPoints3f NormalsFromPoints3;
typedef PlaneROIRigid3f PlaneROIRigid3;
typedef PlaneROI3f PlaneROI3;
typedef PointsFromIndices3f PointsFromIndices3;
typedef QuatToRigidEngine3f QuatToRigidEngine3;
typedef RandomPointDistributionInSurface3f RandomPointDistributionInSurface3;
typedef RigidToQuatEngine3f RigidToQuatEngine3;
typedef SphereROI3f SphereROI3;
typedef SphereROICuda3f SphereROICuda3;
typedef Spiral3f Spiral3;
typedef SubsetTopologyRigid3f SubsetTopologyRigid3;
typedef SubsetTopology3f SubsetTopology3;
typedef TextureInterpolation1f TextureInterpolation1;
typedef TextureInterpolation2f TextureInterpolation2;
typedef TextureInterpolation3f TextureInterpolation3;
typedef TransformEngineExt3f TransformEngineExt3;
typedef TransformEngineRigid2f TransformEngineRigid2;
typedef TransformEngineRigid3f TransformEngineRigid3;
typedef TransformEngine1f TransformEngine1;
typedef TransformEngine2f TransformEngine2;
typedef TransformEngine3f TransformEngine3;
typedef TransformPosition3f TransformPosition3;
typedef ValuesFromPositionsRigid3f ValuesFromPositionsRigid3;
typedef ValuesFromPositions3f ValuesFromPositions3;
typedef Vertex2FrameRigid3f Vertex2FrameRigid3;
#endif

#endif
