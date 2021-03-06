// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_DataMapNodeOfDataMapOfVertexVertexInfo_HeaderFile
#define _Draft_DataMapNodeOfDataMapOfVertexVertexInfo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Draft_DataMapNodeOfDataMapOfVertexVertexInfo.hxx>

#include <TopoDS_Vertex.hxx>
#include <Draft_VertexInfo.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopoDS_Vertex;
class Draft_VertexInfo;
class TopTools_ShapeMapHasher;
class Draft_DataMapOfVertexVertexInfo;
class Draft_DataMapIteratorOfDataMapOfVertexVertexInfo;



class Draft_DataMapNodeOfDataMapOfVertexVertexInfo : public TCollection_MapNode
{

public:

  
    Draft_DataMapNodeOfDataMapOfVertexVertexInfo(const TopoDS_Vertex& K, const Draft_VertexInfo& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Vertex& Key()  const;
  
      Draft_VertexInfo& Value()  const;




  DEFINE_STANDARD_RTTI(Draft_DataMapNodeOfDataMapOfVertexVertexInfo)

protected:




private: 


  TopoDS_Vertex myKey;
  Draft_VertexInfo myValue;


};

#define TheKey TopoDS_Vertex
#define TheKey_hxx <TopoDS_Vertex.hxx>
#define TheItem Draft_VertexInfo
#define TheItem_hxx <Draft_VertexInfo.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode Draft_DataMapNodeOfDataMapOfVertexVertexInfo
#define TCollection_DataMapNode_hxx <Draft_DataMapNodeOfDataMapOfVertexVertexInfo.hxx>
#define TCollection_DataMapIterator Draft_DataMapIteratorOfDataMapOfVertexVertexInfo
#define TCollection_DataMapIterator_hxx <Draft_DataMapIteratorOfDataMapOfVertexVertexInfo.hxx>
#define Handle_TCollection_DataMapNode Handle_Draft_DataMapNodeOfDataMapOfVertexVertexInfo
#define TCollection_DataMapNode_Type_() Draft_DataMapNodeOfDataMapOfVertexVertexInfo_Type_()
#define TCollection_DataMap Draft_DataMapOfVertexVertexInfo
#define TCollection_DataMap_hxx <Draft_DataMapOfVertexVertexInfo.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _Draft_DataMapNodeOfDataMapOfVertexVertexInfo_HeaderFile
