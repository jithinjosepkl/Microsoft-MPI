#pragma once

typedef struct ConnInfoType
{
    unsigned int pg_size;
    unsigned int pg_rank;
    char         business_card[512];
    GUID         pg_id;
} CONN_INFO_TYPE;
