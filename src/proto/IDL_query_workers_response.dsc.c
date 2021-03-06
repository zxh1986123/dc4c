/* It had generated by DirectStruct v1.4.5 */
#include "IDL_query_workers_response.dsc.h"

int DSCINIT_query_workers_response( query_workers_response *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(query_workers_response) );
		for( index[1] = 0 ; index[1] < 1000 ; index[1]++ )
		{
		}
		pst->_nodes_size = 1000 ;
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_COMPACT_query_workers_response( query_workers_response *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"error\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->error); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"nodes\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"["); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
			for( index[1] = 0 ; index[1]<pst->_nodes_count ; index[1]++ )
			{
	len=SNPRINTF(buf,remain_len,"{"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"node\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"{"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"ip\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->nodes[index[1]].node.ip,strlen(pst->nodes[index[1]].node.ip),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"port\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->nodes[index[1]].node.port); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
			if((pst->_nodes_count==0)?(index[1]<1000-1):(index[1]<pst->_nodes_count-1))
			{ len=SNPRINTF(buf,remain_len,"},"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
			else
			{ len=SNPRINTF(buf,remain_len,"}"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
		}
	len=SNPRINTF(buf,remain_len,"]"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

funcCallbackOnJsonNode CallbackOnJsonNode_query_workers_response ;
int CallbackOnJsonNode_query_workers_response( int type , char *jpath , int jpath_len , int jpath_size , char *node , int node_len , char *content , int content_len , void *p )
{
	query_workers_response	*pst = (query_workers_response*)p ;
	int	index[10] = { 0 } ;
	int	len ;
	
	index[0] = 0 ;
	len = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
		if( jpath_len == 6 && strncmp( jpath , "/nodes" , jpath_len ) == 0 )
		{if(pst->_nodes_count>=1000)return -8;}
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
		if( jpath_len == 6 && strncmp( jpath , "/nodes" , jpath_len ) == 0 )
		{pst->_nodes_count++;}
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
		/* error */
		if( jpath_len == 6 && strncmp( jpath , "/error" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->error);}
				/* ip */
				if( jpath_len == 14 && strncmp( jpath , "/nodes/node/ip" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->nodes[pst->_nodes_count].node.ip,len,sizeof(pst->nodes[pst->_nodes_count].node.ip)-1); if(len<0)return -7;}
				/* port */
				if( jpath_len == 16 && strncmp( jpath , "/nodes/node/port" , jpath_len ) == 0 )
				{NATOI(content,content_len,pst->nodes[pst->_nodes_count].node.port);}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_COMPACT_query_workers_response( char *encoding , char *buf , int *p_len , query_workers_response *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_query_workers_response , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
