/* Automatically generated by generate-command-help.rb, do not edit. */

#ifndef __REDIS_HELP_H
#define __REDIS_HELP_H

static char *commandGroups[] = {
    "generic",
    "string",
    "list",
    "set",
    "sorted_set",
    "hash",
    "pubsub",
    "transactions",
    "connection",
    "server"
};

struct commandHelp {
  char *name;
  char *params;
  char *summary;
  int group;
  char *since;
} commandHelp[] = {
    { "APPEND",
    "key value",
    "Append a value to a key",
    1,
    "1.3.3" },
    { "AUTH",
    "password",
    "Authenticate to the server",
    8,
    "0.08" },
    { "BGREWRITEAOF",
    "-",
    "Asynchronously rewrite the append-only file",
    9,
    "1.07" },
    { "BGSAVE",
    "-",
    "Asynchronously save the dataset to disk",
    9,
    "0.07" },
    { "BLPOP",
    "key [key ...] timeout",
    "Remove and get the first element in a list, or block until one is available",
    2,
    "1.3.1" },
    { "BRPOP",
    "key [key ...] timeout",
    "Remove and get the last element in a list, or block until one is available",
    2,
    "1.3.1" },
    { "BRPOPLPUSH",
    "source destination timeout",
    "Pop a value from a list, push it to another list and return it; or block until one is available",
    2,
    "2.1.7" },
    { "CONFIG GET",
    "parameter",
    "Get the value of a configuration parameter",
    9,
    "2.0" },
    { "CONFIG RESETSTAT",
    "-",
    "Reset the stats returned by INFO",
    9,
    "2.0" },
    { "CONFIG SET",
    "parameter value",
    "Set a configuration parameter to the given value",
    9,
    "2.0" },
    { "DBSIZE",
    "-",
    "Return the number of keys in the selected database",
    9,
    "0.07" },
    { "DEBUG OBJECT",
    "key",
    "Get debugging information about a key",
    9,
    "0.101" },
    { "DEBUG SEGFAULT",
    "-",
    "Make the server crash",
    9,
    "0.101" },
    { "DECR",
    "key",
    "Decrement the integer value of a key by one",
    1,
    "0.07" },
    { "DECRBY",
    "key decrement",
    "Decrement the integer value of a key by the given number",
    1,
    "0.07" },
    { "DEL",
    "key [key ...]",
    "Delete a key",
    0,
    "0.07" },
    { "DISCARD",
    "-",
    "Discard all commands issued after MULTI",
    7,
    "1.3.3" },
    { "ECHO",
    "message",
    "Echo the given string",
    8,
    "0.07" },
    { "EXEC",
    "-",
    "Execute all commands issued after MULTI",
    7,
    "1.1.95" },
    { "EXISTS",
    "key",
    "Determine if a key exists",
    9,
    "0.07" },
    { "EXPIRE",
    "key seconds",
    "Set a key's time to live in seconds",
    0,
    "0.09" },
    { "EXPIREAT",
    "key timestamp",
    "Set the expiration for a key as a UNIX timestamp",
    0,
    "1.1" },
    { "FLUSHALL",
    "-",
    "Remove all keys from all databases",
    9,
    "0.07" },
    { "FLUSHDB",
    "-",
    "Remove all keys from the current database",
    9,
    "0.07" },
    { "GET",
    "key",
    "Get the value of a key",
    1,
    "0.07" },
    { "GETBIT",
    "key offset",
    "Returns the bit value at offset in the string value stored at key",
    1,
    "2.1.8" },
    { "GETSET",
    "key value",
    "Set the string value of a key and return its old value",
    1,
    "0.091" },
    { "HDEL",
    "key field",
    "Delete a hash field",
    5,
    "1.3.10" },
    { "HEXISTS",
    "key field",
    "Determine if a hash field exists",
    5,
    "1.3.10" },
    { "HGET",
    "key field",
    "Get the value of a hash field",
    5,
    "1.3.10" },
    { "HGETALL",
    "key",
    "Get all the fields and values in a hash",
    5,
    "1.3.10" },
    { "HINCRBY",
    "key field increment",
    "Increment the integer value of a hash field by the given number",
    5,
    "1.3.10" },
    { "HKEYS",
    "key",
    "Get all the fields in a hash",
    5,
    "1.3.10" },
    { "HLEN",
    "key",
    "Get the number of fields in a hash",
    5,
    "1.3.10" },
    { "HMGET",
    "key field [field ...]",
    "Get the values of all the given hash fields",
    5,
    "1.3.10" },
    { "HMSET",
    "key field value [field value ...]",
    "Set multiple hash fields to multiple values",
    5,
    "1.3.8" },
    { "HSET",
    "key field value",
    "Set the string value of a hash field",
    5,
    "1.3.10" },
    { "HSETNX",
    "key field value",
    "Set the value of a hash field, only if the field does not exist",
    5,
    "1.3.8" },
    { "HVALS",
    "key",
    "Get all the values in a hash",
    5,
    "1.3.10" },
    { "INCR",
    "key",
    "Increment the integer value of a key by one",
    1,
    "0.07" },
    { "INCRBY",
    "key increment",
    "Increment the integer value of a key by the given number",
    1,
    "0.07" },
    { "INFO",
    "-",
    "Get information and statistics about the server",
    9,
    "0.07" },
    { "KEYS",
    "pattern",
    "Find all keys matching the given pattern",
    0,
    "0.07" },
    { "LASTSAVE",
    "-",
    "Get the UNIX time stamp of the last successful save to disk",
    9,
    "0.07" },
    { "LINDEX",
    "key index",
    "Get an element from a list by its index",
    2,
    "0.07" },
    { "LINSERT",
    "key BEFORE|AFTER pivot value",
    "Insert an element before or after another element in a list",
    2,
    "2.1.1" },
    { "LLEN",
    "key",
    "Get the length of a list",
    2,
    "0.07" },
    { "LPOP",
    "key",
    "Remove and get the first element in a list",
    2,
    "0.07" },
    { "LPUSH",
    "key value",
    "Prepend a value to a list",
    2,
    "0.07" },
    { "LPUSHX",
    "key value",
    "Prepend a value to a list, only if the list exists",
    2,
    "2.1.1" },
    { "LRANGE",
    "key start stop",
    "Get a range of elements from a list",
    2,
    "0.07" },
    { "LREM",
    "key count value",
    "Remove elements from a list",
    2,
    "0.07" },
    { "LSET",
    "key index value",
    "Set the value of an element in a list by its index",
    2,
    "0.07" },
    { "LTRIM",
    "key start stop",
    "Trim a list to the specified range",
    2,
    "0.07" },
    { "MGET",
    "key [key ...]",
    "Get the values of all the given keys",
    1,
    "0.07" },
    { "MONITOR",
    "-",
    "Listen for all requests received by the server in real time",
    9,
    "0.07" },
    { "MOVE",
    "key db",
    "Move a key to another database",
    0,
    "0.07" },
    { "MSET",
    "key value [key value ...]",
    "Set multiple keys to multiple values",
    1,
    "1.001" },
    { "MSETNX",
    "key value [key value ...]",
    "Set multiple keys to multiple values, only if none of the keys exist",
    1,
    "1.001" },
    { "MULTI",
    "-",
    "Mark the start of a transaction block",
    7,
    "1.1.95" },
    { "PERSIST",
    "key",
    "Remove the expiration from a key",
    0,
    "2.1.2" },
    { "PING",
    "-",
    "Ping the server",
    8,
    "0.07" },
    { "PSUBSCRIBE",
    "pattern",
    "Listen for messages published to channels matching the given patterns",
    6,
    "1.3.8" },
    { "PUBLISH",
    "channel message",
    "Post a message to a channel",
    6,
    "1.3.8" },
    { "PUNSUBSCRIBE",
    "[pattern [pattern ...]]",
    "Stop listening for messages posted to channels matching the given patterns",
    6,
    "1.3.8" },
    { "QUIT",
    "-",
    "Close the connection",
    8,
    "0.07" },
    { "RANDOMKEY",
    "-",
    "Return a random key from the keyspace",
    0,
    "0.07" },
    { "RENAME",
    "key newkey",
    "Rename a key",
    0,
    "0.07" },
    { "RENAMENX",
    "key newkey",
    "Rename a key, only if the new key does not exist",
    0,
    "0.07" },
    { "RPOP",
    "key",
    "Remove and get the last element in a list",
    2,
    "0.07" },
    { "RPOPLPUSH",
    "source destination",
    "Remove the last element in a list, append it to another list and return it",
    2,
    "1.1" },
    { "RPUSH",
    "key value",
    "Append a value to a list",
    2,
    "0.07" },
    { "RPUSHX",
    "key value",
    "Append a value to a list, only if the list exists",
    2,
    "2.1.1" },
    { "SADD",
    "key member",
    "Add a member to a set",
    3,
    "0.07" },
    { "SAVE",
    "-",
    "Synchronously save the dataset to disk",
    9,
    "0.07" },
    { "SCARD",
    "key",
    "Get the number of members in a set",
    3,
    "0.07" },
    { "SDIFF",
    "key [key ...]",
    "Subtract multiple sets",
    3,
    "0.100" },
    { "SDIFFSTORE",
    "destination key [key ...]",
    "Subtract multiple sets and store the resulting set in a key",
    3,
    "0.100" },
    { "SELECT",
    "index",
    "Change the selected database for the current connection",
    8,
    "0.07" },
    { "SET",
    "key value",
    "Set the string value of a key",
    1,
    "0.07" },
    { "SETBIT",
    "key offset value",
    "Sets or clears the bit at offset in the string value stored at key",
    1,
    "2.1.8" },
    { "SETEX",
    "key seconds value",
    "Set the value and expiration of a key",
    1,
    "1.3.10" },
    { "SETNX",
    "key value",
    "Set the value of a key, only if the key does not exist",
    1,
    "0.07" },
    { "SETRANGE",
    "key offset value",
    "Overwrite part of a string at key starting at the specified offset",
    1,
    "2.1.8" },
    { "SHUTDOWN",
    "-",
    "Synchronously save the dataset to disk and then shut down the server",
    9,
    "0.07" },
    { "SINTER",
    "key [key ...]",
    "Intersect multiple sets",
    3,
    "0.07" },
    { "SINTERSTORE",
    "destination key [key ...]",
    "Intersect multiple sets and store the resulting set in a key",
    3,
    "0.07" },
    { "SISMEMBER",
    "key member",
    "Determine if a given value is a member of a set",
    3,
    "0.07" },
    { "SLAVEOF",
    "host port",
    "Make the server a slave of another instance, or promote it as master",
    9,
    "0.100" },
    { "SMEMBERS",
    "key",
    "Get all the members in a set",
    3,
    "0.07" },
    { "SMOVE",
    "source destination member",
    "Move a member from one set to another",
    3,
    "0.091" },
    { "SORT",
    "key [BY pattern] [LIMIT offset count] [GET pattern [GET pattern ...]] [ASC|DESC] [ALPHA] [STORE destination]",
    "Sort the elements in a list, set or sorted set",
    0,
    "0.07" },
    { "SPOP",
    "key",
    "Remove and return a random member from a set",
    3,
    "0.101" },
    { "SRANDMEMBER",
    "key",
    "Get a random member from a set",
    3,
    "1.001" },
    { "SREM",
    "key member",
    "Remove a member from a set",
    3,
    "0.07" },
    { "STRLEN",
    "key",
    "Get the length of the value stored in a key",
    1,
    "2.1.2" },
    { "SUBSCRIBE",
    "channel",
    "Listen for messages published to the given channels",
    6,
    "1.3.8" },
    { "SUBSTR",
    "key start end",
    "Get a substring of the string stored at a key",
    1,
    "1.3.4" },
    { "SUNION",
    "key [key ...]",
    "Add multiple sets",
    3,
    "0.091" },
    { "SUNIONSTORE",
    "destination key [key ...]",
    "Add multiple sets and store the resulting set in a key",
    3,
    "0.091" },
    { "SYNC",
    "-",
    "Internal command used for replication",
    9,
    "0.07" },
    { "TTL",
    "key",
    "Get the time to live for a key",
    0,
    "0.100" },
    { "TYPE",
    "key",
    "Determine the type stored at key",
    0,
    "0.07" },
    { "UNSUBSCRIBE",
    "[channel [channel ...]]",
    "Stop listening for messages posted to the given channels",
    6,
    "1.3.8" },
    { "UNWATCH",
    "-",
    "Forget about all watched keys",
    7,
    "2.1.0" },
    { "WATCH",
    "key [key ...]",
    "Watch the given keys to determine execution of the MULTI/EXEC block",
    7,
    "2.1.0" },
    { "ZADD",
    "key score member",
    "Add a member to a sorted set, or update its score if it already exists",
    4,
    "1.1" },
    { "ZCARD",
    "key",
    "Get the number of members in a sorted set",
    4,
    "1.1" },
    { "ZCOUNT",
    "key min max",
    "Count the members in a sorted set with scores within the given values",
    4,
    "1.3.3" },
    { "ZINCRBY",
    "key increment member",
    "Increment the score of a member in a sorted set",
    4,
    "1.1" },
    { "ZINTERSTORE",
    "destination numkeys key [key ...] [WEIGHTS weight] [AGGREGATE SUM|MIN|MAX]",
    "Intersect multiple sorted sets and store the resulting sorted set in a new key",
    4,
    "1.3.10" },
    { "ZRANGE",
    "key start stop [WITHSCORES]",
    "Return a range of members in a sorted set, by index",
    4,
    "1.1" },
    { "ZRANGEBYSCORE",
    "key min max [WITHSCORES] [LIMIT offset count]",
    "Return a range of members in a sorted set, by score",
    4,
    "1.050" },
    { "ZRANK",
    "key member",
    "Determine the index of a member in a sorted set",
    4,
    "1.3.4" },
    { "ZREM",
    "key member",
    "Remove a member from a sorted set",
    4,
    "1.1" },
    { "ZREMRANGEBYRANK",
    "key start stop",
    "Remove all members in a sorted set within the given indexes",
    4,
    "1.3.4" },
    { "ZREMRANGEBYSCORE",
    "key min max",
    "Remove all members in a sorted set within the given scores",
    4,
    "1.1" },
    { "ZREVRANGE",
    "key start stop [WITHSCORES]",
    "Return a range of members in a sorted set, by index, with scores ordered from high to low",
    4,
    "1.1" },
    { "ZREVRANGEBYSCORE",
    "key max min [WITHSCORES] [LIMIT offset count]",
    "Return a range of members in a sorted set, by score, with scores ordered from high to low",
    4,
    "2.1.6" },
    { "ZREVRANK",
    "key member",
    "Determine the index of a member in a sorted set, with scores ordered from high to low",
    4,
    "1.3.4" },
    { "ZSCORE",
    "key member",
    "Get the score associated with the given member in a sorted set",
    4,
    "1.1" },
#ifdef USE_CQL
    { "FILTERS",
    "CQL filters",
    "Lists a mapping of data channels => CQL filters for stream parsing",
    0,
    "2.9.3" },
    { "FILTER",
    "register CQL filter",
    "Register a data channel => CQL filter mapping for stream parsing",
    0,
    "2.9.3" },
#endif
    { "ZUNIONSTORE",
    "destination numkeys key [key ...] [WEIGHTS weight] [AGGREGATE SUM|MIN|MAX]",
    "Add multiple sorted sets and store the resulting sorted set in a new key",
    4,
    "1.3.10" }
};

#endif
