/**
 * Created by alic(AlicFeng) on 17-8-17 from CLion.
 * Email is alic@samego.com
 */
//

#include <stdio.h>
#include <stdlib.h>
#include <MySQL.h>
#define DB_SERVER ""
#define DB_NAME "test"
#define DB_USER "root"
#define DB_PWD ""
static MySQL *db_handel,MySQL;
static MySQL_ROW row;
static int query_error;
MySQL_RES *query_test(char *sql);
int query_show(MySQL_RES *result);

int main(int argc,char *argv[])
{
    MySQL_RES * results;
    results=query_test("select * from test");
    获取记录

            query_show(results);
    显示记录

    return 0;
}
//查询记录

MySQL_RES *query_test(char *sql)
{
    static MySQL_RES *query_result;
    printf("%s\n",sql);
    MySQL_init(&MySQL);
    db_handel=MySQL_real_connect(&MySQL,DB_SERVER,DB_USER,DB_PWD,DB_NAME,0,0,0);
//    打开读取MySQL数据库连接

    if(db_handel==NULL)
//        错误处理

    {

        printf(MySQL_error(&MySQL));
        return NULL;
    }
    query_error=MySQL_query(db_handel,sql);
//    查询

    if(query_error!=0)
//        错误处理

    {
        printf(MySQL_error(db_handel));
        return NULL;
    }
    query_result=MySQL_store_result(db_handel);
//    获取记录

    MySQL_close(db_handel);
//    关闭数据库

    return query_result;
//    返回记录

}
//显示记录

int query_show(MySQL_RES *result)
{
    unsigned int i,num_fields;
    MySQL_FIELD *fileds;
    num_fields=MySQL_num_fields(result);
//    获取字段数

    fileds=mysql_fetch_fields(result);
//    获取字段数组

    while((row=mysql_fetch_row(result))!=NULL)
//        循环显示

    {
        for(i=0;i<num_fields;i++)
        {
            printf("%s: %s \n",fileds[i].name,row[i]?row[i]:"NULL");
        }
    }
    return 0;
}