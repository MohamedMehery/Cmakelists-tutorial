#include <stdio.h>
#include <string.h>
#include <gtest/gtest.h>

using namespace ::testing;

/**
 * @brief this code take string like "feed-the dog/and@water the plant"
 *                            return "FeedTheDogAndWaterThePlant"
 * @return void 
 */
int ischar(char c)
{
    if ( c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else if( c >= 'a' && c <= 'z' )
    {
        return 1;
    }
    else
        return 0;
}


void stringfix(char * str)
{
    int j = 0;
    str[0] -= (int)('a' - 'A');
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(ischar(str[i]))
        {
            str[j++] = str[i];
        }
        else
        {
            str[i+1] -= (int)('a' - 'A');
        }
    }
    str[j] = 0;

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(!((i+1)%3))
        {
            str[i] = 'X';
        }
    }

    printf("\t%s\n",str);
}

TEST(teststringfixing , teststring)
{
    char str[50]="feed-the dog/and@water the plant"; 
    stringfix(str);
    EXPECT_STREQ(str, "FeXdTXeDXgAXdWXteXThXPlXnt" );
}

int main(int argc , char** argv)
{
    ::testing::InitGoogleTest(&argc , argv);
    // scanf("%s" , str);
    // printf("You entered \"%s\" \n" , str);


    return RUN_ALL_TESTS();
}