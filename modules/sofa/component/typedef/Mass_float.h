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


#ifndef SOFA_TYPEDEF_Mass_float_H
#define SOFA_TYPEDEF_Mass_float_H

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


#include <sofa/component/mass/DiagonalMass.h>
#include <sofa/component/forcefield/HexahedralFEMForceFieldAndMass.h>
#include <sofa/component/forcefield/HexahedronCompositeFEMForceFieldAndMass.h>
#include <sofa/component/forcefield/HexahedronFEMForceFieldAndMass.h>
#include <sofa/component/mass/MatrixMass.h>
#include <sofa/component/mass/MeshMatrixMass.h>
#include <sofa/component/forcefield/NonUniformHexahedralFEMForceFieldAndMass.h>
#include <sofa/component/forcefield/NonUniformHexahedralFEMForceFieldAndMassCorrected.h>
#include <sofa/component/forcefield/NonUniformHexahedronFEMForceFieldAndMass.h>
#include <sofa/component/forcefield/NonUniformHexahedronFEMForceFieldDensity.h>
#include <sofa/component/mass/UniformMass.h>



//---------------------------------------------------------------------------------------------
//Typedef for DiagonalMass
typedef sofa::component::mass::DiagonalMass<sofa::defaulttype::StdRigidTypes<2, float>, sofa::defaulttype::RigidMass<2, float> > DiagonalMassRigid2f;
typedef sofa::component::mass::DiagonalMass<sofa::defaulttype::StdRigidTypes<3, float>, sofa::defaulttype::RigidMass<3, float> > DiagonalMassRigid3f;
typedef sofa::component::mass::DiagonalMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float>, float> DiagonalMass1f;
typedef sofa::component::mass::DiagonalMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float>, float> DiagonalMass2f;
typedef sofa::component::mass::DiagonalMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float>, float> DiagonalMass3f;
typedef sofa::component::mass::DiagonalMass<sofa::gpu::cuda::CudaVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float>, float> DiagonalMassCuda3f;



//---------------------------------------------------------------------------------------------
//Typedef for HexahedralFEMForceFieldAndMass
typedef sofa::component::forcefield::HexahedralFEMForceFieldAndMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > HexahedralFEMForceFieldAndMass3f;



//---------------------------------------------------------------------------------------------
//Typedef for HexahedronCompositeFEMForceFieldAndMass
typedef sofa::component::forcefield::HexahedronCompositeFEMForceFieldAndMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > HexahedronCompositeFEMForceFieldAndMass3f;



//---------------------------------------------------------------------------------------------
//Typedef for HexahedronFEMForceFieldAndMass
typedef sofa::component::forcefield::HexahedronFEMForceFieldAndMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > HexahedronFEMForceFieldAndMass3f;



//---------------------------------------------------------------------------------------------
//Typedef for MatrixMass
typedef sofa::component::mass::MatrixMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float>, sofa::defaulttype::Mat<1, 1, float> > MatrixMass1f;
typedef sofa::component::mass::MatrixMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float>, sofa::defaulttype::Mat<2, 2, float> > MatrixMass2f;
typedef sofa::component::mass::MatrixMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float>, sofa::defaulttype::Mat<3, 3, float> > MatrixMass3f;



//---------------------------------------------------------------------------------------------
//Typedef for MeshMatrixMass
typedef sofa::component::mass::MeshMatrixMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float>, float> MeshMatrixMass1f;
typedef sofa::component::mass::MeshMatrixMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float>, float> MeshMatrixMass2f;
typedef sofa::component::mass::MeshMatrixMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float>, float> MeshMatrixMass3f;



//---------------------------------------------------------------------------------------------
//Typedef for NonUniformHexahedralFEMForceFieldAndMass
typedef sofa::component::forcefield::NonUniformHexahedralFEMForceFieldAndMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > NonUniformHexahedralFEMForceFieldAndMass3f;



//---------------------------------------------------------------------------------------------
//Typedef for NonUniformHexahedralFEMForceFieldAndMassCorrected
typedef sofa::component::forcefield::NonUniformHexahedralFEMForceFieldAndMassCorrected<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > NonUniformHexahedralFEMForceFieldAndMassCorrected3f;



//---------------------------------------------------------------------------------------------
//Typedef for NonUniformHexahedronFEMForceFieldAndMass
typedef sofa::component::forcefield::NonUniformHexahedronFEMForceFieldAndMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > NonUniformHexahedronFEMForceFieldAndMass3f;



//---------------------------------------------------------------------------------------------
//Typedef for NonUniformHexahedronFEMForceFieldDensity
typedef sofa::component::forcefield::NonUniformHexahedronFEMForceFieldDensity<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float> > NonUniformHexahedronFEMForceFieldDensity3f;



//---------------------------------------------------------------------------------------------
//Typedef for UniformMass
typedef sofa::component::mass::UniformMass<sofa::defaulttype::StdRigidTypes<2, float>, sofa::defaulttype::RigidMass<2, float> > UniformMassRigid2f;
typedef sofa::component::mass::UniformMass<sofa::defaulttype::StdRigidTypes<3, float>, sofa::defaulttype::RigidMass<3, float> > UniformMassRigid3f;
typedef sofa::component::mass::UniformMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, float>, sofa::defaulttype::Vec<1, float>, float>, float> UniformMass1f;
typedef sofa::component::mass::UniformMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, float>, sofa::defaulttype::Vec<2, float>, float>, float> UniformMass2f;
typedef sofa::component::mass::UniformMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float>, float> UniformMass3f;
typedef sofa::component::mass::UniformMass<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, float>, sofa::defaulttype::Vec<6, float>, float>, float> UniformMass6f;
typedef sofa::component::mass::UniformMass<sofa::gpu::cuda::CudaRigidTypes<3, float>, sofa::defaulttype::RigidMass<3, float> > UniformMassCudaRigid3f;
typedef sofa::component::mass::UniformMass<sofa::gpu::cuda::CudaVectorTypes<sofa::defaulttype::Vec<3, float>, sofa::defaulttype::Vec<3, float>, float>, float> UniformMassCuda3f;





#ifdef SOFA_FLOAT
typedef DiagonalMassRigid2f DiagonalMassRigid2;
typedef DiagonalMassRigid3f DiagonalMassRigid3;
typedef DiagonalMass1f DiagonalMass1;
typedef DiagonalMass2f DiagonalMass2;
typedef DiagonalMass3f DiagonalMass3;
typedef DiagonalMassCuda3f DiagonalMassCuda3;
typedef HexahedralFEMForceFieldAndMass3f HexahedralFEMForceFieldAndMass3;
typedef HexahedronCompositeFEMForceFieldAndMass3f HexahedronCompositeFEMForceFieldAndMass3;
typedef HexahedronFEMForceFieldAndMass3f HexahedronFEMForceFieldAndMass3;
typedef MatrixMass1f MatrixMass1;
typedef MatrixMass2f MatrixMass2;
typedef MatrixMass3f MatrixMass3;
typedef MeshMatrixMass1f MeshMatrixMass1;
typedef MeshMatrixMass2f MeshMatrixMass2;
typedef MeshMatrixMass3f MeshMatrixMass3;
typedef NonUniformHexahedralFEMForceFieldAndMass3f NonUniformHexahedralFEMForceFieldAndMass3;
typedef NonUniformHexahedralFEMForceFieldAndMassCorrected3f NonUniformHexahedralFEMForceFieldAndMassCorrected3;
typedef NonUniformHexahedronFEMForceFieldAndMass3f NonUniformHexahedronFEMForceFieldAndMass3;
typedef NonUniformHexahedronFEMForceFieldDensity3f NonUniformHexahedronFEMForceFieldDensity3;
typedef UniformMassRigid2f UniformMassRigid2;
typedef UniformMassRigid3f UniformMassRigid3;
typedef UniformMass1f UniformMass1;
typedef UniformMass2f UniformMass2;
typedef UniformMass3f UniformMass3;
typedef UniformMass6f UniformMass6;
typedef UniformMassCudaRigid3f UniformMassCudaRigid3;
typedef UniformMassCuda3f UniformMassCuda3;
#endif

#endif
