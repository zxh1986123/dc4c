STRUCT	query_workers_response
{
	INT	4	error
	STRUCT	nodes	ARRAY	1000
	{
		STRUCT	node
		{
			STRING	40	ip
			INT	4	port
		}
	}
}

