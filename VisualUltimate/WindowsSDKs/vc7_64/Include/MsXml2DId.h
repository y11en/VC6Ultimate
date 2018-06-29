//**************************************************************************
//*                           Microsoft Windows                           **
//* Copyright (c) 1996 - 2001 Microsoft Corporation. All rights reserved. **
//**************************************************************************

//;begin_internal
/***********************************************************************************************

  This is a distributed SDK component - do not put any #includes or other directives that rely
  upon files not dropped. If in doubt - build iedev

  If you add comments please include either ;BUGBUG at the beginning of a single line OR
  enclose in a ;begin_internal, ;end_internal block - such as this one!

 ***********************************************************************************************/
//;end_internal

//;begin_internal
#ifndef __MSXML2DID_H__
#define __MSXML2DID_H__
//;end_internal

#define DISPID_XOBJ_MIN                 0x00010000
#define DISPID_XOBJ_MAX                 0x0001FFFF
#define DISPID_XOBJ_BASE                DISPID_XOBJ_MIN


#define DISPID_XMLELEMENTCOLLECTION             DISPID_XOBJ_BASE

#define DISPID_XMLELEMENTCOLLECTION_LENGTH      DISPID_XMLELEMENTCOLLECTION + 1
#define DISPID_XMLELEMENTCOLLECTION_NEWENUM     DISPID_NEWENUM
#define DISPID_XMLELEMENTCOLLECTION_ITEM        DISPID_XMLELEMENTCOLLECTION + 3


#define DISPID_XMLDOCUMENT                      DISPID_XMLELEMENTCOLLECTION + 100

#define DISPID_XMLDOCUMENT_ROOT                 DISPID_XMLDOCUMENT + 1
#define DISPID_XMLDOCUMENT_FILESIZE             DISPID_XMLDOCUMENT + 2
#define DISPID_XMLDOCUMENT_FILEMODIFIEDDATE     DISPID_XMLDOCUMENT + 3
#define DISPID_XMLDOCUMENT_FILEUPDATEDDATE      DISPID_XMLDOCUMENT + 4
#define DISPID_XMLDOCUMENT_URL                  DISPID_XMLDOCUMENT + 5
#define DISPID_XMLDOCUMENT_MIMETYPE             DISPID_XMLDOCUMENT + 6
#define DISPID_XMLDOCUMENT_READYSTATE           DISPID_XMLDOCUMENT + 7
#define DISPID_XMLDOCUMENT_CREATEELEMENT        DISPID_XMLDOCUMENT + 8
#define DISPID_XMLDOCUMENT_CHARSET              DISPID_XMLDOCUMENT + 9
#define DISPID_XMLDOCUMENT_VERSION              DISPID_XMLDOCUMENT + 10
#define DISPID_XMLDOCUMENT_DOCTYPE              DISPID_XMLDOCUMENT + 11
#define DISPID_XMLDOCUMENT_DTDURL               DISPID_XMLDOCUMENT + 12
#define DISPID_XMLDOCUMENT_ASYNC                DISPID_XMLDOCUMENT + 13
#define DISPID_XMLDOCUMENT_CASEINSENSITIVE      DISPID_XMLDOCUMENT + 14
#define DISPID_XMLDOCUMENT_BASEURL              DISPID_XMLDOCUMENT + 15
#define DISPID_XMLDOCUMENT_XML                  DISPID_XMLDOCUMENT + 16
#define DISPID_XMLDOCUMENT_LASTERROR            DISPID_XMLDOCUMENT + 17
#define DISPID_XMLDOCUMENT_TRIMWHITESPACE       DISPID_XMLDOCUMENT + 18
#define DISPID_XMLDOCUMENT_COMMIT               DISPID_XMLDOCUMENT + 19

#define DISPID_XMLELEMENT                       DISPID_XMLDOCUMENT + 100

#define DISPID_XMLELEMENT_TAGNAME               DISPID_XMLELEMENT + 1
#define DISPID_XMLELEMENT_PARENT                DISPID_XMLELEMENT + 2
#define DISPID_XMLELEMENT_SETATTRIBUTE          DISPID_XMLELEMENT + 3
#define DISPID_XMLELEMENT_GETATTRIBUTE          DISPID_XMLELEMENT + 4
#define DISPID_XMLELEMENT_REMOVEATTRIBUTE       DISPID_XMLELEMENT + 5
#define DISPID_XMLELEMENT_CHILDREN              DISPID_XMLELEMENT + 6
#define DISPID_XMLELEMENT_TYPE                  DISPID_XMLELEMENT + 7
#define DISPID_XMLELEMENT_TEXT                  DISPID_XMLELEMENT + 8
#define DISPID_XMLELEMENT_ADDCHILD              DISPID_XMLELEMENT + 9
#define DISPID_XMLELEMENT_REMOVECHILD           DISPID_XMLELEMENT + 10
#define DISPID_XMLELEMENT_ATTRIBUTES            DISPID_XMLELEMENT + 11

#define DISPID_XMLNOTIFSINK                     DISPID_XMLELEMENT + 100 

#define DISPID_XMLNOTIFSINK_CHILDADDED          DISPID_XMLNOTIFSINK + 1

#define DISPID_XMLATTRIBUTE                     DISPID_XMLNOTIFSINK + 100

#define DISPID_XMLATTRIBUTE_NAME                DISPID_XMLATTRIBUTE + 1
#define DISPID_XMLATTRIBUTE_VALUE               DISPID_XMLATTRIBUTE + 2


// IXMLError2
#define DISPID_XMLERROR                         DISPID_XMLNOTIFSINK + 100
#define DISPID_XMLERROR_REASON                  DISPID_XMLERROR + 1
#define DISPID_XMLERROR_LINE                    DISPID_XMLERROR + 2
#define DISPID_XMLERROR_POS                     DISPID_XMLERROR + 3

// INode
#define DISPID_NODE                             DISPID_XMLERROR + 100
#define DISPID_NODE_NAME                        DISPID_NODE + 1
#define DISPID_NODE_PARENT                      DISPID_NODE + 2
#define DISPID_NODE_TYPE                        DISPID_NODE + 3

#define DISPID_NODE_VALUE                       DISPID_NODE + 4

#define DISPID_NODE_SETATTRIBUTE                DISPID_NODE + 5
#define DISPID_NODE_GETATTRIBUTE                DISPID_NODE + 6
#define DISPID_NODE_REMOVEATTRIBUTE             DISPID_NODE + 7
#define DISPID_NODE_ATTRIBUTES                  DISPID_NODE + 8

#define DISPID_NODE_ADD                         DISPID_NODE + 9
#define DISPID_NODE_REMOVE                      DISPID_NODE + 10
#define DISPID_NODE_CHILDREN                    DISPID_NODE + 11

// INodeList
#define DISPID_NODELIST                         DISPID_NODE + 100
#define DISPID_NODELIST_NEWENUM                 DISPID_NODELIST + 1
#define DISPID_NODELIST_NEXT                    DISPID_NODELIST + 2
#define DISPID_NODELIST_CURRENT                 DISPID_NODELIST + 3
#define DISPID_NODELIST_MOVE                    DISPID_NODELIST + 4
#define DISPID_NODELIST_MOVETONODE              DISPID_NODELIST + 5

#define DISPID_NODELIST_LENGTH                  DISPID_NODELIST + 6
#define DISPID_NODELIST_ITEM                    DISPID_NODELIST + 7


// Our dispids need to be mapped into the range 1..9999 to keep Trident happy
// specifically, to make the XML tag more efficient. (simonb, 09-18-1998)
#define DISPID_DOM_BASE                 0x00000001

#define DISPID_DOM_COLLECTION_BASE	1000000
#define DISPID_DOM_COLLECTION_MAX	2999999

#define DISPID_DOM_NODE                             (DISPID_DOM_BASE)
#define DISPID_DOM_NODE_NODENAME                    (DISPID_DOM_NODE + 1)
#define DISPID_DOM_NODE_NODEVALUE                   (DISPID_DOM_NODE + 2)
#define DISPID_DOM_NODE_NODETYPE                    (DISPID_DOM_NODE + 3)
#define DISPID_DOM_NODE_NODETYPEENUM                (DISPID_DOM_NODE + 4)
#define DISPID_DOM_NODE_PARENTNODE                  (DISPID_DOM_NODE + 5)
#define DISPID_DOM_NODE_CHILDNODES                  (DISPID_DOM_NODE + 6)
#define DISPID_DOM_NODE_FIRSTCHILD                  (DISPID_DOM_NODE + 7)
#define DISPID_DOM_NODE_LASTCHILD                   (DISPID_DOM_NODE + 8)
#define DISPID_DOM_NODE_PREVIOUSSIBLING             (DISPID_DOM_NODE + 9)
#define DISPID_DOM_NODE_NEXTSIBLING                 (DISPID_DOM_NODE + 10)
#define DISPID_DOM_NODE_ATTRIBUTES                  (DISPID_DOM_NODE + 11)
#define DISPID_DOM_NODE_INSERTBEFORE                (DISPID_DOM_NODE + 12)
#define DISPID_DOM_NODE_REPLACECHILD                (DISPID_DOM_NODE + 13)
#define DISPID_DOM_NODE_REMOVECHILD                 (DISPID_DOM_NODE + 14)
#define DISPID_DOM_NODE_APPENDCHILD                 (DISPID_DOM_NODE + 15)
#define DISPID_DOM_NODE_HASCHILDNODES               (DISPID_DOM_NODE + 16)
#define DISPID_DOM_NODE_OWNERDOC                    (DISPID_DOM_NODE + 17)
#define DISPID_DOM_NODE_CLONENODE                   (DISPID_DOM_NODE + 18)
#define DISPID_XMLDOM_NODE                          (DISPID_DOM_NODE + 19)
#define DISPID_XMLDOM_NODE_STRINGTYPE               (DISPID_XMLDOM_NODE + 1)
#define DISPID_XMLDOM_NODE_SPECIFIED                (DISPID_XMLDOM_NODE + 2)
#define DISPID_XMLDOM_NODE_DEFINITION               (DISPID_XMLDOM_NODE + 3)
#define DISPID_XMLDOM_NODE_TEXT                     (DISPID_XMLDOM_NODE + 4)
#define DISPID_XMLDOM_NODE_NODETYPEDVALUE           (DISPID_XMLDOM_NODE + 5)
#define DISPID_XMLDOM_NODE_DATATYPE                 (DISPID_XMLDOM_NODE + 6)
#define DISPID_XMLDOM_NODE_XML                      (DISPID_XMLDOM_NODE + 7)
#define DISPID_XMLDOM_NODE_TRANSFORMNODE            (DISPID_XMLDOM_NODE + 8)
#define DISPID_XMLDOM_NODE_SELECTNODES              (DISPID_XMLDOM_NODE + 9)
#define DISPID_XMLDOM_NODE_SELECTSINGLENODE         (DISPID_XMLDOM_NODE + 10)
#define DISPID_XMLDOM_NODE_PARSED                   (DISPID_XMLDOM_NODE + 11)
#define DISPID_XMLDOM_NODE_NAMESPACE                (DISPID_XMLDOM_NODE + 12)
#define DISPID_XMLDOM_NODE_PREFIX                   (DISPID_XMLDOM_NODE + 13)
#define DISPID_XMLDOM_NODE_BASENAME                 (DISPID_XMLDOM_NODE + 14)
#define DISPID_XMLDOM_NODE_TRANSFORMNODETOOBJECT    (DISPID_XMLDOM_NODE + 15)
#define DISPID_XMLDOM_NODE__TOP                     (DISPID_XMLDOM_NODE + 16)

#define DISPID_DOM_DOCUMENT                        (DISPID_XMLDOM_NODE__TOP + 1)
#define DISPID_DOM_DOCUMENT_DOCTYPE                (DISPID_DOM_DOCUMENT + 1)
#define DISPID_DOM_DOCUMENT_IMPLEMENTATION         (DISPID_DOM_DOCUMENT + 2)
#define DISPID_DOM_DOCUMENT_DOCUMENTELEMENT        (DISPID_DOM_DOCUMENT + 3)
#define DISPID_DOM_DOCUMENT_CREATEELEMENT          (DISPID_DOM_DOCUMENT + 4)
#define DISPID_DOM_DOCUMENT_CREATEDOCUMENTFRAGMENT (DISPID_DOM_DOCUMENT + 5)
#define DISPID_DOM_DOCUMENT_CREATETEXTNODE         (DISPID_DOM_DOCUMENT + 6)
#define DISPID_DOM_DOCUMENT_CREATECOMMENT          (DISPID_DOM_DOCUMENT + 7)
#define DISPID_DOM_DOCUMENT_CREATECDATASECTION     (DISPID_DOM_DOCUMENT + 8)
#define DISPID_DOM_DOCUMENT_CREATEPROCESSINGINSTRUCTION (DISPID_DOM_DOCUMENT + 9)
#define DISPID_DOM_DOCUMENT_CREATEATTRIBUTE        (DISPID_DOM_DOCUMENT + 10)
#define DISPID_DOM_DOCUMENT_CREATEENTITY           (DISPID_DOM_DOCUMENT + 11)
#define DISPID_DOM_DOCUMENT_CREATEENTITYREFERENCE  (DISPID_DOM_DOCUMENT + 12)
#define DISPID_DOM_DOCUMENT_GETELEMENTSBYTAGNAME   (DISPID_DOM_DOCUMENT + 13)
#define DISPID_DOM_DOCUMENT_TOP                    (DISPID_DOM_DOCUMENT + 14)
#define DISPID_XMLDOM_DOCUMENT                     (DISPID_DOM_DOCUMENT + 15)
#define DISPID_XMLDOM_DOCUMENT_DOCUMENTNODE        (DISPID_XMLDOM_DOCUMENT + 1)
#define DISPID_XMLDOM_DOCUMENT_CREATENODE          (DISPID_XMLDOM_DOCUMENT + 2)
#define DISPID_XMLDOM_DOCUMENT_CREATENODEEX        (DISPID_XMLDOM_DOCUMENT + 3)
#define DISPID_XMLDOM_DOCUMENT_NODEFROMID          (DISPID_XMLDOM_DOCUMENT + 4)
#define DISPID_XMLDOM_DOCUMENT_DOCUMENTNAMESPACES  (DISPID_XMLDOM_DOCUMENT + 5)
#define DISPID_XMLDOM_DOCUMENT_LOAD                (DISPID_XMLDOM_DOCUMENT + 6)
#define DISPID_XMLDOM_DOCUMENT_PARSEERROR          (DISPID_XMLDOM_DOCUMENT + 7)
#define DISPID_XMLDOM_DOCUMENT_URL                 (DISPID_XMLDOM_DOCUMENT + 8)
#define DISPID_XMLDOM_DOCUMENT_ASYNC               (DISPID_XMLDOM_DOCUMENT + 9)
#define DISPID_XMLDOM_DOCUMENT_ABORT               (DISPID_XMLDOM_DOCUMENT + 10)
#define DISPID_XMLDOM_DOCUMENT_LOADXML             (DISPID_XMLDOM_DOCUMENT + 11)
#define DISPID_XMLDOM_DOCUMENT_SAVE                (DISPID_XMLDOM_DOCUMENT + 12)
#define DISPID_XMLDOM_DOCUMENT_VALIDATE            (DISPID_XMLDOM_DOCUMENT + 13)
#define DISPID_XMLDOM_DOCUMENT_RESOLVENAMESPACE    (DISPID_XMLDOM_DOCUMENT + 14)
#define DISPID_XMLDOM_DOCUMENT_PRESERVEWHITESPACE  (DISPID_XMLDOM_DOCUMENT + 15)
#define DISPID_XMLDOM_DOCUMENT_ONREADYSTATECHANGE  (DISPID_XMLDOM_DOCUMENT + 16)
#define DISPID_XMLDOM_DOCUMENT_ONDATAAVAILABLE     (DISPID_XMLDOM_DOCUMENT + 17)
#define DISPID_XMLDOM_DOCUMENT_ONTRANSFORMNODE     (DISPID_XMLDOM_DOCUMENT + 18)
#define DISPID_XMLDOM_DOCUMENT__TOP                (DISPID_XMLDOM_DOCUMENT + 19)

#define DISPID_DOM_NODELIST             (DISPID_XMLDOM_DOCUMENT__TOP + 1)
#define DISPID_DOM_NODELIST_ITEM        (DISPID_DOM_NODELIST + 1)
#define DISPID_DOM_NODELIST_LENGTH      (DISPID_DOM_NODELIST + 2)
#define DISPID_XMLDOM_NODELIST          (DISPID_DOM_NODELIST + 3)
#define DISPID_XMLDOM_NODELIST_NEXTNODE (DISPID_XMLDOM_NODELIST + 1)
#define DISPID_XMLDOM_NODELIST_RESET    (DISPID_XMLDOM_NODELIST + 2)
#define DISPID_XMLDOM_NODELIST_NEWENUM  (DISPID_XMLDOM_NODELIST + 3)
#define DISPID_XMLDOM_NODELIST__TOP     (DISPID_XMLDOM_NODELIST + 4)


#define DISPID_DOM_NAMEDNODEMAP                         (DISPID_XMLDOM_NODELIST__TOP + 1)
#define DISPID_DOM_NAMEDNODEMAP_GETNAMEDITEM            (DISPID_DOM_NAMEDNODEMAP + 3)
#define DISPID_DOM_NAMEDNODEMAP_SETNAMEDITEM            (DISPID_DOM_NAMEDNODEMAP + 4)
#define DISPID_DOM_NAMEDNODEMAP_REMOVENAMEDITEM         (DISPID_DOM_NAMEDNODEMAP + 5)
#define DISPID_XMLDOM_NAMEDNODEMAP                      (DISPID_DOM_NAMEDNODEMAP + 6)
#define DISPID_XMLDOM_NAMEDNODEMAP_GETQUALIFIEDITEM     (DISPID_XMLDOM_NAMEDNODEMAP + 1)
#define DISPID_XMLDOM_NAMEDNODEMAP_REMOVEQUALIFIEDITEM  (DISPID_XMLDOM_NAMEDNODEMAP + 2)
#define DISPID_XMLDOM_NAMEDNODEMAP_NEXTNODE             (DISPID_XMLDOM_NAMEDNODEMAP + 3)
#define DISPID_XMLDOM_NAMEDNODEMAP_RESET                (DISPID_XMLDOM_NAMEDNODEMAP + 4)
#define DISPID_XMLDOM_NAMEDNODEMAP_NEWENUM              (DISPID_XMLDOM_NAMEDNODEMAP + 5)
#define DISPID_XMLDOM_NAMEDNODEMAP__TOP                 (DISPID_XMLDOM_NAMEDNODEMAP + 6)


#define DISPID_DOM_W3CWRAPPERS                 (DISPID_XMLDOM_NAMEDNODEMAP__TOP + 1)

#define DISPID_DOM_DOCUMENTFRAGMENT            (DISPID_DOM_W3CWRAPPERS + 1)
#define DISPID_DOM_DOCUMENTFRAGMENT__TOP       (DISPID_DOM_DOCUMENTFRAGMENT + 1)

#define DISPID_DOM_ELEMENT                         (DISPID_DOM_DOCUMENTFRAGMENT__TOP + 1)
#define DISPID_DOM_ELEMENT_GETTAGNAME              (DISPID_DOM_ELEMENT + 1)
#define DISPID_DOM_ELEMENT_GETATTRIBUTES           (DISPID_DOM_ELEMENT + 2)
#define DISPID_DOM_ELEMENT_GETATTRIBUTE            (DISPID_DOM_ELEMENT + 3)
#define DISPID_DOM_ELEMENT_SETATTRIBUTE            (DISPID_DOM_ELEMENT + 4)
#define DISPID_DOM_ELEMENT_REMOVEATTRIBUTE         (DISPID_DOM_ELEMENT + 5)
#define DISPID_DOM_ELEMENT_GETATTRIBUTENODE        (DISPID_DOM_ELEMENT + 6)
#define DISPID_DOM_ELEMENT_SETATTRIBUTENODE        (DISPID_DOM_ELEMENT + 7)
#define DISPID_DOM_ELEMENT_REMOVEATTRIBUTENODE     (DISPID_DOM_ELEMENT + 8)
#define DISPID_DOM_ELEMENT_GETELEMENTSBYTAGNAME    (DISPID_DOM_ELEMENT + 9)
#define DISPID_DOM_ELEMENT_NORMALIZE               (DISPID_DOM_ELEMENT + 10)
#define DISPID_DOM_ELEMENT__TOP                    (DISPID_DOM_ELEMENT + 11)

#define DISPID_DOM_DATA                        (DISPID_DOM_ELEMENT__TOP + 1)
#define DISPID_DOM_DATA_DATA                   (DISPID_DOM_DATA + 1)
#define DISPID_DOM_DATA_LENGTH                 (DISPID_DOM_DATA + 2)
#define DISPID_DOM_DATA_SUBSTRING              (DISPID_DOM_DATA + 3)
#define DISPID_DOM_DATA_APPEND                 (DISPID_DOM_DATA + 4)
#define DISPID_DOM_DATA_INSERT                 (DISPID_DOM_DATA + 5)
#define DISPID_DOM_DATA_DELETE                 (DISPID_DOM_DATA + 6)
#define DISPID_DOM_DATA_REPLACE                (DISPID_DOM_DATA + 7)
#define DISPID_DOM_DATA__TOP                   (DISPID_DOM_DATA + 8)

#define DISPID_DOM_ATTRIBUTE                   (DISPID_DOM_DATA__TOP + 1)
#define DISPID_DOM_ATTRIBUTE_GETNAME           (DISPID_DOM_ATTRIBUTE + 1)
#define DISPID_DOM_ATTRIBUTE_SPECIFIED         (DISPID_DOM_ATTRIBUTE + 2)
#define DISPID_DOM_ATTRIBUTE_VALUE             (DISPID_DOM_ATTRIBUTE + 3)
#define DISPID_DOM_ATTRIBUTE__TOP              (DISPID_DOM_ATTRIBUTE + 4)

#define DISPID_DOM_TEXT                (DISPID_DOM_ATTRIBUTE__TOP + 1)
#define DISPID_DOM_TEXT_SPLITTEXT      (DISPID_DOM_TEXT + 1)
#define DISPID_DOM_TEXT_JOINTEXT       (DISPID_DOM_TEXT + 2)
#define DISPID_DOM_TEXT__TOP           (DISPID_DOM_TEXT + 3)

#define DISPID_DOM_PI           (DISPID_DOM_TEXT__TOP + 1)
#define DISPID_DOM_PI_TARGET    (DISPID_DOM_PI + 1)
#define DISPID_DOM_PI_DATA      (DISPID_DOM_PI + 2)
#define DISPID_DOM_PI__TOP      (DISPID_DOM_PI + 3)

#define DISPID_DOM_DOCUMENTTYPE            (DISPID_DOM_PI__TOP + 1)
#define DISPID_DOM_DOCUMENTTYPE_NAME       (DISPID_DOM_DOCUMENTTYPE + 1)
#define DISPID_DOM_DOCUMENTTYPE_ENTITIES   (DISPID_DOM_DOCUMENTTYPE + 2)
#define DISPID_DOM_DOCUMENTTYPE_NOTATIONS  (DISPID_DOM_DOCUMENTTYPE + 3)
#define DISPID_DOM_DOCUMENTTYPE__TOP       (DISPID_DOM_DOCUMENTTYPE + 4)

#define DISPID_DOM_NOTATION                (DISPID_DOM_DOCUMENTTYPE__TOP + 1)
#define DISPID_DOM_NOTATION_PUBLICID       (DISPID_DOM_NOTATION + 1)
#define DISPID_DOM_NOTATION_SYSTEMID       (DISPID_DOM_NOTATION + 2)
#define DISPID_DOM_NOTATION__TOP           (DISPID_DOM_NOTATION + 3)

#define DISPID_DOM_ENTITY                  (DISPID_DOM_NOTATION__TOP + 1)
#define DISPID_DOM_ENTITY_PUBLICID         (DISPID_DOM_ENTITY + 1)
#define DISPID_DOM_ENTITY_SYSTEMID         (DISPID_DOM_ENTITY + 2)
#define DISPID_DOM_ENTITY_NOTATIONNAME     (DISPID_DOM_ENTITY + 3)
#define DISPID_DOM_ENTITY__TOP             (DISPID_DOM_ENTITY + 4)

//define DISPID_DOM_COMMENT         
//define DISPID_DOM_CDATASECTION
//define DISPID_DOM_ENTITYREFERENCE

#define DISPID_DOM_W3CWRAPPERS_TOP         (DISPID_DOM_ENTITY__TOP)


#define DISPID_DOM_IMPLEMENTATION              (DISPID_DOM_W3CWRAPPERS_TOP + 1)
#define DISPID_DOM_IMPLEMENTATION_HASFEATURE   (DISPID_DOM_IMPLEMENTATION + 1)
#define DISPID_DOM_IMPLEMENTATION__TOP         (DISPID_DOM_IMPLEMENTATION + 2)

#define DISPID_DOM__TOP         (DISPID_DOM_IMPLEMENTATION + 0x20)


#define  DISPID_DOM_ERROR                      (DISPID_DOM__TOP  + 1)
#define  DISPID_DOM_ERROR_ERRORCODE            (DISPID_DOM_ERROR  +  1)
#define  DISPID_DOM_ERROR_URL                  (DISPID_DOM_ERROR  +  2)
#define  DISPID_DOM_ERROR_REASON               (DISPID_DOM_ERROR  +  3)
#define  DISPID_DOM_ERROR_SRCTEXT              (DISPID_DOM_ERROR  +  4)
#define  DISPID_DOM_ERROR_LINE                 (DISPID_DOM_ERROR  +  5)
#define  DISPID_DOM_ERROR_LINEPOS              (DISPID_DOM_ERROR  +  6)
#define  DISPID_DOM_ERROR_FILEPOS              (DISPID_DOM_ERROR  +  7)
#define  DISPID_DOM_ERROR__TOP                 (DISPID_DOM_ERROR  +  8)

#define  DISPID_XTLRUNTIME                         (DISPID_DOM_ERROR__TOP + 1)
#define  DISPID_XTLRUNTIME_UNIQUEID                (DISPID_XTLRUNTIME + 1)
#define  DISPID_XTLRUNTIME_DEPTH                   (DISPID_XTLRUNTIME + 2)
#define  DISPID_XTLRUNTIME_CHILDNUMBER             (DISPID_XTLRUNTIME + 3)
#define  DISPID_XTLRUNTIME_ANCESTORCHILDNUMBER     (DISPID_XTLRUNTIME + 4)
#define  DISPID_XTLRUNTIME_ABSOLUTECHILDNUMBER     (DISPID_XTLRUNTIME + 5)
#define  DISPID_XTLRUNTIME_FORMATINDEX             (DISPID_XTLRUNTIME + 6)
#define  DISPID_XTLRUNTIME_FORMATNUMBER            (DISPID_XTLRUNTIME + 7)
#define  DISPID_XTLRUNTIME_FORMATDATE              (DISPID_XTLRUNTIME + 8)
#define  DISPID_XTLRUNTIME_FORMATTIME              (DISPID_XTLRUNTIME + 9)
#define  DISPID_XTLRUNTIME__TOP                    (DISPID_XTLRUNTIME + 10)

#define  DISPID_XMLDOMEVENT                        (DISPID_XTLRUNTIME__TOP + 1)
#define  DISPID_XMLDOMEVENT_ONREADYSTATECHANGE     (DISPID_READYSTATECHANGE)
#define  DISPID_XMLDOMEVENT_ONDATAAVAILABLE        (DISPID_XMLDOMEVENT + 1)
#define  DISPID_XMLDOMEVENT__TOP                   (DISPID_XMLDOMEVENT + 2)

#define DISPID_XMLDOM_DOCUMENT2                    (DISPID_XMLDOMEVENT__TOP + 1)
#define DISPID_XMLDOM_DOCUMENT2_NAMESPACES         (DISPID_XMLDOM_DOCUMENT2 + 1)
#define DISPID_XMLDOM_DOCUMENT2_SCHEMAS            (DISPID_XMLDOM_DOCUMENT2 + 2)
#define DISPID_XMLDOM_DOCUMENT2_VALIDATE           (DISPID_XMLDOM_DOCUMENT2 + 3)
#define DISPID_XMLDOM_DOCUMENT2_SETPROPERTY        (DISPID_XMLDOM_DOCUMENT2 + 4)
#define DISPID_XMLDOM_DOCUMENT2_GETPROPERTY        (DISPID_XMLDOM_DOCUMENT2 + 5)
#define DISPID_XMLDOM_DOCUMENT2__TOP               (DISPID_XMLDOM_DOCUMENT2 + 6)

#define DISPID_XMLDOM_SCHEMACOLLECTION               (DISPID_DOM_BASE + 1)
#define DISPID_XMLDOM_SCHEMACOLLECTION_ADD           (DISPID_XMLDOM_SCHEMACOLLECTION + 1)
#define DISPID_XMLDOM_SCHEMACOLLECTION_GET           (DISPID_XMLDOM_SCHEMACOLLECTION + 2)
#define DISPID_XMLDOM_SCHEMACOLLECTION_REMOVE        (DISPID_XMLDOM_SCHEMACOLLECTION + 3)
#define DISPID_XMLDOM_SCHEMACOLLECTION_LENGTH        (DISPID_XMLDOM_SCHEMACOLLECTION + 4)
#define DISPID_XMLDOM_SCHEMACOLLECTION_NAMESPACEURI  (DISPID_XMLDOM_SCHEMACOLLECTION + 5)
#define DISPID_XMLDOM_SCHEMACOLLECTION_ADDCOLLECTION (DISPID_XMLDOM_SCHEMACOLLECTION + 6)
#define DISPID_XMLDOM_SCHEMACOLLECTION__TOP          (DISPID_XMLDOM_SCHEMACOLLECTION + 7)

#define DISPID_XMLDOM_SELECTION                    (DISPID_XMLDOM_NODELIST__TOP + 1)
#define DISPID_XMLDOM_SELECTION_EXPR               (DISPID_XMLDOM_SELECTION + 1)
#define DISPID_XMLDOM_SELECTION_CONTEXT            (DISPID_XMLDOM_SELECTION + 2)
#define DISPID_XMLDOM_SELECTION_PEEKNODE           (DISPID_XMLDOM_SELECTION + 3)
#define DISPID_XMLDOM_SELECTION_MATCHES            (DISPID_XMLDOM_SELECTION + 4)
#define DISPID_XMLDOM_SELECTION_REMOVENEXT         (DISPID_XMLDOM_SELECTION + 5)
#define DISPID_XMLDOM_SELECTION_REMOVEALL          (DISPID_XMLDOM_SELECTION + 6)
#define DISPID_XMLDOM_SELECTION_CLONE              (DISPID_XMLDOM_SELECTION + 7)
#define DISPID_XMLDOM_SELECTION_GETPROPERTY        (DISPID_XMLDOM_SELECTION + 8)
#define DISPID_XMLDOM_SELECTION_SETPROPERTY        (DISPID_XMLDOM_SELECTION + 9)
#define DISPID_XMLDOM_SELECTION__TOP               (DISPID_XMLDOM_SELECTION + 10)

#define DISPID_XMLDOM_TEMPLATE                     (DISPID_DOM_BASE)
#define DISPID_XMLDOM_TEMPLATE_STYLESHEET          (DISPID_XMLDOM_TEMPLATE + 1)
#define DISPID_XMLDOM_TEMPLATE_CREATEPROCESSOR     (DISPID_XMLDOM_TEMPLATE + 2)
#define DISPID_XMLDOM_TEMPLATE__TOP                (DISPID_XMLDOM_TEMPLATE + 3)

#define DISPID_XMLDOM_PROCESSOR                    (DISPID_DOM_BASE)
#define DISPID_XMLDOM_PROCESSOR_INPUT              (DISPID_XMLDOM_PROCESSOR + 1)
#define DISPID_XMLDOM_PROCESSOR_XSLTEMPLATE        (DISPID_XMLDOM_PROCESSOR + 2)
#define DISPID_XMLDOM_PROCESSOR_SETSTARTMODE       (DISPID_XMLDOM_PROCESSOR + 3)
#define DISPID_XMLDOM_PROCESSOR_STARTMODE          (DISPID_XMLDOM_PROCESSOR + 4)
#define DISPID_XMLDOM_PROCESSOR_STARTMODEURI       (DISPID_XMLDOM_PROCESSOR + 5)
#define DISPID_XMLDOM_PROCESSOR_OUTPUT             (DISPID_XMLDOM_PROCESSOR + 6)
#define DISPID_XMLDOM_PROCESSOR_TRANSFORM          (DISPID_XMLDOM_PROCESSOR + 7)
#define DISPID_XMLDOM_PROCESSOR_RESET              (DISPID_XMLDOM_PROCESSOR + 8)
#define DISPID_XMLDOM_PROCESSOR_READYSTATE         (DISPID_XMLDOM_PROCESSOR + 9)
#define DISPID_XMLDOM_PROCESSOR_ADDPARAMETER       (DISPID_XMLDOM_PROCESSOR + 10)
#define DISPID_XMLDOM_PROCESSOR_ADDOBJECT          (DISPID_XMLDOM_PROCESSOR + 11)
#define DISPID_XMLDOM_PROCESSOR_STYLESHEET         (DISPID_XMLDOM_PROCESSOR + 12)
#define DISPID_XMLDOM_PROCESSOR__TOP               (DISPID_XMLDOM_PROCESSOR + 13)

#define  DISPID_XMLDSO                       DISPID_XOBJ_BASE
#define  DISPID_XMLDSO_DOCUMENT              DISPID_XMLDSO  +  1
#define  DISPID_XMLDSO_JAVADSOCOMPATIBLE     DISPID_XMLDSO_DOCUMENT  +  1


#define DISPID_SAX_XMLREADER__MIN                 0x00000501
#define DISPID_SAX_XMLREADER__MAX                 0x00010000
#define DISPID_SAX_XMLREADER__BASE                DISPID_SAX_XMLREADER__MIN

#define DISPID_SAX_XMLREADER                (DISPID_SAX_XMLREADER__BASE)
#define DISPID_SAX_XMLREADER_GETFEATURE     (DISPID_SAX_XMLREADER + 1)
#define DISPID_SAX_XMLREADER_PUTFEATURE     (DISPID_SAX_XMLREADER + 2)
#define DISPID_SAX_XMLREADER_GETPROPERTY    (DISPID_SAX_XMLREADER + 3)
#define DISPID_SAX_XMLREADER_PUTPROPERTY    (DISPID_SAX_XMLREADER + 4)
#define DISPID_SAX_XMLREADER_ENTITYRESOLVER (DISPID_SAX_XMLREADER + 5)
#define DISPID_SAX_XMLREADER_CONTENTHANDLER (DISPID_SAX_XMLREADER + 6)
#define DISPID_SAX_XMLREADER_DTDHANDLER     (DISPID_SAX_XMLREADER + 7)
#define DISPID_SAX_XMLREADER_ERRORHANDLER   (DISPID_SAX_XMLREADER + 8)
#define DISPID_SAX_XMLREADER_BASEURL        (DISPID_SAX_XMLREADER + 9)
#define DISPID_SAX_XMLREADER_SECUREBASEURL  (DISPID_SAX_XMLREADER + 10)
#define DISPID_SAX_XMLREADER_PARSE          (DISPID_SAX_XMLREADER + 11)
#define DISPID_SAX_XMLREADER_PARSEURL       (DISPID_SAX_XMLREADER + 12)
#define DISPID_SAX_XMLREADER_PARENT         (DISPID_SAX_XMLREADER + 13)
#define DISPID_SAX_XMLREADER__TOP           (DISPID_SAX_XMLREADER + 14)

#define DISPID_SAX_XMLFILTER__BASE          (DISPID_SAX_XMLREADER__TOP + 1)
#define DISPID_SAX_XMLFILTER                (DISPID_SAX_XMLFILTER__BASE)
#define DISPID_SAX_XMLFILTER_GETFEATURE     (DISPID_SAX_XMLFILTER + 1)
#define DISPID_SAX_XMLFILTER_PUTFEATURE     (DISPID_SAX_XMLFILTER + 2)
#define DISPID_SAX_XMLFILTER_GETPROPERTY    (DISPID_SAX_XMLFILTER + 3)
#define DISPID_SAX_XMLFILTER_PUTPROPERTY    (DISPID_SAX_XMLFILTER + 4)
#define DISPID_SAX_XMLFILTER_ENTITYRESOLVER (DISPID_SAX_XMLFILTER + 5)
#define DISPID_SAX_XMLFILTER_CONTENTHANDLER (DISPID_SAX_XMLFILTER + 6)
#define DISPID_SAX_XMLFILTER_DTDHANDLER     (DISPID_SAX_XMLFILTER + 7)
#define DISPID_SAX_XMLFILTER_ERRORHANDLER   (DISPID_SAX_XMLFILTER + 8)
#define DISPID_SAX_XMLFILTER_BASEURL        (DISPID_SAX_XMLFILTER + 9)
#define DISPID_SAX_XMLFILTER_SECUREBASEURL  (DISPID_SAX_XMLFILTER + 10)
#define DISPID_SAX_XMLFILTER_PARSE          (DISPID_SAX_XMLFILTER + 11)
#define DISPID_SAX_XMLFILTER_PARSEURL       (DISPID_SAX_XMLFILTER + 12)
#define DISPID_SAX_XMLFILTER_PARENT         (DISPID_SAX_XMLFILTER + 13)
#define DISPID_SAX_XMLFILTER__TOP           (DISPID_SAX_XMLFILTER + 15)

#define DISPID_SAX_LOCATOR__BASE        (DISPID_SAX_XMLFILTER__TOP + 1)
#define DISPID_SAX_LOCATOR              (DISPID_SAX_LOCATOR__BASE)
#define DISPID_SAX_LOCATOR_COLUMNNUMBER (DISPID_SAX_LOCATOR + 1)
#define DISPID_SAX_LOCATOR_LINENUMBER   (DISPID_SAX_LOCATOR + 2)
#define DISPID_SAX_LOCATOR_PUBLICID     (DISPID_SAX_LOCATOR + 3)
#define DISPID_SAX_LOCATOR_SYSTEMID     (DISPID_SAX_LOCATOR + 4)
#define DISPID_SAX_LOCATOR__TOP         (DISPID_SAX_LOCATOR + 5)

#define DISPID_SAX_ENTITYRESOLVER__BASE         (DISPID_SAX_LOCATOR__TOP + 1)
#define DISPID_SAX_ENTITYRESOLVER               (DISPID_SAX_ENTITYRESOLVER__BASE)
#define DISPID_SAX_ENTITYRESOLVER_RESOLVEENTITY (DISPID_SAX_ENTITYRESOLVER + 1)
#define DISPID_SAX_ENTITYRESOLVER__TOP          (DISPID_SAX_ENTITYRESOLVER + 2)

#define DISPID_SAX_CONTENTHANDLER__BASE                 (DISPID_SAX_ENTITYRESOLVER__TOP + 1)
#define DISPID_SAX_CONTENTHANDLER                       (DISPID_SAX_CONTENTHANDLER__BASE)
#define DISPID_SAX_CONTENTHANDLER_DOCUMENTLOCATOR       (DISPID_SAX_CONTENTHANDLER + 1)
#define DISPID_SAX_CONTENTHANDLER_STARTDOCUMENT         (DISPID_SAX_CONTENTHANDLER + 2)
#define DISPID_SAX_CONTENTHANDLER_ENDDOCUMENT           (DISPID_SAX_CONTENTHANDLER + 3)
#define DISPID_SAX_CONTENTHANDLER_STARTPREFIXMAPPING    (DISPID_SAX_CONTENTHANDLER + 4)
#define DISPID_SAX_CONTENTHANDLER_ENDPREFIXMAPPING      (DISPID_SAX_CONTENTHANDLER + 5)
#define DISPID_SAX_CONTENTHANDLER_STARTELEMENT          (DISPID_SAX_CONTENTHANDLER + 6)
#define DISPID_SAX_CONTENTHANDLER_ENDELEMENT            (DISPID_SAX_CONTENTHANDLER + 7)
#define DISPID_SAX_CONTENTHANDLER_CHARACTERS            (DISPID_SAX_CONTENTHANDLER + 8)
#define DISPID_SAX_CONTENTHANDLER_IGNORABLEWHITESPACE   (DISPID_SAX_CONTENTHANDLER + 9)
#define DISPID_SAX_CONTENTHANDLER_PROCESSINGINSTRUCTION (DISPID_SAX_CONTENTHANDLER + 10)
#define DISPID_SAX_CONTENTHANDLER_SKIPPEDENTITY         (DISPID_SAX_CONTENTHANDLER + 11)
#define DISPID_SAX_CONTENTHANDLER__TOP                  (DISPID_SAX_CONTENTHANDLER + 12)

#define DISPID_SAX_DTDHANDLER__BASE                 (DISPID_SAX_CONTENTHANDLER__TOP + 1)
#define DISPID_SAX_DTDHANDLER                       (DISPID_SAX_DTDHANDLER__BASE)
#define DISPID_SAX_DTDHANDLER_NOTATIONDECL          (DISPID_SAX_DTDHANDLER + 1)
#define DISPID_SAX_DTDHANDLER_UNPARSEDENTITYDECL    (DISPID_SAX_DTDHANDLER + 2)
#define DISPID_SAX_DTDHANDLER__TOP                  (DISPID_SAX_DTDHANDLER + 3)

#define DISPID_SAX_ERRORHANDLER__BASE               (DISPID_SAX_DTDHANDLER__TOP + 1)
#define DISPID_SAX_ERRORHANDLER                     (DISPID_SAX_ERRORHANDLER__BASE)
#define DISPID_SAX_ERRORHANDLER_ERROR               (DISPID_SAX_ERRORHANDLER + 1)
#define DISPID_SAX_ERRORHANDLER_FATALERROR          (DISPID_SAX_ERRORHANDLER + 2)
#define DISPID_SAX_ERRORHANDLER_IGNORABLEWARNING    (DISPID_SAX_ERRORHANDLER + 3)
#define DISPID_SAX_ERRORHANDLER__TOP                (DISPID_SAX_ERRORHANDLER + 4)

#define DISPID_SAX_ATTRIBUTES__BASE             (DISPID_SAX_ERRORHANDLER__TOP + 1)
#define DISPID_SAX_ATTRIBUTES                   (DISPID_SAX_ATTRIBUTES__BASE)
#define DISPID_SAX_ATTRIBUTES_LENGTH            (DISPID_SAX_ATTRIBUTES + 1)
#define DISPID_SAX_ATTRIBUTES_GETURI            (DISPID_SAX_ATTRIBUTES + 2)
#define DISPID_SAX_ATTRIBUTES_GETLOCALNAME      (DISPID_SAX_ATTRIBUTES + 3)
#define DISPID_SAX_ATTRIBUTES_GETQNAME          (DISPID_SAX_ATTRIBUTES + 4)
#define DISPID_SAX_ATTRIBUTES_GETINDEXFROMNAME  (DISPID_SAX_ATTRIBUTES + 5)
#define DISPID_SAX_ATTRIBUTES_GETINDEXFROMQNAME (DISPID_SAX_ATTRIBUTES + 6)
#define DISPID_SAX_ATTRIBUTES_GETTYPE           (DISPID_SAX_ATTRIBUTES + 7)
#define DISPID_SAX_ATTRIBUTES_GETTYPEFROMNAME   (DISPID_SAX_ATTRIBUTES + 8)
#define DISPID_SAX_ATTRIBUTES_GETTYPEFROMQNAME  (DISPID_SAX_ATTRIBUTES + 9)
#define DISPID_SAX_ATTRIBUTES_GETVALUE          (DISPID_SAX_ATTRIBUTES + 10)
#define DISPID_SAX_ATTRIBUTES_GETVALUEFROMNAME  (DISPID_SAX_ATTRIBUTES + 11)
#define DISPID_SAX_ATTRIBUTES_GETVALUEFROMQNAME (DISPID_SAX_ATTRIBUTES + 12)
#define DISPID_SAX_ATTRIBUTES__TOP              (DISPID_SAX_ATTRIBUTES + 13)

#define DISPID_SAX_LEXICALHANDLER__BASE         (DISPID_SAX_ATTRIBUTES__TOP + 1)
#define DISPID_SAX_LEXICALHANDLER               (DISPID_SAX_LEXICALHANDLER__BASE)
#define DISPID_SAX_LEXICALHANDLER_STARTDTD      (DISPID_SAX_LEXICALHANDLER + 1)
#define DISPID_SAX_LEXICALHANDLER_ENDDTD        (DISPID_SAX_LEXICALHANDLER + 2)
#define DISPID_SAX_LEXICALHANDLER_STARTENTITY   (DISPID_SAX_LEXICALHANDLER + 3)
#define DISPID_SAX_LEXICALHANDLER_ENDENTITY     (DISPID_SAX_LEXICALHANDLER + 4)
#define DISPID_SAX_LEXICALHANDLER_STARTCDATA    (DISPID_SAX_LEXICALHANDLER + 5)
#define DISPID_SAX_LEXICALHANDLER_ENDCDATA      (DISPID_SAX_LEXICALHANDLER + 6)
#define DISPID_SAX_LEXICALHANDLER_COMMENT       (DISPID_SAX_LEXICALHANDLER + 7)
#define DISPID_SAX_LEXICALHANDLER__TOP          (DISPID_SAX_LEXICALHANDLER + 8)

#define DISPID_SAX_DECLHANDLER__BASE              (DISPID_SAX_LEXICALHANDLER__TOP + 1)
#define DISPID_SAX_DECLHANDLER                    (DISPID_SAX_DECLHANDLER__BASE)
#define DISPID_SAX_DECLHANDLER_ELEMENTDECL        (DISPID_SAX_DECLHANDLER + 1)
#define DISPID_SAX_DECLHANDLER_ATTRIBUTEDECL      (DISPID_SAX_DECLHANDLER + 2)
#define DISPID_SAX_DECLHANDLER_INTERNALENTITYDECL (DISPID_SAX_DECLHANDLER + 3)
#define DISPID_SAX_DECLHANDLER_EXTERNALENTITYDECL (DISPID_SAX_DECLHANDLER + 4)
#define DISPID_SAX_DECLHANDLER__TOP               (DISPID_SAX_DECLHANDLER + 5)

#define DISPID_MX_ATTRIBUTES__BASE                 (DISPID_SAX_DECLHANDLER__TOP + 1)
#define DISPID_MX_ATTRIBUTES                       (DISPID_MX_ATTRIBUTES__BASE)
#define DISPID_MX_ATTRIBUTES_ADDATTRIBUTE          (DISPID_MX_ATTRIBUTES + 1)
#define DISPID_MX_ATTRIBUTES_CLEAR                 (DISPID_MX_ATTRIBUTES + 2)
#define DISPID_MX_ATTRIBUTES_REMOVEATTRIBUTE       (DISPID_MX_ATTRIBUTES + 3)
#define DISPID_MX_ATTRIBUTES_SETATTRIBUTE          (DISPID_MX_ATTRIBUTES + 4)
#define DISPID_MX_ATTRIBUTES_SETATTRIBUTES         (DISPID_MX_ATTRIBUTES + 5)
#define DISPID_MX_ATTRIBUTES_SETLOCALNAME          (DISPID_MX_ATTRIBUTES + 6)
#define DISPID_MX_ATTRIBUTES_SETQNAME              (DISPID_MX_ATTRIBUTES + 7)
#define DISPID_MX_ATTRIBUTES_SETTYPE               (DISPID_MX_ATTRIBUTES + 8)
#define DISPID_MX_ATTRIBUTES_SETURI                (DISPID_MX_ATTRIBUTES + 9)
#define DISPID_MX_ATTRIBUTES_SETVALUE              (DISPID_MX_ATTRIBUTES + 10)
#define DISPID_MX_ATTRIBUTES_ADDATTRIBUTEFROMINDEX (DISPID_MX_ATTRIBUTES + 11)
#define DISPID_MX_ATTRIBUTES__TOP                  (DISPID_MX_ATTRIBUTES + 11)

#define DISPID_MX_WRITER__BASE                 (DISPID_MX_ATTRIBUTES__TOP + 1)
#define DISPID_MX_WRITER                       (DISPID_MX_WRITER__BASE)
#define DISPID_MX_WRITER_OUTPUT                (DISPID_MX_WRITER + 1)
#define DISPID_MX_WRITER_DESTINATION           (DISPID_MX_WRITER + 2)
#define DISPID_MX_WRITER_ENCODING              (DISPID_MX_WRITER + 3)
#define DISPID_MX_WRITER_BYTEORDERMARK         (DISPID_MX_WRITER + 4)
#define DISPID_MX_WRITER_INDENT                (DISPID_MX_WRITER + 5)
#define DISPID_MX_WRITER_STANDALONE            (DISPID_MX_WRITER + 6)
#define DISPID_MX_WRITER_OMITXMLDECLARATION    (DISPID_MX_WRITER + 7)
#define DISPID_MX_WRITER_VERSION               (DISPID_MX_WRITER + 8)
#define DISPID_MX_WRITER_DISABLEOUTPUTESCAPING (DISPID_MX_WRITER + 9)
#define DISPID_MX_WRITER_FLUSH                 (DISPID_MX_WRITER + 10)
#define DISPID_MX_WRITER_RESET                 (DISPID_MX_WRITER + 11)
#define DISPID_MX_WRITER__TOP                  (DISPID_MX_WRITER + 12)

#define DISPID_MX_READER_CONTROL__BASE         (DISPID_MX_WRITER__TOP + 1)
#define DISPID_MX_READER_CONTROL               (DISPID_MX_READER_CONTROL__BASE)
#define DISPID_MX_READER_CONTROL_ABORT         (DISPID_MX_READER_CONTROL + 1)
#define DISPID_MX_READER_CONTROL_RESUME        (DISPID_MX_READER_CONTROL + 2)
#define DISPID_MX_READER_CONTROL_SUSPEND       (DISPID_MX_READER_CONTROL + 3)
#define DISPID_MX_READER_CONTROL__TOP          (DISPID_MX_READER_CONTROL + 4)

#define DISPID_MX_SCHEMADECLHANDLER__BASE               (DISPID_MX_READER_CONTROL__TOP + 1)
#define DISPID_MX_SCHEMADECLHANDLER                     (DISPID_MX_SCHEMADECLHANDLER__BASE)
#define DISPID_MX_SCHEMADECLHANDLER_SCHEMAELEMENTDECL   (DISPID_MX_SCHEMADECLHANDLER + 1)
#define DISPID_MX_SCHEMADECLHANDLER__TOP                (DISPID_MX_SCHEMADECLHANDLER + 2)

#define DISPID_MX_NSMGR__BASE                      (DISPID_MX_SCHEMADECLHANDLER__TOP + 1)
#define DISPID_MX_NSMGR                            (DISPID_MX_NSMGR__BASE)
#define DISPID_MX_NSMGR_ALLOWOVERRIDE              (DISPID_MX_NSMGR +   1)
#define DISPID_MX_NSMGR_RESET                      (DISPID_MX_NSMGR +   2)
#define DISPID_MX_NSMGR_PUSHCONTEXT                (DISPID_MX_NSMGR +   3)
#define DISPID_MX_NSMGR_PUSHNODECONTEXT            (DISPID_MX_NSMGR +   4)
#define DISPID_MX_NSMGR_POPCONTEXT                 (DISPID_MX_NSMGR +   5)
#define DISPID_MX_NSMGR_DECLAREPREFIX              (DISPID_MX_NSMGR +   6)
#define DISPID_MX_NSMGR_GETDECLAREDPREFIXES        (DISPID_MX_NSMGR +   7)
#define DISPID_MX_NSMGR_GETPREFIXES                (DISPID_MX_NSMGR +   8)
#define DISPID_MX_NSMGR_GETURI                     (DISPID_MX_NSMGR +   9)
#define DISPID_MX_NSMGR_GETURIFROMNODE             (DISPID_MX_NSMGR +  10)
#define DISPID_MX_NSMGR_LENGTH                     (DISPID_MX_NSMGR +  11)
#define DISPID_MX_NSMGR__TOP                       (DISPID_MX_NSMGR +  12)

// Schema Object Model DISPIDs
#define DISPID_SOM                      (DISPID_MX_NSMGR__TOP + 1)
#define DISPID_SOM_VALIDATE             (DISPID_SOM +  1)
#define DISPID_SOM_VALIDATEONLOAD       (DISPID_SOM +  2)
#define DISPID_SOM_GETSCHEMA            (DISPID_SOM +  3)
#define DISPID_SOM_GETDECLARATION       (DISPID_SOM +  4)
#define DISPID_SOM_ITEMBYNAME           (DISPID_SOM +  5)
#define DISPID_SOM_ITEMBYQNAME          (DISPID_SOM +  6)
#define DISPID_SOM_ANYATTRIBUTE         (DISPID_SOM +  7)
#define DISPID_SOM_ATTRIBUTEGROUPS      (DISPID_SOM +  8)
#define DISPID_SOM_ATTRIBUTES           (DISPID_SOM +  9)
#define DISPID_SOM_BASETYPES            (DISPID_SOM + 10)
#define DISPID_SOM_CONTENTMODEL         (DISPID_SOM + 11)
#define DISPID_SOM_CONTENTTYPE          (DISPID_SOM + 12)
#define DISPID_SOM_DEFAULTVALUE         (DISPID_SOM + 13)
#define DISPID_SOM_DERIVEDBY            (DISPID_SOM + 14)
#define DISPID_SOM_DISALLOWED           (DISPID_SOM + 15)
#define DISPID_SOM_ELEMENTS             (DISPID_SOM + 16)
#define DISPID_SOM_ENUMERATION          (DISPID_SOM + 17)
#define DISPID_SOM_FIELDS               (DISPID_SOM + 18)
#define DISPID_SOM_FINAL                (DISPID_SOM + 19)
#define DISPID_SOM_FIXEDVALUE           (DISPID_SOM + 20)
#define DISPID_SOM_FRACTIONDIGITS       (DISPID_SOM + 21)
#define DISPID_SOM_ID                   (DISPID_SOM + 22)
#define DISPID_SOM_IDCONSTRAINTS        (DISPID_SOM + 23)
#define DISPID_SOM_ISABSTRACT           (DISPID_SOM + 24)
#define DISPID_SOM_ISNILLABLE           (DISPID_SOM + 25)
#define DISPID_SOM_ISREFERENCE          (DISPID_SOM + 26)
#define DISPID_SOM_ISVALID              (DISPID_SOM + 27)
#define DISPID_SOM_ITEMTYPE             (DISPID_SOM + 28)
#define DISPID_SOM_LENGTH               (DISPID_SOM + 29)
#define DISPID_SOM_MAXEXCLUSIVE         (DISPID_SOM + 30)
#define DISPID_SOM_MAXINCLUSIVE         (DISPID_SOM + 31)
#define DISPID_SOM_MAXLENGTH            (DISPID_SOM + 32)
#define DISPID_SOM_MAXOCCURS            (DISPID_SOM + 33)
#define DISPID_SOM_MINEXCLUSIVE         (DISPID_SOM + 34)
#define DISPID_SOM_MININCLUSIVE         (DISPID_SOM + 35)
#define DISPID_SOM_MINLENGTH            (DISPID_SOM + 36)
#define DISPID_SOM_MINOCCURS            (DISPID_SOM + 37)
#define DISPID_SOM_MODELGROUPS          (DISPID_SOM + 38)
#define DISPID_SOM_NAME                 (DISPID_SOM + 39)
#define DISPID_SOM_NAMESPACES           (DISPID_SOM + 40)
#define DISPID_SOM_NAMESPACEURI         (DISPID_SOM + 41)
#define DISPID_SOM_NOTATIONS            (DISPID_SOM + 42)
#define DISPID_SOM_PARTICLES            (DISPID_SOM + 43)
#define DISPID_SOM_PATTERNS             (DISPID_SOM + 44)
#define DISPID_SOM_PROCESSCONTENTS      (DISPID_SOM + 45)
#define DISPID_SOM_PROHIBITED           (DISPID_SOM + 46)
#define DISPID_SOM_PUBLICIDENTIFIER     (DISPID_SOM + 47)
#define DISPID_SOM_REFERENCEDKEY        (DISPID_SOM + 48)
#define DISPID_SOM_SCHEMA               (DISPID_SOM + 49)
#define DISPID_SOM_SCHEMALOCATIONS      (DISPID_SOM + 50)
#define DISPID_SOM_SCOPE                (DISPID_SOM + 51)
#define DISPID_SOM_SELECTOR             (DISPID_SOM + 52)
#define DISPID_SOM_SUBSTITUTIONGROUP    (DISPID_SOM + 53)
#define DISPID_SOM_EXCLUSIONS           (DISPID_SOM + 54)
#define DISPID_SOM_SYSTEMIDENTIFIER     (DISPID_SOM + 55)
#define DISPID_SOM_TARGETNAMESPACE      (DISPID_SOM + 56)
#define DISPID_SOM_TOTALDIGITS          (DISPID_SOM + 57)
#define DISPID_SOM_TYPE                 (DISPID_SOM + 58)
#define DISPID_SOM_TYPES                (DISPID_SOM + 59)
#define DISPID_SOM_UNHANDLEDATTRS       (DISPID_SOM + 60)
#define DISPID_SOM_USE                  (DISPID_SOM + 61)
#define DISPID_SOM_VARIETY              (DISPID_SOM + 62)
#define DISPID_SOM_VERSION              (DISPID_SOM + 63)
#define DISPID_SOM_WHITESPACE           (DISPID_SOM + 64)
#define DISPID_SOM_WRITEANNOTATION      (DISPID_SOM + 65)
#define DISPID_SOM_TOP                  (DISPID_SOM + 66)

//;begin_internal
#endif // __MSXMLDID_H__
//;end_internal
