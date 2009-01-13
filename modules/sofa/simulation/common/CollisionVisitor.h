/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, version 1.0 beta 3      *
*                (c) 2006-2008 MGH, INRIA, USTL, UJF, CNRS                    *
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
#ifndef SOFA_SIMULATION_COLLISIONACTION_H
#define SOFA_SIMULATION_COLLISIONACTION_H

#include <sofa/simulation/common/Visitor.h>
#include <sofa/core/componentmodel/collision/Pipeline.h>

namespace sofa
{

namespace simulation
{


/// Compute collision reset, detection and response in one step
class SOFA_SIMULATION_COMMON_API CollisionVisitor : public Visitor
{
public:
    virtual void processCollisionPipeline(simulation::Node* node, core::componentmodel::collision::Pipeline* obj);

    virtual Result processNodeTopDown(simulation::Node* node);

    /// Return a category name for this action.
    /// Only used for debugging / profiling purposes
    virtual const char* getCategoryName() const { return "collision"; }
    virtual const char* getClassName() const { return "CollisionVisitor"; }
};

/// Remove collision response from last step
class SOFA_SIMULATION_COMMON_API CollisionResetVisitor : public CollisionVisitor
{
public:
    void processCollisionPipeline(simulation::Node* node, core::componentmodel::collision::Pipeline* obj);
    virtual const char* getClassName() const { return "CollisionResetVisitor"; }
};

/// Compute collision detection
class SOFA_SIMULATION_COMMON_API CollisionDetectionVisitor : public CollisionVisitor
{
public:
    void processCollisionPipeline(simulation::Node* node, core::componentmodel::collision::Pipeline* obj);
    virtual const char* getClassName() const { return "CollisionDetectionVisitor"; }
};

/// Compute collision response
class SOFA_SIMULATION_COMMON_API CollisionResponseVisitor : public CollisionVisitor
{
public:
    void processCollisionPipeline(simulation::Node* node, core::componentmodel::collision::Pipeline* obj);
    virtual const char* getClassName() const { return "CollisionResponseVisitor"; }
};


} // namespace simulation

} // namespace sofa

#endif
