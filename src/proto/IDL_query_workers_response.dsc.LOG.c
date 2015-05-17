/* It had generated by DirectStruct v1.4.3 */
#include "IDL_query_workers_response.dsc.h"

#ifndef FUNCNAME_DSCLOG_query_workers_response
#define FUNCNAME_DSCLOG_query_workers_response	DSCLOG_query_workers_response
#endif

#ifndef PREFIX_DSCLOG_query_workers_response
#define PREFIX_DSCLOG_query_workers_response	printf( 
#endif

#ifndef NEWLINE_DSCLOG_query_workers_response
#define NEWLINE_DSCLOG_query_workers_response	"\n"
#endif

int FUNCNAME_DSCLOG_query_workers_response( query_workers_response *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_query_workers_response "query_workers_response.error[%d]" NEWLINE_DSCLOG_query_workers_response , pst->error );
		PREFIX_DSCLOG_query_workers_response "query_workers_response._nodes_count[%d]" NEWLINE_DSCLOG_query_workers_response , pst->_nodes_count );
		for( index[1] = 0 ; index[1] < pst->_nodes_count ; index[1]++ )
		{
			PREFIX_DSCLOG_query_workers_response "query_workers_response.nodes[index[1]].node.ip[%s]" NEWLINE_DSCLOG_query_workers_response , pst->nodes[index[1]].node.ip );
			PREFIX_DSCLOG_query_workers_response "query_workers_response.nodes[index[1]].node.port[%d]" NEWLINE_DSCLOG_query_workers_response , pst->nodes[index[1]].node.port );
		}
	return 0;
}
