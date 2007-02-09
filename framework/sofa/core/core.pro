# File generated by kdevelop's qmake manager. 
# ------------------------------------------- 
# Subdir relative project main directory: ./framework/sofa/core
# Target is a library:  sofacore$$LIBSUFFIX

HEADERS += ./BaseMapping.h \
           ./BehaviorModel.h \
           ./CollisionElement.h \
           ./CollisionModel.h \
           ./componentmodel/behavior/BaseConstraint.h \
           ./componentmodel/behavior/BaseForceField.h \
           ./componentmodel/behavior/BaseMass.h \
           ./componentmodel/behavior/BaseMechanicalMapping.h \
           ./componentmodel/behavior/BaseMechanicalState.h \
           ./componentmodel/behavior/Constraint.h \
           ./componentmodel/behavior/Constraint.inl \
           ./componentmodel/behavior/ForceField.h \
           ./componentmodel/behavior/ForceField.inl \
           ./componentmodel/behavior/InteractionForceField.h \
           ./componentmodel/behavior/InteractionConstraint.h \
           ./componentmodel/behavior/MappedModel.h \
           ./componentmodel/behavior/Mass.h \
           ./componentmodel/behavior/Mass.inl \
           ./componentmodel/behavior/MechanicalMapping.h \
           ./componentmodel/behavior/MechanicalMapping.inl \
           ./componentmodel/behavior/MechanicalState.h \
           ./componentmodel/behavior/OdeSolver.h \
           ./componentmodel/collision/BroadPhaseDetection.h \
           ./componentmodel/collision/CollisionGroupManager.h \
           ./componentmodel/collision/Contact.h \
           ./componentmodel/collision/ContactManager.h \
           ./componentmodel/collision/Detection.h \
           ./componentmodel/collision/DetectionOutput.h \
           ./componentmodel/collision/Intersection.h \
           ./componentmodel/collision/Intersection.inl \
           ./componentmodel/collision/Pipeline.h \
           ./componentmodel/topology/BaseTopology.h \
           ./componentmodel/topology/TopologicalMapping.h \
           ./componentmodel/topology/Topology.h \
           ./Mapping.h \
           ./Mapping.inl \
           ./objectmodel/Base.h \
           ./objectmodel/BaseContext.h \
           ./objectmodel/BaseNode.h \
           ./objectmodel/BaseObject.h \
           ./objectmodel/Context.h \
           ./objectmodel/ContextObject.h \
           ./objectmodel/DataField.h \
           ./objectmodel/Event.h \
           ./objectmodel/Field.h \
           ./objectmodel/FieldBase.h \
           ./objectmodel/KeypressedEvent.h \
           ./objectmodel/VField.h \
           ./objectmodel/XField.h \
           ./VisualModel.h 
SOURCES += ./componentmodel/behavior/OdeSolver.cpp \
           ./componentmodel/collision/Contact.cpp \
           ./componentmodel/collision/Intersection.cpp \
           ./componentmodel/collision/Pipeline.cpp \
           ./componentmodel/topology/BaseTopology.cpp \
           ./objectmodel/Base.cpp \
           ./objectmodel/BaseContext.cpp \
           ./objectmodel/BaseObject.cpp \
           ./objectmodel/Context.cpp \
           ./objectmodel/Event.cpp \
           ./objectmodel/Field.cpp \
           ./objectmodel/KeypressedEvent.cpp 
SOFA_DIR = ../../..
TEMPLATE = lib
include($$SOFA_DIR/sofa.cfg)
TARGET = sofacore$$LIBSUFFIX
CONFIG += $$CONFIGLIBRARIES
LIBS = -lsofahelper$$LIBSUFFIX -lsofadefaulttype$$LIBSUFFIX
QMAKE_LIBDIR = ../../../lib/$$LIBSDIRECTORY ../../../lib/$$LIBSDIRECTORY/../Common
