#ifndef XML_TREE_H_PRIVATE__
#define XML_TREE_H_PRIVATE__

/*
 * Internal variable indicating if a callback has been registered for
 * node creation/destruction. It avoids spending a lot of time in locking
 * function while checking if the callback exists.
 */
XML_HIDDEN extern int
__xmlRegisterCallbacks;

XML_HIDDEN extern xmlNsPtr
xmlXmlNamespace;

XML_HIDDEN int
xmlNodeParseContent(xmlNodePtr node, const xmlChar *content, int len);
XML_HIDDEN xmlNodePtr
xmlStaticCopyNode(xmlNodePtr node, xmlDocPtr doc, xmlNodePtr parent,
                  int extended);
XML_HIDDEN xmlNodePtr
xmlStaticCopyNodeList(xmlNodePtr node, xmlDocPtr doc, xmlNodePtr parent);
XML_HIDDEN const xmlChar *
xmlSplitQName4(const xmlChar *name, xmlChar **prefixPtr);

#endif /* XML_TREE_H_PRIVATE__ */
